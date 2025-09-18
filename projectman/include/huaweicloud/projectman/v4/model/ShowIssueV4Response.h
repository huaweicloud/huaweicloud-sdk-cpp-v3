
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueDetailResponseV4_story_point.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_priority.h>
#include <string>
#include <huaweicloud/projectman/v4/model/CreateIssueResponseV4_tracker.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_severity.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_iteration.h>
#include <huaweicloud/projectman/v4/model/IssueDetailCustomField.h>
#include <huaweicloud/projectman/v4/model/IssueProjectResponseV4.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_domain.h>
#include <vector>
#include <huaweicloud/projectman/v4/model/IssueUser.h>
#include <huaweicloud/projectman/v4/model/CreateIssueResponseV4_parent_issue.h>
#include <huaweicloud/projectman/v4/model/IssueAccessory.h>
#include <huaweicloud/projectman/v4/model/IssueDetailResponseV4_env.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_status.h>
#include <huaweicloud/projectman/v4/model/CustomField.h>
#include <huaweicloud/projectman/v4/model/IssueOrder.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_module.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowIssueV4Response
    : public ModelBase, public HttpResponse
{
public:
    ShowIssueV4Response();
    virtual ~ShowIssueV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIssueV4Response members

    /// <summary>
    /// 实际工时
    /// </summary>

    double getActualWorkHours() const;
    bool actualWorkHoursIsSet() const;
    void unsetactualWorkHours();
    void setActualWorkHours(double value);

    /// <summary>
    /// 抄送人
    /// </summary>

    std::vector<IssueUser>& getAssignedCcUser();
    bool assignedCcUserIsSet() const;
    void unsetassignedCcUser();
    void setAssignedCcUser(const std::vector<IssueUser>& value);

    /// <summary>
    /// 
    /// </summary>

    IssueUser getAssignedUser() const;
    bool assignedUserIsSet() const;
    void unsetassignedUser();
    void setAssignedUser(const IssueUser& value);

    /// <summary>
    /// 预计开始时间，年-月-日
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 创建时间 年-月-日 时:分:秒
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueUser getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const IssueUser& value);

    /// <summary>
    /// 自定义属性值,不建议使用，建议参考new_custom_fields字段
    /// </summary>

    std::vector<CustomField>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<CustomField>& value);

    /// <summary>
    /// 自定义属性值
    /// </summary>

    std::vector<IssueDetailCustomField>& getNewCustomFields();
    bool newCustomFieldsIsSet() const;
    void unsetnewCustomFields();
    void setNewCustomFields(const std::vector<IssueDetailCustomField>& value);

    /// <summary>
    /// 
    /// </summary>

    IssueUser getDeveloper() const;
    bool developerIsSet() const;
    void unsetdeveloper();
    void setDeveloper(const IssueUser& value);

    /// <summary>
    /// 
    /// </summary>

    IssueItemSfV4_domain getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const IssueItemSfV4_domain& value);

    /// <summary>
    /// 工作项进度值
    /// </summary>

    int32_t getDoneRatio() const;
    bool doneRatioIsSet() const;
    void unsetdoneRatio();
    void setDoneRatio(int32_t value);

    /// <summary>
    /// 预计结束时间，年-月-日
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 预计工时
    /// </summary>

    double getExpectedWorkHours() const;
    bool expectedWorkHoursIsSet() const;
    void unsetexpectedWorkHours();
    void setExpectedWorkHours(double value);

    /// <summary>
    /// 工作项项id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    IssueProjectResponseV4 getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const IssueProjectResponseV4& value);

    /// <summary>
    /// 
    /// </summary>

    IssueItemSfV4_iteration getIteration() const;
    bool iterationIsSet() const;
    void unsetiteration();
    void setIteration(const IssueItemSfV4_iteration& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV4_story_point getStoryPoint() const;
    bool storyPointIsSet() const;
    void unsetstoryPoint();
    void setStoryPoint(const IssueDetailResponseV4_story_point& value);

    /// <summary>
    /// 
    /// </summary>

    IssueItemSfV4_module getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const IssueItemSfV4_module& value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateIssueResponseV4_parent_issue getParentIssue() const;
    bool parentIssueIsSet() const;
    void unsetparentIssue();
    void setParentIssue(const CreateIssueResponseV4_parent_issue& value);

    /// <summary>
    /// 
    /// </summary>

    IssueItemSfV4_priority getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const IssueItemSfV4_priority& value);

    /// <summary>
    /// 
    /// </summary>

    IssueItemSfV4_severity getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const IssueItemSfV4_severity& value);

    /// <summary>
    /// 
    /// </summary>

    IssueItemSfV4_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const IssueItemSfV4_status& value);

    /// <summary>
    /// 工作项发布版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 缺陷发现版本号（仅Bug类型工作项具备该字段）
    /// </summary>

    std::string getFindReleaseDev() const;
    bool findReleaseDevIsSet() const;
    void unsetfindReleaseDev();
    void setFindReleaseDev(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueDetailResponseV4_env getEnv() const;
    bool envIsSet() const;
    void unsetenv();
    void setEnv(const IssueDetailResponseV4_env& value);

    /// <summary>
    /// 
    /// </summary>

    CreateIssueResponseV4_tracker getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const CreateIssueResponseV4_tracker& value);

    /// <summary>
    /// 更新时间 年-月-日 时:分:秒
    /// </summary>

    std::string getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(const std::string& value);

    /// <summary>
    /// 关闭时间 年-月-日 时:分:秒
    /// </summary>

    std::string getClosedTime() const;
    bool closedTimeIsSet() const;
    void unsetclosedTime();
    void setClosedTime(const std::string& value);

    /// <summary>
    /// 工作项描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IssueOrder getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const IssueOrder& value);

    /// <summary>
    /// 附近列表
    /// </summary>

    std::vector<IssueAccessory>& getAccessories();
    bool accessoriesIsSet() const;
    void unsetaccessories();
    void setAccessories(const std::vector<IssueAccessory>& value);


protected:
    double actualWorkHours_;
    bool actualWorkHoursIsSet_;
    std::vector<IssueUser> assignedCcUser_;
    bool assignedCcUserIsSet_;
    IssueUser assignedUser_;
    bool assignedUserIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    IssueUser creator_;
    bool creatorIsSet_;
    std::vector<CustomField> customFields_;
    bool customFieldsIsSet_;
    std::vector<IssueDetailCustomField> newCustomFields_;
    bool newCustomFieldsIsSet_;
    IssueUser developer_;
    bool developerIsSet_;
    IssueItemSfV4_domain domain_;
    bool domainIsSet_;
    int32_t doneRatio_;
    bool doneRatioIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    double expectedWorkHours_;
    bool expectedWorkHoursIsSet_;
    int32_t id_;
    bool idIsSet_;
    IssueProjectResponseV4 project_;
    bool projectIsSet_;
    IssueItemSfV4_iteration iteration_;
    bool iterationIsSet_;
    IssueDetailResponseV4_story_point storyPoint_;
    bool storyPointIsSet_;
    IssueItemSfV4_module module_;
    bool moduleIsSet_;
    std::string name_;
    bool nameIsSet_;
    CreateIssueResponseV4_parent_issue parentIssue_;
    bool parentIssueIsSet_;
    IssueItemSfV4_priority priority_;
    bool priorityIsSet_;
    IssueItemSfV4_severity severity_;
    bool severityIsSet_;
    IssueItemSfV4_status status_;
    bool statusIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string findReleaseDev_;
    bool findReleaseDevIsSet_;
    IssueDetailResponseV4_env env_;
    bool envIsSet_;
    CreateIssueResponseV4_tracker tracker_;
    bool trackerIsSet_;
    std::string updatedTime_;
    bool updatedTimeIsSet_;
    std::string closedTime_;
    bool closedTimeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    IssueOrder order_;
    bool orderIsSet_;
    std::vector<IssueAccessory> accessories_;
    bool accessoriesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowIssueV4Response_H_
