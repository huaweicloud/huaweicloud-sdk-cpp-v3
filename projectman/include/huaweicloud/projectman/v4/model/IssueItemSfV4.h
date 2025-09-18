
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueItemSfV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueItemSfV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueItemSfV4_story_point.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_priority.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_status.h>
#include <string>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_severity.h>
#include <huaweicloud/projectman/v4/model/CustomFeildRecord.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_iteration.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_domain.h>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_tracker.h>
#include <vector>
#include <huaweicloud/projectman/v4/model/IssueItemSfV4_module.h>
#include <huaweicloud/projectman/v4/model/IssueUser.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueItemSfV4
    : public ModelBase
{
public:
    IssueItemSfV4();
    virtual ~IssueItemSfV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueItemSfV4 members

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

    IssueUser getAssignedUser() const;
    bool assignedUserIsSet() const;
    void unsetassignedUser();
    void setAssignedUser(const IssueUser& value);

    /// <summary>
    /// 
    /// </summary>

    IssueUser getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const IssueUser& value);

    /// <summary>
    /// 工作项开始时间
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// 关闭工作项的时间
    /// </summary>

    int64_t getClosedTime() const;
    bool closedTimeIsSet() const;
    void unsetclosedTime();
    void setClosedTime(int64_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(int64_t value);

    /// <summary>
    /// 自定义属性
    /// </summary>

    std::vector<CustomFeildRecord>& getCustomFeilds();
    bool customFeildsIsSet() const;
    void unsetcustomFeilds();
    void setCustomFeilds(const std::vector<CustomFeildRecord>& value);

    /// <summary>
    /// 
    /// </summary>

    IssueUser getDeveloper() const;
    bool developerIsSet() const;
    void unsetdeveloper();
    void setDeveloper(const IssueUser& value);

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

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 工作项进度值
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
    /// 顺序
    /// </summary>

    int32_t getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(int32_t value);

    /// <summary>
    /// 父工作项的id
    /// </summary>

    int32_t getParentIssueId() const;
    bool parentIssueIdIsSet() const;
    void unsetparentIssueId();
    void setParentIssueId(int32_t value);

    /// <summary>
    /// 发布的版本
    /// </summary>

    std::string getReleaseVersion() const;
    bool releaseVersionIsSet() const;
    void unsetreleaseVersion();
    void setReleaseVersion(const std::string& value);

    /// <summary>
    /// 根工作项的id
    /// </summary>

    int32_t getRootIssueId() const;
    bool rootIssueIdIsSet() const;
    void unsetrootIssueId();
    void setRootIssueId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    IssueItemSfV4_story_point getStoryPoint() const;
    bool storyPointIsSet() const;
    void unsetstoryPoint();
    void setStoryPoint(const IssueItemSfV4_story_point& value);

    /// <summary>
    /// 
    /// </summary>

    IssueItemSfV4_domain getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const IssueItemSfV4_domain& value);

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

    IssueItemSfV4_tracker getTracker() const;
    bool trackerIsSet() const;
    void unsettracker();
    void setTracker(const IssueItemSfV4_tracker& value);

    /// <summary>
    /// 工作项标题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 工作项更新时间
    /// </summary>

    int64_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(int64_t value);


protected:
    double actualWorkHours_;
    bool actualWorkHoursIsSet_;
    IssueUser assignedUser_;
    bool assignedUserIsSet_;
    IssueUser author_;
    bool authorIsSet_;
    int64_t beginTime_;
    bool beginTimeIsSet_;
    int64_t closedTime_;
    bool closedTimeIsSet_;
    int64_t createdTime_;
    bool createdTimeIsSet_;
    std::vector<CustomFeildRecord> customFeilds_;
    bool customFeildsIsSet_;
    IssueUser developer_;
    bool developerIsSet_;
    std::string discoverVersion_;
    bool discoverVersionIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int32_t doneRatio_;
    bool doneRatioIsSet_;
    double expectedWorkHours_;
    bool expectedWorkHoursIsSet_;
    int32_t order_;
    bool orderIsSet_;
    int32_t parentIssueId_;
    bool parentIssueIdIsSet_;
    std::string releaseVersion_;
    bool releaseVersionIsSet_;
    int32_t rootIssueId_;
    bool rootIssueIdIsSet_;
    IssueItemSfV4_story_point storyPoint_;
    bool storyPointIsSet_;
    IssueItemSfV4_domain domain_;
    bool domainIsSet_;
    IssueItemSfV4_iteration iteration_;
    bool iterationIsSet_;
    IssueItemSfV4_module module_;
    bool moduleIsSet_;
    IssueItemSfV4_priority priority_;
    bool priorityIsSet_;
    IssueItemSfV4_severity severity_;
    bool severityIsSet_;
    IssueItemSfV4_status status_;
    bool statusIsSet_;
    IssueItemSfV4_tracker tracker_;
    bool trackerIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    int64_t updatedTime_;
    bool updatedTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueItemSfV4_H_
