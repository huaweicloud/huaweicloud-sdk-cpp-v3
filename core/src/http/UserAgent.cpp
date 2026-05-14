/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache LICENSE, Version 2.0 (the
 * "LICENSE"); you may not use this file except in compliance
 * with the LICENSE.  You may obtain a copy of the LICENSE at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the LICENSE is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the LICENSE for the
 * specific language governing permissions and limitations
 * under the LICENSE.
 */

#include <huaweicloud/core/http/UserAgent.h>

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <regex>
#include <sstream>
#include <stdint.h>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#define MAX_PATH_LEN 256

// Windows平台
#if defined(_WIN32) || defined(_WIN64)
#include <Windows.h>
#include <objbase.h>
#include <io.h>
#include <direct.h>
#define ACCESS(fileName,accessMode) _access(fileName,accessMode)
#define MKDIR(path) _mkdir(path)

std::string GetTimezone()
{
    TIME_ZONE_INFORMATION tzInfo;
    DWORD result = GetTimeZoneInformation(&tzInfo);
    if (result != TIME_ZONE_ID_INVALID)
    {
        LONG tzOffset = -tzInfo.Bias / 60;
        if (tzOffset >= 0)
        {
            return "UTC +" + std::to_string(tzOffset);
        }
        return "UTC -" + std::to_string(tzOffset);
    }
    return "";
}

std::string GetOsVersion()
{
    OSVERSIONINFOEX osvi;
    ZeroMemory(&osvi, sizeof(OSVERSIONINFOEX));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);

    if (GetVersionEx((OSVERSIONINFO*)&osvi))
    {
        std::string majorVersion = std::to_string(static_cast<long long>(osvi.dwMajorVersion));
        std::string minorVersion = std::to_string(static_cast<long long>(osvi.dwMinorVersion));
        std::string buildNumber = std::to_string(static_cast<long long>(osvi.dwBuildNumber));
        return "Windows " + majorVersion + "." + minorVersion + " (Build " + buildNumber + ")";
    }
    return "";
}

std::string WindowsWcharToUtf8(const wchar_t* wstr)
{
    int size_needed = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
    std::string str(size_needed, 0);
    WideCharToMultiByte(CP_UTF8, 0, wstr, -1, &str[0], size_needed, NULL, NULL);
    if (!str.empty() && str.back() == '\0')
    {
        return str.erase(str.length() - 1);
    }
    return str;
}

std::string GetOsLanguage()
{
    wchar_t localeName[LOCALE_NAME_MAX_LENGTH];
    if (GetUserDefaultLocaleName(localeName, LOCALE_NAME_MAX_LENGTH) > 0)
    {
        return WindowsWcharToUtf8(localeName); // 例如: "zh-CN"
    }
    return "";
}

// Linux平台
#elif defined(__linux__)
#define ACCESS(fileName,accessMode) access(fileName,accessMode)
#define MKDIR(path) mkdir(path,S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH)
#include <unistd.h>
#include <sys/stat.h>

std::string GetTimezone()
{
    // 初始化时区信息
    tzset();

    // 输出时区名称
    return tzname[0];
}

std::string GetOsVersion()
{
    std::ifstream osFile("/etc/os-release");
    std::string line;
    if (osFile.is_open())
    {
        while (getline(osFile, line))
        {
            if (line.find("PRETTY_NAME=") != std::string::npos)
            {
                return line.substr(13, line.length() - 14);
            }
        }
        osFile.close();
    }
    return "";
}

std::string GetOsLanguage()
{
    const char* lang = std::getenv("LANG");
    if (lang)
    {
        return lang; // 例如: "en_US.UTF-8"
    }
    return "";
}
#endif

// 判断文件夹是否存在,不存在就创建
int32_t createDirectory(const std::string& directoryPath)
{
    uint32_t dirPathLen = directoryPath.length();
    if (dirPathLen > MAX_PATH_LEN)
    {
        return -1;
    }
    char tmpDirPath[MAX_PATH_LEN] = {0};
    for (uint32_t i = 0; i < dirPathLen; ++i)
    {
        tmpDirPath[i] = directoryPath[i];
        if (tmpDirPath[i] == '\\' || tmpDirPath[i] == '/')
        {
            if (ACCESS(tmpDirPath, 0) != 0)
            {
                int32_t ret = MKDIR(tmpDirPath);
                if (ret != 0)
                {
                    return ret;
                }
            }
        }
    }
    return 0;
}

std::string GetCppVersion()
{
    if (__cplusplus == 202302L) return "C++23";
    else if (__cplusplus == 202002L) return "C++20";
    else if (__cplusplus == 201703L) return "C++17";
    else if (__cplusplus == 201402L) return "C++14";
    else if (__cplusplus == 201103L) return "C++11";
    else if (__cplusplus == 199711L) return "C++98";
    else return "";
}

std::string getClientMessage()
{
    std::string clientMessage;
    std::string osVersion = GetOsVersion();
    if (!osVersion.empty())
    {
        // 判断字符串是否非空
        clientMessage = clientMessage + " os/" + osVersion;
    }

    std::string cppVersion = GetCppVersion();
    if (!cppVersion.empty())
    {
        // 判断字符串是否非空
        clientMessage = clientMessage + " cpp/" + cppVersion;
    }

    std::string osLanguage = GetOsLanguage();
    if (!osLanguage.empty())
    {
        // 判断字符串是否非空
        clientMessage = clientMessage + " meta/" + osLanguage;
    }
    return clientMessage;
}

// 获取用户目录路径
std::string GetUserHomeDirectory()
{
    const char* homeEnv = nullptr;
#if defined(_WIN32)
    homeEnv = std::getenv("USERPROFILE");
#else
    homeEnv = std::getenv("HOME");
#endif
    if (!homeEnv)
    {
        return "";
    }
    return homeEnv;
}

// 检查路径是否存在且是目录
bool is_directory_exists(const std::string& path)
{
#ifdef _WIN32
    return (_access(path.c_str(), 0) != -1);
#elif defined(__linux__)
    return (access(path.c_str(), F_OK) != -1);
#endif
}

// 构建目标文件路径
std::string GetApplicationIDFilePath()
{
    std::string homeDir = GetUserHomeDirectory();
    if (homeDir.empty()) return "";

    std::string huaweicloudDir = homeDir + "/.huaweicloud";
    // 创建 .huaweicloud 目录（如果不存在）
    if (!is_directory_exists(huaweicloudDir))
    {
        createDirectory(huaweicloudDir);
    }

    std::string filePath = huaweicloudDir + "/application_id";
    // 创建 application_id 目录（如果不存在）
    if (!is_directory_exists(filePath))
    {
        createDirectory(filePath);
    }

    return filePath;
}

// 生成并返回 UUID 字符串（带连字符）
std::string generate_uuid_string()
{
    boost::uuids::random_generator gen;
    return boost::uuids::to_string(gen());
}

bool isValidUUID(const std::string& uuid)
{
    const std::regex uuidPattern(
        "^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$"
    );
    return std::regex_match(uuid, uuidPattern);
}

// 保存UUID到文件（覆盖模式）
bool SaveUUIDToFile(const std::string& uuid, const std::string& filename)
{
    std::ofstream file(filename); // 默认以覆盖模式打开文件
    if (!file.is_open())
    {
        return false;
    }
    file << uuid;
    file.close();
    return true;
}

std::string readFileToString(const std::string& filename)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        return ""; // 文件打开失败返回空字符串
    }
    std::stringstream ss;
    ss << file.rdbuf(); // 将文件内容读取到stringstream
    return ss.str(); // 转换为string返回
}

std::string getAppId()
{
    std::string filePath = GetApplicationIDFilePath();
    if (filePath.empty())
    {
        std::string uuid = generate_uuid_string();
        return uuid;
    }
    std::string uuid = readFileToString(filePath);
    if (!isValidUUID(uuid))
    {
        uuid = generate_uuid_string();
        SaveUUIDToFile(uuid, filePath);
    }
    return uuid;
}

std::string getUserAgentStr()
{
    std::string userAgentStr = "huaweicloud-sdk-cpp/3.0";

    std::string clientMessage = getClientMessage();
    if (!clientMessage.empty())
    {
        userAgentStr = userAgentStr + ";" + clientMessage;
    }

    std::string appId = getAppId();
    if (!appId.empty())
    {
        userAgentStr = userAgentStr + "; app/" + appId;
    }
    return userAgentStr;
}