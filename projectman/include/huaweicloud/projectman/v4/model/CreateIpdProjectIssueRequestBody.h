
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProjectIssueRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProjectIssueRequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CreateIpdProjectIssueRequestBody
    : public ModelBase
{
public:
    CreateIpdProjectIssueRequestBody();
    virtual ~CreateIpdProjectIssueRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIpdProjectIssueRequestBody members

    /// <summary>
    /// 工作项名称
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 状态[\&quot;Committed\&quot;, \&quot;Analyse\&quot;, \&quot;ToBeConfirmed\&quot;, \&quot;Plan\&quot;, \&quot;Doing\&quot;, \&quot;Delivered\&quot;, \&quot;Checking\&quot;]
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 提出项目domainId
    /// </summary>

    std::string getSrcDomain() const;
    bool srcDomainIsSet() const;
    void unsetsrcDomain();
    void setSrcDomain(const std::string& value);

    /// <summary>
    /// 提交人Id
    /// </summary>

    std::string getSubmittedBy() const;
    bool submittedByIsSet() const;
    void unsetsubmittedBy();
    void setSubmittedBy(const std::string& value);

    /// <summary>
    /// 归属项目domainId
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 承接人id
    /// </summary>

    std::vector<std::string>& getRecipient();
    bool recipientIsSet() const;
    void unsetrecipient();
    void setRecipient(const std::vector<std::string>& value);

    /// <summary>
    /// 期望完成时间
    /// </summary>

    int64_t getExpectDeliveryTime() const;
    bool expectDeliveryTimeIsSet() const;
    void unsetexpectDeliveryTime();
    void setExpectDeliveryTime(int64_t value);

    /// <summary>
    /// 优先级
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);

    /// <summary>
    /// 抄送人id
    /// </summary>

    std::vector<std::string>& getAssignedCc();
    bool assignedCcIsSet() const;
    void unsetassignedCc();
    void setAssignedCc(const std::vector<std::string>& value);

    /// <summary>
    /// 工作项分类：[Epic,FE,IR,RR,SR,US,AR,Bug,Task]
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 责任人
    /// </summary>

    std::string getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const std::string& value);

    /// <summary>
    /// PI ID
    /// </summary>

    std::string getPlanPi() const;
    bool planPiIsSet() const;
    void unsetplanPi();
    void setPlanPi(const std::string& value);

    /// <summary>
    /// 迭代ID
    /// </summary>

    std::string getPlanIteration() const;
    bool planIterationIsSet() const;
    void unsetplanIteration();
    void setPlanIteration(const std::string& value);

    /// <summary>
    /// 计划开始时间
    /// </summary>

    int64_t getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(int64_t value);

    /// <summary>
    /// 计划结束时间
    /// </summary>

    int64_t getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(int64_t value);

    /// <summary>
    /// 计划工时
    /// </summary>

    int32_t getWorkloadManDay() const;
    bool workloadManDayIsSet() const;
    void unsetworkloadManDay();
    void setWorkloadManDay(int32_t value);

    /// <summary>
    /// 领域
    /// </summary>

    std::string getBusinessDomain() const;
    bool businessDomainIsSet() const;
    void unsetbusinessDomain();
    void setBusinessDomain(const std::string& value);

    /// <summary>
    /// 是否需要分解
    /// </summary>

    std::string getNeedBreak() const;
    bool needBreakIsSet() const;
    void unsetneedBreak();
    void setNeedBreak(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string srcDomain_;
    bool srcDomainIsSet_;
    std::string submittedBy_;
    bool submittedByIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::vector<std::string> recipient_;
    bool recipientIsSet_;
    int64_t expectDeliveryTime_;
    bool expectDeliveryTimeIsSet_;
    std::string priority_;
    bool priorityIsSet_;
    std::vector<std::string> assignedCc_;
    bool assignedCcIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string assignee_;
    bool assigneeIsSet_;
    std::string planPi_;
    bool planPiIsSet_;
    std::string planIteration_;
    bool planIterationIsSet_;
    int64_t planStartDate_;
    bool planStartDateIsSet_;
    int64_t planEndDate_;
    bool planEndDateIsSet_;
    int32_t workloadManDay_;
    bool workloadManDayIsSet_;
    std::string businessDomain_;
    bool businessDomainIsSet_;
    std::string needBreak_;
    bool needBreakIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CreateIpdProjectIssueRequestBody_H_
