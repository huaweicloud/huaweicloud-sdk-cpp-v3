
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelColdTableWaitingTasksReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelColdTableWaitingTasksReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/CancelColdTableWaitingTask.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CancelColdTableWaitingTasksReq
    : public ModelBase
{
public:
    CancelColdTableWaitingTasksReq();
    virtual ~CancelColdTableWaitingTasksReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelColdTableWaitingTasksReq members

    /// <summary>
    /// **参数解释**：  取消目标列表。  **约束限制**：  列表长度不超过50。
    /// </summary>

    std::vector<CancelColdTableWaitingTask>& getCancelTasks();
    bool cancelTasksIsSet() const;
    void unsetcancelTasks();
    void setCancelTasks(const std::vector<CancelColdTableWaitingTask>& value);


protected:
    std::vector<CancelColdTableWaitingTask> cancelTasks_;
    bool cancelTasksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CancelColdTableWaitingTasksReq_H_
