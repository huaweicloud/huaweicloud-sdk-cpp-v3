
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationInstanceDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationInstanceDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/SecurityConfigDto.h>
#include <huaweicloud/identitycenter/v1/model/IdentityProviderConfigDto.h>
#include <huaweicloud/identitycenter/v1/model/ResponseConfigDto.h>
#include <string>
#include <huaweicloud/identitycenter/v1/model/ResponseSchemaConfigDto.h>
#include <huaweicloud/identitycenter/v1/model/ServiceProviderConfigDto.h>
#include <huaweicloud/identitycenter/v1/model/ApplicationTemplateDto.h>
#include <huaweicloud/identitycenter/v1/model/CertificateDto.h>
#include <huaweicloud/identitycenter/v1/model/DisplayDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用程序实例
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ApplicationInstanceDto
    : public ModelBase
{
public:
    ApplicationInstanceDto();
    virtual ~ApplicationInstanceDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplicationInstanceDto members

    /// <summary>
    /// 
    /// </summary>

    CertificateDto getActiveCertificate() const;
    bool activeCertificateIsSet() const;
    void unsetactiveCertificate();
    void setActiveCertificate(const CertificateDto& value);

    /// <summary>
    /// 
    /// </summary>

    DisplayDto getDisplay() const;
    bool displayIsSet() const;
    void unsetdisplay();
    void setDisplay(const DisplayDto& value);

    /// <summary>
    /// 
    /// </summary>

    IdentityProviderConfigDto getIdentityProviderConfig() const;
    bool identityProviderConfigIsSet() const;
    void unsetidentityProviderConfig();
    void setIdentityProviderConfig(const IdentityProviderConfigDto& value);

    /// <summary>
    /// 应用程序实例唯一标识ID
    /// </summary>

    std::string getApplicationInstanceId() const;
    bool applicationInstanceIdIsSet() const;
    void unsetapplicationInstanceId();
    void setApplicationInstanceId(const std::string& value);

    /// <summary>
    /// 应用程序UUID
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 应用程序在门户是否可见
    /// </summary>

    bool isVisible() const;
    bool visibleIsSet() const;
    void unsetvisible();
    void setVisible(bool value);

    /// <summary>
    /// 
    /// </summary>

    ResponseConfigDto getResponseConfig() const;
    bool responseConfigIsSet() const;
    void unsetresponseConfig();
    void setResponseConfig(const ResponseConfigDto& value);

    /// <summary>
    /// 
    /// </summary>

    ResponseSchemaConfigDto getResponseSchemaConfig() const;
    bool responseSchemaConfigIsSet() const;
    void unsetresponseSchemaConfig();
    void setResponseSchemaConfig(const ResponseSchemaConfigDto& value);

    /// <summary>
    /// 
    /// </summary>

    SecurityConfigDto getSecurityConfig() const;
    bool securityConfigIsSet() const;
    void unsetsecurityConfig();
    void setSecurityConfig(const SecurityConfigDto& value);

    /// <summary>
    /// 应用程序实例状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ApplicationTemplateDto getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const ApplicationTemplateDto& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceProviderConfigDto getServiceProviderConfig() const;
    bool serviceProviderConfigIsSet() const;
    void unsetserviceProviderConfig();
    void setServiceProviderConfig(const ServiceProviderConfigDto& value);

    /// <summary>
    /// OIDC Client ID
    /// </summary>

    std::string getClientId() const;
    bool clientIdIsSet() const;
    void unsetclientId();
    void setClientId(const std::string& value);

    /// <summary>
    /// 用户是否可见
    /// </summary>

    bool isEndUserVisible() const;
    bool endUserVisibleIsSet() const;
    void unsetendUserVisible();
    void setEndUserVisible(bool value);

    /// <summary>
    /// 组员所属账号ID
    /// </summary>

    std::string getManagedAccount() const;
    bool managedAccountIsSet() const;
    void unsetmanagedAccount();
    void setManagedAccount(const std::string& value);


protected:
    CertificateDto activeCertificate_;
    bool activeCertificateIsSet_;
    DisplayDto display_;
    bool displayIsSet_;
    IdentityProviderConfigDto identityProviderConfig_;
    bool identityProviderConfigIsSet_;
    std::string applicationInstanceId_;
    bool applicationInstanceIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool visible_;
    bool visibleIsSet_;
    ResponseConfigDto responseConfig_;
    bool responseConfigIsSet_;
    ResponseSchemaConfigDto responseSchemaConfig_;
    bool responseSchemaConfigIsSet_;
    SecurityConfigDto securityConfig_;
    bool securityConfigIsSet_;
    std::string status_;
    bool statusIsSet_;
    ApplicationTemplateDto template_;
    bool templateIsSet_;
    ServiceProviderConfigDto serviceProviderConfig_;
    bool serviceProviderConfigIsSet_;
    std::string clientId_;
    bool clientIdIsSet_;
    bool endUserVisible_;
    bool endUserVisibleIsSet_;
    std::string managedAccount_;
    bool managedAccountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationInstanceDto_H_
