
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIssueV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIssueV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueItemSfV4_priority.h>
#include <string>
#include <huaweicloud/projectman/v4/model/CreateIssueResponseV4_domain.h>
#include <huaweicloud/projectman/v4/model/CreateIssueResponseV4_tracker.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_severity.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_iteration.h>
#include <huaweicloud/projectman/v4/model/IssueProjectResponseV4.h>
#include <vector>
#include <huaweicloud/projectman/v4/model/IssueUser.h>
#include <huaweicloud/projectman/v4/model/CreateIssueResponseV4_parent_issue.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_status.h>
#include <huaweicloud/projectman/v4/model/NewCustomField.h>
#include <huaweicloud/projectman/v4/model/CustomField.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateIssueV4Response
    : public ModelBase, public HttpResponse
{
public:
    CreateIssueV4Response();
    virtual ~CreateIssueV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIssueV4Response members

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
    /// 开始时间，年-月-日
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

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

    std::vector<NewCustomField>& getNewCustomFields();
    bool newCustomFieldsIsSet() const;
    void unsetnewCustomFields();
    void setNewCustomFields(const std::vector<NewCustomField>& value);

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

    CreateIssueResponseV4_domain getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const CreateIssueResponseV4_domain& value);

    /// <summary>
    /// 工作项进度值
    /// </summary>

    int32_t getDoneRatio() const;
    bool doneRatioIsSet() const;
    void unsetdoneRatio();
    void setDoneRatio(int32_t value);

    /// <summary>
    /// 结束时间，年-月-日
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

    IssueItemSfV4_module getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const IssueItemSfV4_module& value);

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
    /// 
    /// </summary>

    CreateIssueResponseV4_tracker getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const CreateIssueResponseV4_tracker& value);


protected:
    double actualWorkHours_;
    bool actualWorkHoursIsSet_;
    std::vector<IssueUser> assignedCcUser_;
    bool assignedCcUserIsSet_;
    IssueUser assignedUser_;
    bool assignedUserIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    IssueUser creator_;
    bool creatorIsSet_;
    std::vector<CustomField> customFields_;
    bool customFieldsIsSet_;
    std::vector<NewCustomField> newCustomFields_;
    bool newCustomFieldsIsSet_;
    IssueUser developer_;
    bool developerIsSet_;
    CreateIssueResponseV4_domain domain_;
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
    IssueItemSfV4_module module_;
    bool moduleIsSet_;
    CreateIssueResponseV4_parent_issue parentIssue_;
    bool parentIssueIsSet_;
    IssueItemSfV4_priority priority_;
    bool priorityIsSet_;
    IssueItemSfV4_severity severity_;
    bool severityIsSet_;
    IssueItemSfV4_status status_;
    bool statusIsSet_;
    CreateIssueResponseV4_tracker tracker_;
    bool trackerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIssueV4Response_H_
