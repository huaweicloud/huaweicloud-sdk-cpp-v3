
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformAuthorizationInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformAuthorizationInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播平台授权信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PlatformAuthorizationInfo
    : public ModelBase
{
public:
    PlatformAuthorizationInfo();
    virtual ~PlatformAuthorizationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlatformAuthorizationInfo members

    /// <summary>
    /// 授权状态。 * AUTHORIZED: 已授权 * UNAUTHORIZED: 未授权
    /// </summary>

    std::string getAuthorizeState() const;
    bool authorizeStateIsSet() const;
    void unsetauthorizeState();
    void setAuthorizeState(const std::string& value);

    /// <summary>
    /// 授权时间
    /// </summary>

    std::string getAuthorizedTime() const;
    bool authorizedTimeIsSet() const;
    void unsetauthorizedTime();
    void setAuthorizedTime(const std::string& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);

    /// <summary>
    /// 授权账号信息。 美团平台对应：opBizCode
    /// </summary>

    std::string getAccount() const;
    bool accountIsSet() const;
    void unsetaccount();
    void setAccount(const std::string& value);


protected:
    std::string authorizeState_;
    bool authorizeStateIsSet_;
    std::string authorizedTime_;
    bool authorizedTimeIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;
    std::string account_;
    bool accountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PlatformAuthorizationInfo_H_
