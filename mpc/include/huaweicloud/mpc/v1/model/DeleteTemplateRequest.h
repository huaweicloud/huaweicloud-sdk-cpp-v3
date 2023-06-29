
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTemplateRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTemplateRequest_H_

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
class HUAWEICLOUD_MPC_V1_EXPORT  DeleteTemplateRequest
    : public ModelBase
{
public:
    DeleteTemplateRequest();
    virtual ~DeleteTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteTemplateRequest members

    /// <summary>
    /// 自定义转码模板ID 
    /// </summary>

    int64_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int64_t value);


protected:
    int64_t templateId_;
    bool templateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTemplateRequest_H_
