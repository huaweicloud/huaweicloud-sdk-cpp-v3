
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceResponseConfigurationReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceResponseConfigurationReqBody_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ResponseConfigDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UpdateApplicationInstanceResponseConfiguration的请求体
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  UpdateApplicationInstanceResponseConfigurationReqBody
    : public ModelBase
{
public:
    UpdateApplicationInstanceResponseConfigurationReqBody();
    virtual ~UpdateApplicationInstanceResponseConfigurationReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateApplicationInstanceResponseConfigurationReqBody members

    /// <summary>
    /// 
    /// </summary>

    ResponseConfigDto getResponseConfig() const;
    bool responseConfigIsSet() const;
    void unsetresponseConfig();
    void setResponseConfig(const ResponseConfigDto& value);


protected:
    ResponseConfigDto responseConfig_;
    bool responseConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_UpdateApplicationInstanceResponseConfigurationReqBody_H_
