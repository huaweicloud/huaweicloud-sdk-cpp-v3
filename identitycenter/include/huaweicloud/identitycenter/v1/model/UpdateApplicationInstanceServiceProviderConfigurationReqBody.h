
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceServiceProviderConfigurationReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceServiceProviderConfigurationReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ServiceProviderConfigDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdateApplicationInstanceServiceProviderConfiguration的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateApplicationInstanceServiceProviderConfigurationReqBody
    : public ModelBase
{
public:
    UpdateApplicationInstanceServiceProviderConfigurationReqBody();
    virtual ~UpdateApplicationInstanceServiceProviderConfigurationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationInstanceServiceProviderConfigurationReqBody members

    /// <summary>
    /// 
    /// </summary>

    ServiceProviderConfigDto getServiceProviderConfig() const;
    bool serviceProviderConfigIsSet() const;
    void unsetserviceProviderConfig();
    void setServiceProviderConfig(const ServiceProviderConfigDto& value);


protected:
    ServiceProviderConfigDto serviceProviderConfig_;
    bool serviceProviderConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceServiceProviderConfigurationReqBody_H_
