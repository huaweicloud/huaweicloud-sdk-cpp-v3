
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceServiceProviderConfigurationRequest_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceServiceProviderConfigurationRequest_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceServiceProviderConfigurationReqBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateApplicationInstanceServiceProviderConfigurationRequest
    : public ModelBase
{
public:
    UpdateApplicationInstanceServiceProviderConfigurationRequest();
    virtual ~UpdateApplicationInstanceServiceProviderConfigurationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationInstanceServiceProviderConfigurationRequest members

    /// <summary>
    /// 如果正在使用临时安全凭据，则此header是必需的，该值是临时安全凭据的安全令牌（会话令牌）。
    /// </summary>

    std::string getXSecurityToken() const;
    bool xSecurityTokenIsSet() const;
    void unsetxSecurityToken();
    void setXSecurityToken(const std::string& value);

    /// <summary>
    /// IAM Identity Center实例的全局唯一标识符（ID）
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 应用程序实例ID，以app-ins-为前缀
    /// </summary>

    std::string getApplicationInstanceId() const;
    bool applicationInstanceIdIsSet() const;
    void unsetapplicationInstanceId();
    void setApplicationInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateApplicationInstanceServiceProviderConfigurationReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateApplicationInstanceServiceProviderConfigurationReqBody& value);


protected:
    std::string xSecurityToken_;
    bool xSecurityTokenIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string applicationInstanceId_;
    bool applicationInstanceIdIsSet_;
    UpdateApplicationInstanceServiceProviderConfigurationReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateApplicationInstanceServiceProviderConfigurationRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateApplicationInstanceServiceProviderConfigurationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceServiceProviderConfigurationRequest_H_
