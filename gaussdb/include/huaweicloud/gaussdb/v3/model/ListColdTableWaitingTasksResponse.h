
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListColdTableWaitingTasksResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListColdTableWaitingTasksResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ColdTableWaitingTask.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListColdTableWaitingTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListColdTableWaitingTasksResponse();
    virtual ~ListColdTableWaitingTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListColdTableWaitingTasksResponse members

    /// <summary>
    /// **参数解释**：  任务总数。  **取值范围**：  非负整数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  冷热分离待下发任务列表，没有任务时默认为空数组。
    /// </summary>

    std::vector<ColdTableWaitingTask>& getWaitingTasks();
    bool waitingTasksIsSet() const;
    void unsetwaitingTasks();
    void setWaitingTasks(const std::vector<ColdTableWaitingTask>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ColdTableWaitingTask> waitingTasks_;
    bool waitingTasksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListColdTableWaitingTasksResponse_H_
