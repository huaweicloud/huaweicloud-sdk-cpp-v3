
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTranscodingTaskResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTranscodingTaskResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  CreateTranscodingTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTranscodingTaskResponse();
    virtual ~CreateTranscodingTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTranscodingTaskResponse members

    /// <summary>
    /// 任务ID。 如果返回值为200 OK，为接受任务后产生的任务ID。 
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
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateTranscodingTaskResponse_H_
