
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_SetupLandingZoneRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_SetupLandingZoneRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/SetupLandingZoneReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  SetupLandingZoneRequest
    : public ModelBase
{
public:
    SetupLandingZoneRequest();
    virtual ~SetupLandingZoneRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetupLandingZoneRequest members

    /// <summary>
    /// 
    /// </summary>

    SetupLandingZoneReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetupLandingZoneReqBody& value);


protected:
    SetupLandingZoneReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetupLandingZoneRequest& dereference_from_shared_ptr(std::shared_ptr<SetupLandingZoneRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_SetupLandingZoneRequest_H_
