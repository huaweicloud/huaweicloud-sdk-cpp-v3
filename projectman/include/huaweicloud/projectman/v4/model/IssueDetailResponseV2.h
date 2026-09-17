
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailResponseV2_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailResponseV2_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/UserVO.h>
#include <huaweicloud/projectman/v4/model/IssueDetailCustomFieldV2.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_status.h>
#include <huaweicloud/projectman/v4/model/CustomFieldV2.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_domain.h>
#include <string>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_severity.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_tracker.h>
#include <vector>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_iteration.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_priority.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_env.h>
#include <huaweicloud/projectman/v4/model/ProjectVO.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_module.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_story_point.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV2_parent_issue.h>
#include <huaweicloud/projectman/v4/model/IssueAccessoryV2.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueDetailResponseV2
    : public ModelBase
{
public:
    IssueDetailResponseV2();
    virtual ~IssueDetailResponseV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueDetailResponseV2 members

    /// <summary>
    /// **参数解释：** 工作项的实际工时（单位：人/时）。 **取值范围：** 不涉及。
    /// </summary>

    double getActualWorkHours() const;
    bool actualWorkHoursIsSet() const;
    void unsetactualWorkHours();
    void setActualWorkHours(double value);

    /// <summary>
    /// **参数解释：** 当前工作项的抄送人。
    /// </summary>

    std::vector<UserVO>& getAssignedCcUser();
    bool assignedCcUserIsSet() const;
    void unsetassignedCcUser();
    void setAssignedCcUser(const std::vector<UserVO>& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getAssignedTo() const;
    bool assignedToIsSet() const;
    void unsetassignedTo();
    void setAssignedTo(const UserVO& value);

    /// <summary>
    /// **参数解释：** 工作项的预计开始时间，时间戳格式（示例：1754323200000）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项创建时间，时间戳格式（示例：1754374102000）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetcreatedOn();
    void setCreatedOn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const UserVO& value);

    /// <summary>
    /// **参数解释：** 工作项的自定义字段。
    /// </summary>

    std::vector<CustomFieldV2>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<CustomFieldV2>& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailCustomFieldV2 getCustomValueNew() const;
    bool customValueNewIsSet() const;
    void unsetcustomValueNew();
    void setCustomValueNew(const IssueDetailCustomFieldV2& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getDeveloper() const;
    bool developerIsSet() const;
    void unsetdeveloper();
    void setDeveloper(const UserVO& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_domain getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const IssueDetailResponseV2_domain& value);

    /// <summary>
    /// **参数解释：** 工作项完成度。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDoneRatio() const;
    bool doneRatioIsSet() const;
    void unsetdoneRatio();
    void setDoneRatio(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项的预计结束时间，时间戳格式（示例：1754323200000）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项的预计完成工时（单位：人/时）。 **取值范围：** 不涉及。
    /// </summary>

    double getExpectedWorkHours() const;
    bool expectedWorkHoursIsSet() const;
    void unsetexpectedWorkHours();
    void setExpectedWorkHours(double value);

    /// <summary>
    /// **参数解释：** 工作项id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ProjectVO getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const ProjectVO& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_iteration getIteration() const;
    bool iterationIsSet() const;
    void unsetiteration();
    void setIteration(const IssueDetailResponseV2_iteration& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_story_point getStoryPoint() const;
    bool storyPointIsSet() const;
    void unsetstoryPoint();
    void setStoryPoint(const IssueDetailResponseV2_story_point& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_module getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const IssueDetailResponseV2_module& value);

    /// <summary>
    /// **参数解释：** 工作项的标题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_parent_issue getParentIssue() const;
    bool parentIssueIsSet() const;
    void unsetparentIssue();
    void setParentIssue(const IssueDetailResponseV2_parent_issue& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_priority getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const IssueDetailResponseV2_priority& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_severity getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const IssueDetailResponseV2_severity& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const IssueDetailResponseV2_status& value);

    /// <summary>
    /// **参数解释：** 工作项发布版本号。 **取值范围：** 不涉及。
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// **参数解释：** 缺陷发现版本号（仅Bug类型工作项具备该字段）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFindReleaseDev() const;
    bool findReleaseDevIsSet() const;
    void unsetfindReleaseDev();
    void setFindReleaseDev(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_env getEnv() const;
    bool envIsSet() const;
    void unsetenv();
    void setEnv(const IssueDetailResponseV2_env& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV2_tracker getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const IssueDetailResponseV2_tracker& value);

    /// <summary>
    /// **参数解释：** 工作项的最后更新时间，时间戳格式（示例：1754374102000）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getUpdatedOn() const;
    bool updatedOnIsSet() const;
    void unsetupdatedOn();
    void setUpdatedOn(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项的关闭时间，时间戳格式（示例：1754374102000）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getClosedTime() const;
    bool closedTimeIsSet() const;
    void unsetclosedTime();
    void setClosedTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项描述。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项的附件列表。
    /// </summary>

    std::vector<IssueAccessoryV2>& getAccessoriesList();
    bool accessoriesListIsSet() const;
    void unsetaccessoriesList();
    void setAccessoriesList(const std::vector<IssueAccessoryV2>& value);

    /// <summary>
    /// **参数解释：** 工作项更新的评论内容。 **取值范围：** 不涉及。
    /// </summary>

    std::string getInnerText() const;
    bool innerTextIsSet() const;
    void unsetinnerText();
    void setInnerText(const std::string& value);


protected:
    double actualWorkHours_;
    bool actualWorkHoursIsSet_;
    std::vector<UserVO> assignedCcUser_;
    bool assignedCcUserIsSet_;
    UserVO assignedTo_;
    bool assignedToIsSet_;
    std::string startDate_;
    bool startDateIsSet_;
    std::string createdOn_;
    bool createdOnIsSet_;
    UserVO author_;
    bool authorIsSet_;
    std::vector<CustomFieldV2> customFields_;
    bool customFieldsIsSet_;
    IssueDetailCustomFieldV2 customValueNew_;
    bool customValueNewIsSet_;
    UserVO developer_;
    bool developerIsSet_;
    IssueDetailResponseV2_domain domain_;
    bool domainIsSet_;
    int32_t doneRatio_;
    bool doneRatioIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    double expectedWorkHours_;
    bool expectedWorkHoursIsSet_;
    int32_t id_;
    bool idIsSet_;
    ProjectVO project_;
    bool projectIsSet_;
    IssueDetailResponseV2_iteration iteration_;
    bool iterationIsSet_;
    IssueDetailResponseV2_story_point storyPoint_;
    bool storyPointIsSet_;
    IssueDetailResponseV2_module module_;
    bool moduleIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    IssueDetailResponseV2_parent_issue parentIssue_;
    bool parentIssueIsSet_;
    IssueDetailResponseV2_priority priority_;
    bool priorityIsSet_;
    IssueDetailResponseV2_severity severity_;
    bool severityIsSet_;
    IssueDetailResponseV2_status status_;
    bool statusIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string findReleaseDev_;
    bool findReleaseDevIsSet_;
    IssueDetailResponseV2_env env_;
    bool envIsSet_;
    IssueDetailResponseV2_tracker tracker_;
    bool trackerIsSet_;
    std::string updatedOn_;
    bool updatedOnIsSet_;
    std::string closedTime_;
    bool closedTimeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<IssueAccessoryV2> accessoriesList_;
    bool accessoriesListIsSet_;
    std::string innerText_;
    bool innerTextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailResponseV2_H_
