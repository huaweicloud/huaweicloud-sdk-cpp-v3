
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskRequest_H_

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
class HUAWEICLOUD_MPC_V1_EXPORT  DeleteTranscodingTaskRequest
    : public ModelBase
{
public:
    DeleteTranscodingTaskRequest();
    virtual ~DeleteTranscodingTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteTranscodingTaskRequest members

    /// <summary>
    /// 创建转码任务成功时返回的任务ID 
    /// </summary>

    int32_t getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(int32_t value);


protected:
    int32_t taskId_;
    bool taskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTranscodingTaskRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTranscodingTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskRequest_H_
