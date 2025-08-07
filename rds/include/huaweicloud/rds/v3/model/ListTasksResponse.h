
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTasksResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTasksResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/Task.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTasksResponse();
    virtual ~ListTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTasksResponse members

    /// <summary>
    /// 任务总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 任务名称列表。
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);

    /// <summary>
    /// 任务列表。
    /// </summary>

    std::vector<Task>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<Task>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;
    std::vector<Task> tasks_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListTasksResponse_H_
