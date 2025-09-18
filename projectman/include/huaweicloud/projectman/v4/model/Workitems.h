
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Workitems_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Workitems_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/Workitems_status.h>
#include <huaweicloud/projectman/v4/model/Workitems_tags.h>
#include <huaweicloud/projectman/v4/model/WorkitemCustomField.h>
#include <huaweicloud/projectman/v4/model/Workitems_module.h>
#include <huaweicloud/projectman/v4/model/WorkitemUser.h>
#include <huaweicloud/projectman/v4/model/Workitems_domain.h>
#include <string>
#include <huaweicloud/projectman/v4/model/Workitems_iteration.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  Workitems
    : public ModelBase
{
public:
    Workitems();
    virtual ~Workitems();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Workitems members

    /// <summary>
    /// 工作项id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 工作项描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

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

    WorkitemUser getAssignedUser() const;
    bool assignedUserIsSet() const;
    void unsetassignedUser();
    void setAssignedUser(const WorkitemUser& value);

    /// <summary>
    /// 
    /// </summary>

    WorkitemUser getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const WorkitemUser& value);

    /// <summary>
    /// 工作项开始时间
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::vector<Workitems_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Workitems_tags>& value);

    /// <summary>
    /// 
    /// </summary>

    WorkitemUser getDeveloper() const;
    bool developerIsSet() const;
    void unsetdeveloper();
    void setDeveloper(const WorkitemUser& value);

    /// <summary>
    /// 抄送人
    /// </summary>

    std::vector<WorkitemUser>& getAssignedCcUser();
    bool assignedCcUserIsSet() const;
    void unsetassignedCcUser();
    void setAssignedCcUser(const std::vector<WorkitemUser>& value);

    /// <summary>
    /// 发现问题的版本
    /// </summary>

    std::string getDiscoverVersion() const;
    bool discoverVersionIsSet() const;
    void unsetdiscoverVersion();
    void setDiscoverVersion(const std::string& value);

    /// <summary>
    /// 工作项结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 工作项进度值
    /// </summary>

    std::string getDoneRatio() const;
    bool doneRatioIsSet() const;
    void unsetdoneRatio();
    void setDoneRatio(const std::string& value);

    /// <summary>
    /// 预计工时
    /// </summary>

    double getExpectedWorkHours() const;
    bool expectedWorkHoursIsSet() const;
    void unsetexpectedWorkHours();
    void setExpectedWorkHours(double value);

    /// <summary>
    /// 顺序
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 父工作项的id
    /// </summary>

    std::string getParentWorkItemId() const;
    bool parentWorkItemIdIsSet() const;
    void unsetparentWorkItemId();
    void setParentWorkItemId(const std::string& value);

    /// <summary>
    /// 发布的版本
    /// </summary>

    std::string getReleaseVersion() const;
    bool releaseVersionIsSet() const;
    void unsetreleaseVersion();
    void setReleaseVersion(const std::string& value);

    /// <summary>
    /// 故事点
    /// </summary>

    std::string getStoryPoint() const;
    bool storyPointIsSet() const;
    void unsetstoryPoint();
    void setStoryPoint(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Workitems_domain getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const Workitems_domain& value);

    /// <summary>
    /// 
    /// </summary>

    Workitems_iteration getIteration() const;
    bool iterationIsSet() const;
    void unsetiteration();
    void setIteration(const Workitems_iteration& value);

    /// <summary>
    /// 
    /// </summary>

    Workitems_module getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const Workitems_module& value);

    /// <summary>
    /// 工作项优先级
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);

    /// <summary>
    /// 严重的程度 \&quot;提示\&quot;, \&quot;一般\&quot;, \&quot;严重\&quot;, \&quot;致命\&quot;
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Workitems_status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const Workitems_status& value);

    /// <summary>
    /// 工作项标题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(const std::string& value);

    /// <summary>
    /// 工作项编号
    /// </summary>

    std::string getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(const std::string& value);

    /// <summary>
    /// 重要程度 \&quot;关键\&quot;, \&quot;重要\&quot;, \&quot;一般\&quot;, \&quot;提示\&quot;
    /// </summary>

    std::string getImportant() const;
    bool importantIsSet() const;
    void unsetimportant();
    void setImportant(const std::string& value);

    /// <summary>
    /// 用户自定义字段
    /// </summary>

    std::vector<WorkitemCustomField>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<WorkitemCustomField>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    double actualWorkHours_;
    bool actualWorkHoursIsSet_;
    WorkitemUser assignedUser_;
    bool assignedUserIsSet_;
    WorkitemUser author_;
    bool authorIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::vector<Workitems_tags> tags_;
    bool tagsIsSet_;
    WorkitemUser developer_;
    bool developerIsSet_;
    std::vector<WorkitemUser> assignedCcUser_;
    bool assignedCcUserIsSet_;
    std::string discoverVersion_;
    bool discoverVersionIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string doneRatio_;
    bool doneRatioIsSet_;
    double expectedWorkHours_;
    bool expectedWorkHoursIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string parentWorkItemId_;
    bool parentWorkItemIdIsSet_;
    std::string releaseVersion_;
    bool releaseVersionIsSet_;
    std::string storyPoint_;
    bool storyPointIsSet_;
    Workitems_domain domain_;
    bool domainIsSet_;
    Workitems_iteration iteration_;
    bool iterationIsSet_;
    Workitems_module module_;
    bool moduleIsSet_;
    std::string priority_;
    bool priorityIsSet_;
    std::string severity_;
    bool severityIsSet_;
    Workitems_status status_;
    bool statusIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string updatedTime_;
    bool updatedTimeIsSet_;
    std::string sequence_;
    bool sequenceIsSet_;
    std::string important_;
    bool importantIsSet_;
    std::vector<WorkitemCustomField> customFields_;
    bool customFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Workitems_H_
