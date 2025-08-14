
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceResponseSchemaConfigurationReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceResponseSchemaConfigurationReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ResponseSchemaConfigDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdateApplicationInstanceResponseSchemaConfiguration的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateApplicationInstanceResponseSchemaConfigurationReqBody
    : public ModelBase
{
public:
    UpdateApplicationInstanceResponseSchemaConfigurationReqBody();
    virtual ~UpdateApplicationInstanceResponseSchemaConfigurationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationInstanceResponseSchemaConfigurationReqBody members

    /// <summary>
    /// 
    /// </summary>

    ResponseSchemaConfigDto getResponseSchemaConfig() const;
    bool responseSchemaConfigIsSet() const;
    void unsetresponseSchemaConfig();
    void setResponseSchemaConfig(const ResponseSchemaConfigDto& value);


protected:
    ResponseSchemaConfigDto responseSchemaConfig_;
    bool responseSchemaConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceResponseSchemaConfigurationReqBody_H_
