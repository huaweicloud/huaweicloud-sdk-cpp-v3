
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AccessKeyInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AccessKeyInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AccessKeyInfo
    : public ModelBase
{
public:
    AccessKeyInfo();
    virtual ~AccessKeyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessKeyInfo members

    /// <summary>
    /// 访问密钥ID
    /// </summary>

    std::string getAccessKeyId() const;
    bool accessKeyIdIsSet() const;
    void unsetaccessKeyId();
    void setAccessKeyId(const std::string& value);

    /// <summary>
    /// 访问密钥名称
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 访问密钥AK
    /// </summary>

    std::string getAccessKey() const;
    bool accessKeyIsSet() const;
    void unsetaccessKey();
    void setAccessKey(const std::string& value);

    /// <summary>
    /// 访问密钥所属的应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 访问密钥状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 应用的创建时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 下载时间
    /// </summary>

    int64_t getDownloadTime() const;
    bool downloadTimeIsSet() const;
    void unsetdownloadTime();
    void setDownloadTime(int64_t value);

    /// <summary>
    /// 是否下载
    /// </summary>

    bool isIsDownloaded() const;
    bool isDownloadedIsSet() const;
    void unsetisDownloaded();
    void setIsDownloaded(bool value);

    /// <summary>
    /// 是否导入
    /// </summary>

    bool isIsImported() const;
    bool isImportedIsSet() const;
    void unsetisImported();
    void setIsImported(bool value);


protected:
    std::string accessKeyId_;
    bool accessKeyIdIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::string accessKey_;
    bool accessKeyIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t downloadTime_;
    bool downloadTimeIsSet_;
    bool isDownloaded_;
    bool isDownloadedIsSet_;
    bool isImported_;
    bool isImportedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AccessKeyInfo_H_
