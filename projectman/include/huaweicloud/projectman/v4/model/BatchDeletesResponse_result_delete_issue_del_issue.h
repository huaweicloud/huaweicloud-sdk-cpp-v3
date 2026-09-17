
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_delete_issue_del_issue_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_delete_issue_del_issue_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchDeletesResponse_result_delete_issue_del_issue
    : public ModelBase
{
public:
    BatchDeletesResponse_result_delete_issue_del_issue();
    virtual ~BatchDeletesResponse_result_delete_issue_del_issue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeletesResponse_result_delete_issue_del_issue members

    /// <summary>
    /// **参数解释：** 工作项id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项类型。 **取值范围：** 2（任务/Task） 3（缺陷/Bug） 5（Epic） 6（Feature） 7（Story）
    /// </summary>

    int32_t getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项名称 。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项状态id 。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项完成度。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDoneRatio() const;
    bool doneRatioIsSet() const;
    void unsetdoneRatio();
    void setDoneRatio(int32_t value);

    /// <summary>
    /// **参数解释：** 预计工时(单位：人时)。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getExpectedWorkHours() const;
    bool expectedWorkHoursIsSet() const;
    void unsetexpectedWorkHours();
    void setExpectedWorkHours(int32_t value);

    /// <summary>
    /// **参数解释：** 实际工时(单位：人时)。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getActualWorkHours() const;
    bool actualWorkHoursIsSet() const;
    void unsetactualWorkHours();
    void setActualWorkHours(int32_t value);

    /// <summary>
    /// **参数解释：** 是否完成删除。 **取值范围：** 0（未删除） 1（已删除）
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);

    /// <summary>
    /// **参数解释：** 是否归档。 **取值范围：** 0（未归档） 1（已归档）
    /// </summary>

    bool isIsArchived() const;
    bool isArchivedIsSet() const;
    void unsetisArchived();
    void setIsArchived(bool value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t trackerId_;
    bool trackerIdIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    int32_t statusId_;
    bool statusIdIsSet_;
    int32_t doneRatio_;
    bool doneRatioIsSet_;
    int32_t expectedWorkHours_;
    bool expectedWorkHoursIsSet_;
    int32_t actualWorkHours_;
    bool actualWorkHoursIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    bool isArchived_;
    bool isArchivedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchDeletesResponse_result_delete_issue_del_issue_H_
