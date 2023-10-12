
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteQualityEnhanceTemplateRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteQualityEnhanceTemplateRequest_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  DeleteQualityEnhanceTemplateRequest
    : public ModelBase
{
public:
    DeleteQualityEnhanceTemplateRequest();
    virtual ~DeleteQualityEnhanceTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteQualityEnhanceTemplateRequest members

    /// <summary>
    /// 模板ID 
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
    DeleteQualityEnhanceTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteQualityEnhanceTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteQualityEnhanceTemplateRequest_H_
