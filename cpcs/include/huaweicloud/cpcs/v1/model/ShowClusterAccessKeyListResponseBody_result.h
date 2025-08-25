
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowClusterAccessKeyListResponseBody_result_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowClusterAccessKeyListResponseBody_result_H_


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
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowClusterAccessKeyListResponseBody_result
    : public ModelBase
{
public:
    ShowClusterAccessKeyListResponseBody_result();
    virtual ~ShowClusterAccessKeyListResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowClusterAccessKeyListResponseBody_result members

    /// <summary>
    /// 访问密钥ID
    /// </summary>

    std::string getAccessKeyId() const;
    bool accessKeyIdIsSet() const;
    void unsetaccessKeyId();
    void setAccessKeyId(const std::string& value);

    /// <summary>
    /// 访问密钥状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 访问密钥所属的应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 访问密钥AK
    /// </summary>

    std::string getAccessKey() const;
    bool accessKeyIsSet() const;
    void unsetaccessKey();
    void setAccessKey(const std::string& value);

    /// <summary>
    /// 访问密钥名称
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 应用的创建时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);


protected:
    std::string accessKeyId_;
    bool accessKeyIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string accessKey_;
    bool accessKeyIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowClusterAccessKeyListResponseBody_result_H_
