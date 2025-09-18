
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateSystemIssueRequestV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateSystemIssueRequestV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CreateIssueRequestV4.h>
#include <huaweicloud/projectman/v4/model/ScrumCustomField.h>
#include <string>
#include <huaweicloud/projectman/v4/model/NewCustomField.h>
#include <vector>
#include <huaweicloud/projectman/v4/model/Creator.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateSystemIssueRequestV4
    : public ModelBase
{
public:
    CreateSystemIssueRequestV4();
    virtual ~CreateSystemIssueRequestV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSystemIssueRequestV4 members

    /// <summary>
    /// 实际工时
    /// </summary>

    double getActualWorkHours() const;
    bool actualWorkHoursIsSet() const;
    void unsetactualWorkHours();
    void setActualWorkHours(double value);

    /// <summary>
    /// 处理人id,对应用户信息的数字id
    /// </summary>

    int32_t getAssignedId() const;
    bool assignedIdIsSet() const;
    void unsetassignedId();
    void setAssignedId(int32_t value);

    /// <summary>
    /// 开始时间，年-月-日
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 开发者id,对应用户信息的数字id
    /// </summary>

    int32_t getDeveloperId() const;
    bool developerIdIsSet() const;
    void unsetdeveloperId();
    void setDeveloperId(int32_t value);

    /// <summary>
    /// id 领域, 14 &#39;性能&#39;, 15 &#39;功能&#39;, 16 &#39;可靠性&#39; 17 &#39;网络安全&#39; 18 &#39;可维护性&#39; 19 &#39;其他DFX&#39; 20 &#39;可用性&#39;
    /// </summary>

    int32_t getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(int32_t value);

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
    /// 迭代id
    /// </summary>

    int32_t getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(int32_t value);

    /// <summary>
    /// 模块id
    /// </summary>

    int32_t getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(int32_t value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 父工作项的id,创建子工作项时必填，父工作项的类型tracker_id不能为2,3
    /// </summary>

    int32_t getParentIssueId() const;
    bool parentIssueIdIsSet() const;
    void unsetparentIssueId();
    void setParentIssueId(int32_t value);

    /// <summary>
    /// 优先级,   1 低,   2 中,   3 高,
    /// </summary>

    int32_t getPriorityId() const;
    bool priorityIdIsSet() const;
    void unsetpriorityId();
    void setPriorityId(int32_t value);

    /// <summary>
    /// 重要程度,   10 关键,   11 重要,   12 一般,   13 提示,
    /// </summary>

    int32_t getSeverityId() const;
    bool severityIdIsSet() const;
    void unsetseverityId();
    void setSeverityId(int32_t value);

    /// <summary>
    /// 状态   id, 新建   1, 进行中 2, 已解决 3, 测试中 4, 已关闭 5, 已拒绝 6,
    /// </summary>

    int32_t getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(int32_t value);

    /// <summary>
    /// 工作项类型, 2任务/Task,3缺陷/Bug,5Epic,6Feature,7Story;     5 只能为 6 的父工作项类型;     6 只能为 7 的父工作项类型;     7 只能为 2,3的父;
    /// </summary>

    int32_t getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(int32_t value);

    /// <summary>
    /// 用户自定义字段
    /// </summary>

    std::vector<NewCustomField>& getNewCustomFields();
    bool newCustomFieldsIsSet() const;
    void unsetnewCustomFields();
    void setNewCustomFields(const std::vector<NewCustomField>& value);

    /// <summary>
    /// 
    /// </summary>

    Creator getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const Creator& value);

    /// <summary>
    /// 用户自定义字段
    /// </summary>

    std::vector<ScrumCustomField>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<ScrumCustomField>& value);


protected:
    double actualWorkHours_;
    bool actualWorkHoursIsSet_;
    int32_t assignedId_;
    bool assignedIdIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t developerId_;
    bool developerIdIsSet_;
    int32_t domainId_;
    bool domainIdIsSet_;
    int32_t doneRatio_;
    bool doneRatioIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    double expectedWorkHours_;
    bool expectedWorkHoursIsSet_;
    int32_t iterationId_;
    bool iterationIdIsSet_;
    int32_t moduleId_;
    bool moduleIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t parentIssueId_;
    bool parentIssueIdIsSet_;
    int32_t priorityId_;
    bool priorityIdIsSet_;
    int32_t severityId_;
    bool severityIdIsSet_;
    int32_t statusId_;
    bool statusIdIsSet_;
    int32_t trackerId_;
    bool trackerIdIsSet_;
    std::vector<NewCustomField> newCustomFields_;
    bool newCustomFieldsIsSet_;
    Creator creator_;
    bool creatorIsSet_;
    std::vector<ScrumCustomField> customFields_;
    bool customFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateSystemIssueRequestV4_H_
