
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListExtractTaskResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListExtractTaskResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ExtractTask.h>
#include <huaweicloud/mpc/v1/model/CommonQueryTaskRsp.h>
#include <vector>

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
class HUAWEICLOUD_MPC_V1_EXPORT  ListExtractTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListExtractTaskResponse();
    virtual ~ListExtractTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListExtractTaskResponse members

    /// <summary>
    /// 任务总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 任务列表
    /// </summary>

    std::vector<ExtractTask>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<ExtractTask>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<ExtractTask> tasks_;
    bool tasksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListExtractTaskResponse_H_
