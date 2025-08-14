
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationTemplateDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationTemplateDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/SecurityConfigDto.h>
#include <huaweicloud/identitycenter/v1/model/ResponseConfigDto.h>
#include <string>
#include <huaweicloud/identitycenter/v1/model/ResponseSchemaConfigDto.h>
#include <huaweicloud/identitycenter/v1/model/ServiceProviderConfigDto.h>
#include <huaweicloud/identitycenter/v1/model/ApplicationTemplateDisplayDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用程序模板
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ApplicationTemplateDto
    : public ModelBase
{
public:
    ApplicationTemplateDto();
    virtual ~ApplicationTemplateDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplicationTemplateDto members

    /// <summary>
    /// 
    /// </summary>

    ApplicationTemplateDisplayDto getApplication() const;
    bool applicationIsSet() const;
    void unsetapplication();
    void setApplication(const ApplicationTemplateDisplayDto& value);

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
    /// 支持的协议
    /// </summary>

    std::string getSsoProtocol() const;
    bool ssoProtocolIsSet() const;
    void unsetssoProtocol();
    void setSsoProtocol(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SecurityConfigDto getSecurityConfig() const;
    bool securityConfigIsSet() const;
    void unsetsecurityConfig();
    void setSecurityConfig(const SecurityConfigDto& value);

    /// <summary>
    /// 
    /// </summary>

    ServiceProviderConfigDto getServiceProviderConfig() const;
    bool serviceProviderConfigIsSet() const;
    void unsetserviceProviderConfig();
    void setServiceProviderConfig(const ServiceProviderConfigDto& value);

    /// <summary>
    /// 应用程序模板唯一标识ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 应用程序模板版本
    /// </summary>

    std::string getTemplateVersion() const;
    bool templateVersionIsSet() const;
    void unsettemplateVersion();
    void setTemplateVersion(const std::string& value);


protected:
    ApplicationTemplateDisplayDto application_;
    bool applicationIsSet_;
    ResponseConfigDto responseConfig_;
    bool responseConfigIsSet_;
    ResponseSchemaConfigDto responseSchemaConfig_;
    bool responseSchemaConfigIsSet_;
    std::string ssoProtocol_;
    bool ssoProtocolIsSet_;
    SecurityConfigDto securityConfig_;
    bool securityConfigIsSet_;
    ServiceProviderConfigDto serviceProviderConfig_;
    bool serviceProviderConfigIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string templateVersion_;
    bool templateVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ApplicationTemplateDto_H_
