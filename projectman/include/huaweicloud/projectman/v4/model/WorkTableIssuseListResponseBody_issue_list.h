
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_issue_list_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_issue_list_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_order.h>
#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_parent_issue.h>
#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_status.h>
#include <string>
#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_tracker.h>
#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_module.h>
#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_project.h>
#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_severity.h>
#include <huaweicloud/projectman/v4/model/SimpleUserIn.h>
#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_priority.h>
#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_domain.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkTableIssuseListResponseBody_issue_list
    : public ModelBase
{
public:
    WorkTableIssuseListResponseBody_issue_list();
    virtual ~WorkTableIssuseListResponseBody_issue_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkTableIssuseListResponseBody_issue_list members

    /// <summary>
    /// 工作项id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 工作项标题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 父工作项id
    /// </summary>

    int32_t getParentIssueId() const;
    bool parentIssueIdIsSet() const;
    void unsetparentIssueId();
    void setParentIssueId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_parent_issue getParentIssue() const;
    bool parentIssueIsSet() const;
    void unsetparentIssue();
    void setParentIssue(const WorkTableIssuseListResponseBody_parent_issue& value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_project getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const WorkTableIssuseListResponseBody_project& value);

    /// <summary>
    /// 发布版本
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 发现发布版本
    /// </summary>

    std::string getFindReleaseDev() const;
    bool findReleaseDevIsSet() const;
    void unsetfindReleaseDev();
    void setFindReleaseDev(const std::string& value);

    /// <summary>
    /// 工作项完成度
    /// </summary>

    int32_t getDoneRatio() const;
    bool doneRatioIsSet() const;
    void unsetdoneRatio();
    void setDoneRatio(int32_t value);

    /// <summary>
    /// 预计工时
    /// </summary>

    double getExpectedWorkHours() const;
    bool expectedWorkHoursIsSet() const;
    void unsetexpectedWorkHours();
    void setExpectedWorkHours(double value);

    /// <summary>
    /// 实际工时
    /// </summary>

    double getActualWorkHours() const;
    bool actualWorkHoursIsSet() const;
    void unsetactualWorkHours();
    void setActualWorkHours(double value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_tracker getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const WorkTableIssuseListResponseBody_tracker& value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_order getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const WorkTableIssuseListResponseBody_order& value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_severity getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const WorkTableIssuseListResponseBody_severity& value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_priority getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const WorkTableIssuseListResponseBody_priority& value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_domain getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const WorkTableIssuseListResponseBody_domain& value);

    /// <summary>
    /// 排序数值
    /// </summary>

    double getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(double value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_module getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const WorkTableIssuseListResponseBody_module& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUserIn getAssignedTo() const;
    bool assignedToIsSet() const;
    void unsetassignedTo();
    void setAssignedTo(const SimpleUserIn& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUserIn getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const SimpleUserIn& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUserIn getDeveloper() const;
    bool developerIsSet() const;
    void unsetdeveloper();
    void setDeveloper(const SimpleUserIn& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUserIn getCloseder() const;
    bool closederIsSet() const;
    void unsetcloseder();
    void setCloseder(const SimpleUserIn& value);

    /// <summary>
    /// 
    /// </summary>

    WorkTableIssuseListResponseBody_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const WorkTableIssuseListResponseBody_status& value);

    /// <summary>
    /// 是否删除工作项
    /// </summary>

    bool isDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(bool value);

    /// <summary>
    /// 是否关注工作项
    /// </summary>

    bool isIsWatcher() const;
    bool isWatcherIsSet() const;
    void unsetisWatcher();
    void setIsWatcher(bool value);

    /// <summary>
    /// 关闭标志
    /// </summary>

    int32_t getClosedFlag() const;
    bool closedFlagIsSet() const;
    void unsetclosedFlag();
    void setClosedFlag(int32_t value);

    /// <summary>
    /// 工作项新建时间戳
    /// </summary>

    std::string getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetcreatedOn();
    void setCreatedOn(const std::string& value);

    /// <summary>
    /// 工作项更新时间戳
    /// </summary>

    std::string getUpdatedOn() const;
    bool updatedOnIsSet() const;
    void unsetupdatedOn();
    void setUpdatedOn(const std::string& value);

    /// <summary>
    /// 工作项预计结束时间戳
    /// </summary>

    std::string getDueDate() const;
    bool dueDateIsSet() const;
    void unsetdueDate();
    void setDueDate(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    int32_t parentIssueId_;
    bool parentIssueIdIsSet_;
    WorkTableIssuseListResponseBody_parent_issue parentIssue_;
    bool parentIssueIsSet_;
    WorkTableIssuseListResponseBody_project project_;
    bool projectIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string findReleaseDev_;
    bool findReleaseDevIsSet_;
    int32_t doneRatio_;
    bool doneRatioIsSet_;
    double expectedWorkHours_;
    bool expectedWorkHoursIsSet_;
    double actualWorkHours_;
    bool actualWorkHoursIsSet_;
    WorkTableIssuseListResponseBody_tracker tracker_;
    bool trackerIsSet_;
    WorkTableIssuseListResponseBody_order order_;
    bool orderIsSet_;
    WorkTableIssuseListResponseBody_severity severity_;
    bool severityIsSet_;
    WorkTableIssuseListResponseBody_priority priority_;
    bool priorityIsSet_;
    WorkTableIssuseListResponseBody_domain domain_;
    bool domainIsSet_;
    double position_;
    bool positionIsSet_;
    WorkTableIssuseListResponseBody_module module_;
    bool moduleIsSet_;
    SimpleUserIn assignedTo_;
    bool assignedToIsSet_;
    SimpleUserIn author_;
    bool authorIsSet_;
    SimpleUserIn developer_;
    bool developerIsSet_;
    SimpleUserIn closeder_;
    bool closederIsSet_;
    WorkTableIssuseListResponseBody_status status_;
    bool statusIsSet_;
    bool deleted_;
    bool deletedIsSet_;
    bool isWatcher_;
    bool isWatcherIsSet_;
    int32_t closedFlag_;
    bool closedFlagIsSet_;
    std::string createdOn_;
    bool createdOnIsSet_;
    std::string updatedOn_;
    bool updatedOnIsSet_;
    std::string dueDate_;
    bool dueDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkTableIssuseListResponseBody_issue_list_H_
