
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaskDetailsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaskDetailsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/SubTaskInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowTaskDetailsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskDetailsResponse();
    virtual ~ShowTaskDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskDetailsResponse members

    /// <summary>
    /// **参数解释**：  实例ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例名称。  **取值范围**：  不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务名称。  **取值范围**：  不涉及。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务状态。  **取值范围**：    - Pending：表示待执行。   - Running：表示运行中。   - Completed：表示已完成。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务详情列表。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<SubTaskInfo>& getSubTaskList();
    bool subTaskListIsSet() const;
    void unsetsubTaskList();
    void setSubTaskList(const std::vector<SubTaskInfo>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<SubTaskInfo> subTaskList_;
    bool subTaskListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaskDetailsResponse_H_
