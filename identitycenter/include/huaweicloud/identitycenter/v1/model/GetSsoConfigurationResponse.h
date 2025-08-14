
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetSsoConfigurationResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetSsoConfigurationResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/SSOConfigurationDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  GetSsoConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    GetSsoConfigurationResponse();
    virtual ~GetSsoConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetSsoConfigurationResponse members

    /// <summary>
    /// 
    /// </summary>

    SSOConfigurationDto getSsoConfiguration() const;
    bool ssoConfigurationIsSet() const;
    void unsetssoConfiguration();
    void setSsoConfiguration(const SSOConfigurationDto& value);


protected:
    SSOConfigurationDto ssoConfiguration_;
    bool ssoConfigurationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_GetSsoConfigurationResponse_H_
