
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateSsoConfigurationReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateSsoConfigurationReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/SSOConfigurationDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// description: the request body of UpdateSsoConfiguration
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateSsoConfigurationReqBody
    : public ModelBase
{
public:
    UpdateSsoConfigurationReqBody();
    virtual ~UpdateSsoConfigurationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSsoConfigurationReqBody members

    /// <summary>
    /// 
    /// </summary>

    SSOConfigurationDto getSsoConfiguration() const;
    bool ssoConfigurationIsSet() const;
    void unsetssoConfiguration();
    void setSsoConfiguration(const SSOConfigurationDto& value);

    /// <summary>
    /// 配置类型
    /// </summary>

    std::string getConfigurationType() const;
    bool configurationTypeIsSet() const;
    void unsetconfigurationType();
    void setConfigurationType(const std::string& value);


protected:
    SSOConfigurationDto ssoConfiguration_;
    bool ssoConfigurationIsSet_;
    std::string configurationType_;
    bool configurationTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateSsoConfigurationReqBody_H_
