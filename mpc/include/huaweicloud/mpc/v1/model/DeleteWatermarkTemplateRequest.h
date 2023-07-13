
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteWatermarkTemplateRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteWatermarkTemplateRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_MPC_V1_EXPORT  DeleteWatermarkTemplateRequest
    : public ModelBase
{
public:
    DeleteWatermarkTemplateRequest();
    virtual ~DeleteWatermarkTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteWatermarkTemplateRequest members

    /// <summary>
    /// 水印模板ID 
    /// </summary>

    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteWatermarkTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteWatermarkTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteWatermarkTemplateRequest_H_
