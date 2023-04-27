

#include "huaweicloud/lts/v2/model/AccessConfigDeatilCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigDeatilCreate::AccessConfigDeatilCreate()
{
    pathsIsSet_ = false;
    blackPathsIsSet_ = false;
    formatIsSet_ = false;
    windowsLogInfoIsSet_ = false;
}

AccessConfigDeatilCreate::~AccessConfigDeatilCreate() = default;

void AccessConfigDeatilCreate::validate()
{
}

web::json::value AccessConfigDeatilCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathsIsSet_) {
        val[utility::conversions::to_string_t("paths")] = ModelBase::toJson(paths_);
    }
    if(blackPathsIsSet_) {
        val[utility::conversions::to_string_t("black_paths")] = ModelBase::toJson(blackPaths_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(windowsLogInfoIsSet_) {
        val[utility::conversions::to_string_t("windows_log_info")] = ModelBase::toJson(windowsLogInfo_);
    }

    return val;
}

bool AccessConfigDeatilCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("paths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paths"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaths(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("black_paths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("black_paths"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlackPaths(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            AccessConfigFormatCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("windows_log_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("windows_log_info"));
        if(!fieldValue.is_null())
        {
            AccessConfigWindowsLogInfoCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWindowsLogInfo(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AccessConfigDeatilCreate::getPaths()
{
    return paths_;
}

void AccessConfigDeatilCreate::setPaths(const std::vector<std::string>& value)
{
    paths_ = value;
    pathsIsSet_ = true;
}

bool AccessConfigDeatilCreate::pathsIsSet() const
{
    return pathsIsSet_;
}

void AccessConfigDeatilCreate::unsetpaths()
{
    pathsIsSet_ = false;
}

std::vector<std::string>& AccessConfigDeatilCreate::getBlackPaths()
{
    return blackPaths_;
}

void AccessConfigDeatilCreate::setBlackPaths(const std::vector<std::string>& value)
{
    blackPaths_ = value;
    blackPathsIsSet_ = true;
}

bool AccessConfigDeatilCreate::blackPathsIsSet() const
{
    return blackPathsIsSet_;
}

void AccessConfigDeatilCreate::unsetblackPaths()
{
    blackPathsIsSet_ = false;
}

AccessConfigFormatCreate AccessConfigDeatilCreate::getFormat() const
{
    return format_;
}

void AccessConfigDeatilCreate::setFormat(const AccessConfigFormatCreate& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool AccessConfigDeatilCreate::formatIsSet() const
{
    return formatIsSet_;
}

void AccessConfigDeatilCreate::unsetformat()
{
    formatIsSet_ = false;
}

AccessConfigWindowsLogInfoCreate AccessConfigDeatilCreate::getWindowsLogInfo() const
{
    return windowsLogInfo_;
}

void AccessConfigDeatilCreate::setWindowsLogInfo(const AccessConfigWindowsLogInfoCreate& value)
{
    windowsLogInfo_ = value;
    windowsLogInfoIsSet_ = true;
}

bool AccessConfigDeatilCreate::windowsLogInfoIsSet() const
{
    return windowsLogInfoIsSet_;
}

void AccessConfigDeatilCreate::unsetwindowsLogInfo()
{
    windowsLogInfoIsSet_ = false;
}

}
}
}
}
}


