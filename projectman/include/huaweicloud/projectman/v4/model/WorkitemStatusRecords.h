
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatusRecords_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatusRecords_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/WorkitemStatus.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkitemStatusRecords
    : public ModelBase
{
public:
    WorkitemStatusRecords();
    virtual ~WorkitemStatusRecords();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkitemStatusRecords members

    /// <summary>
    /// 工作项的记录id，一个工作项对应一条记录
    /// </summary>

    std::string getWorkItemRecordId() const;
    bool workItemRecordIdIsSet() const;
    void unsetworkItemRecordId();
    void setWorkItemRecordId(const std::string& value);

    /// <summary>
    /// 工作项id
    /// </summary>

    std::string getWorkItemId() const;
    bool workItemIdIsSet() const;
    void unsetworkItemId();
    void setWorkItemId(const std::string& value);

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 操作历史
    /// </summary>

    std::vector<WorkitemStatus>& getWorkItemStatuses();
    bool workItemStatusesIsSet() const;
    void unsetworkItemStatuses();
    void setWorkItemStatuses(const std::vector<WorkitemStatus>& value);


protected:
    std::string workItemRecordId_;
    bool workItemRecordIdIsSet_;
    std::string workItemId_;
    bool workItemIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<WorkitemStatus> workItemStatuses_;
    bool workItemStatusesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkitemStatusRecords_H_
