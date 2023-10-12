
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateWatermarkTemplateRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateWatermarkTemplateRequest_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/WatermarkTemplate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  UpdateWatermarkTemplateRequest
    : public ModelBase
{
public:
    UpdateWatermarkTemplateRequest();
    virtual ~UpdateWatermarkTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateWatermarkTemplateRequest members

    /// <summary>
    /// 
    /// </summary>

    WatermarkTemplate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const WatermarkTemplate& value);


protected:
    WatermarkTemplate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateWatermarkTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateWatermarkTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateWatermarkTemplateRequest_H_
