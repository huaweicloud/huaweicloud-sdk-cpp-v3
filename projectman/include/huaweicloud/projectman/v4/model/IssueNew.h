
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueNew_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueNew_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueNew_author.h>
#include <huaweicloud/projectman/v4/model/StatusAttributeVO.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/projectman/v4/model/Status.h>
#include <huaweicloud/projectman/v4/model/Priority.h>
#include <huaweicloud/projectman/v4/model/StoryPoint.h>
#include <string>
#include <huaweicloud/projectman/v4/model/Severity.h>
#include <huaweicloud/projectman/v4/model/IssueNew_assigned_to.h>
#include <huaweicloud/projectman/v4/model/Tracker.h>
#include <huaweicloud/projectman/v4/model/Project.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 工作项。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueNew
    : public ModelBase
{
public:
    IssueNew();
    virtual ~IssueNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueNew members

    /// <summary>
    /// **参数解释：** 工作项的更新日期。时间戳格式（示例：1839340800000） 。 **取值范围：** 不涉及。
    /// </summary>

    std::string getUpdatedOn() const;
    bool updatedOnIsSet() const;
    void unsetupdatedOn();
    void setUpdatedOn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    StoryPoint getStoryPoint() const;
    bool storyPointIsSet() const;
    void unsetstoryPoint();
    void setStoryPoint(const StoryPoint& value);

    /// <summary>
    /// **参数解释：** 工作项的负责者。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Project getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const Project& value);

    /// <summary>
    /// **参数解释：** 是否有子工作项。 **取值范围：** true（有子工作项） false（没有子工作项）
    /// </summary>

    bool isIsParent() const;
    bool isParentIsSet() const;
    void unsetisParent();
    void setIsParent(bool value);

    /// <summary>
    /// **参数解释：** 工作项完成度。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getDoneRatio() const;
    bool doneRatioIsSet() const;
    void unsetdoneRatio();
    void setDoneRatio(int32_t value);

    /// <summary>
    /// **参数解释：** 发布人 。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFindReleaseDev() const;
    bool findReleaseDevIsSet() const;
    void unsetfindReleaseDev();
    void setFindReleaseDev(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Tracker getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const Tracker& value);

    /// <summary>
    /// **参数解释：** 工作项列表id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项的开始日期。时间戳格式（示例：1839340800000）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueNew_assigned_to getAssignedTo() const;
    bool assignedToIsSet() const;
    void unsetassignedTo();
    void setAssignedTo(const IssueNew_assigned_to& value);

    /// <summary>
    /// 
    /// </summary>

    StatusAttributeVO getStatusAttribute() const;
    bool statusAttributeIsSet() const;
    void unsetstatusAttribute();
    void setStatusAttribute(const StatusAttributeVO& value);

    /// <summary>
    /// 
    /// </summary>

    Severity getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const Severity& value);

    /// <summary>
    /// **参数解释：** 工作项发布版本号。 **取值范围：** 不涉及。
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueNew_author getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const IssueNew_author& value);

    /// <summary>
    /// **参数解释：** 工作项的模块。 **取值范围：** 不涉及。
    /// </summary>

    Object getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const Object& value);

    /// <summary>
    /// **参数解释：** 工作项的截止日期，时间戳格式（示例：1839340800000）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDueDate() const;
    bool dueDateIsSet() const;
    void unsetdueDate();
    void setDueDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项的预计工时(单位：人时)。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getExpectedWorkHours() const;
    bool expectedWorkHoursIsSet() const;
    void unsetexpectedWorkHours();
    void setExpectedWorkHours(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Priority getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const Priority& value);

    /// <summary>
    /// **参数解释：** 工作项的实际工时（单位：人/时）。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getActualWorkHours() const;
    bool actualWorkHoursIsSet() const;
    void unsetactualWorkHours();
    void setActualWorkHours(int32_t value);

    /// <summary>
    /// **参数解释：** 是否关注 。 **取值范围：** true（是） false（不是）
    /// </summary>

    bool isIsWatcher() const;
    bool isWatcherIsSet() const;
    void unsetisWatcher();
    void setIsWatcher(bool value);

    /// <summary>
    /// **参数解释：** 是否删除 。 **取值范围：** true（是） false（不是）
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);

    /// <summary>
    /// **参数解释：** 问题解决版本。 **取值范围：** 不涉及。
    /// </summary>

    Object getFixedVersion() const;
    bool fixedVersionIsSet() const;
    void unsetfixedVersion();
    void setFixedVersion(const Object& value);

    /// <summary>
    /// **参数解释：** 是否归档。 **取值范围：** true（是） false（不是）
    /// </summary>

    bool isIsArchived() const;
    bool isArchivedIsSet() const;
    void unsetisArchived();
    void setIsArchived(bool value);

    /// <summary>
    /// **参数解释：** 工作项的创建时间，时间戳格式（示例：1839340800000）。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetcreatedOn();
    void setCreatedOn(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项的领域 。 **取值范围：** 不涉及。
    /// </summary>

    Object getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const Object& value);

    /// <summary>
    /// **参数解释：** 工作项的开发人员。 **取值范围：** 不涉及。
    /// </summary>

    Object getDeveloper() const;
    bool developerIsSet() const;
    void unsetdeveloper();
    void setDeveloper(const Object& value);

    /// <summary>
    /// **参数解释：** 关闭人员。 **取值范围：** 不涉及。
    /// </summary>

    Object getCloseder() const;
    bool closederIsSet() const;
    void unsetcloseder();
    void setCloseder(const Object& value);

    /// <summary>
    /// **参数解释：** 工作项在列表的展示位置 。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(const std::string& value);

    /// <summary>
    /// **参数解释：** 关闭标志 。 **取值范围：** 0（打开） 1（关闭）
    /// </summary>

    int32_t getClosedFlag() const;
    bool closedFlagIsSet() const;
    void unsetclosedFlag();
    void setClosedFlag(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项的抄送人。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAssignedCcUser() const;
    bool assignedCcUserIsSet() const;
    void unsetassignedCcUser();
    void setAssignedCcUser(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义字段。 **取值范围：** 不涉及。
    /// </summary>

    Object getCustomValueNew() const;
    bool customValueNewIsSet() const;
    void unsetcustomValueNew();
    void setCustomValueNew(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    Status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const Status& value);


protected:
    std::string updatedOn_;
    bool updatedOnIsSet_;
    StoryPoint storyPoint_;
    bool storyPointIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    Project project_;
    bool projectIsSet_;
    bool isParent_;
    bool isParentIsSet_;
    int32_t doneRatio_;
    bool doneRatioIsSet_;
    std::string findReleaseDev_;
    bool findReleaseDevIsSet_;
    Tracker tracker_;
    bool trackerIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string startDate_;
    bool startDateIsSet_;
    IssueNew_assigned_to assignedTo_;
    bool assignedToIsSet_;
    StatusAttributeVO statusAttribute_;
    bool statusAttributeIsSet_;
    Severity severity_;
    bool severityIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    IssueNew_author author_;
    bool authorIsSet_;
    Object module_;
    bool moduleIsSet_;
    std::string dueDate_;
    bool dueDateIsSet_;
    int32_t expectedWorkHours_;
    bool expectedWorkHoursIsSet_;
    Priority priority_;
    bool priorityIsSet_;
    int32_t actualWorkHours_;
    bool actualWorkHoursIsSet_;
    bool isWatcher_;
    bool isWatcherIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    Object fixedVersion_;
    bool fixedVersionIsSet_;
    bool isArchived_;
    bool isArchivedIsSet_;
    std::string createdOn_;
    bool createdOnIsSet_;
    Object domain_;
    bool domainIsSet_;
    Object developer_;
    bool developerIsSet_;
    Object closeder_;
    bool closederIsSet_;
    std::string position_;
    bool positionIsSet_;
    int32_t closedFlag_;
    bool closedFlagIsSet_;
    std::string assignedCcUser_;
    bool assignedCcUserIsSet_;
    Object customValueNew_;
    bool customValueNewIsSet_;
    Status status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueNew_H_
