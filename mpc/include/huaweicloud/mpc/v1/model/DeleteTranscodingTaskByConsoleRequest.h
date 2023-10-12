
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskByConsoleRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskByConsoleRequest_H_


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
class HUAWEICLOUD_MPC_V1_EXPORT  DeleteTranscodingTaskByConsoleRequest
    : public ModelBase
{
public:
    DeleteTranscodingTaskByConsoleRequest();
    virtual ~DeleteTranscodingTaskByConsoleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTranscodingTaskByConsoleRequest members

    /// <summary>
    /// 任务ID 
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
    DeleteTranscodingTaskByConsoleRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTranscodingTaskByConsoleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskByConsoleRequest_H_
