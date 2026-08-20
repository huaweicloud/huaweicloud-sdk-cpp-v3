
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_cos_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_cos_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_issue_priority.h>
#include <string>
#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_assignee.h>
#include <huaweicloud/projectman/v4/model/ProcessInstanceResponse_result_issue_status.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProcessInstanceResponse_result_cos
    : public ModelBase
{
public:
    ProcessInstanceResponse_result_cos();
    virtual ~ProcessInstanceResponse_result_cos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessInstanceResponse_result_cos members

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 变更对象工作项类型，此处固定为CO
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 评审单标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 变更对象状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInstanceResponse_result_assignee getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const ProcessInstanceResponse_result_assignee& value);

    /// <summary>
    /// 评审单描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 变更对象关联的工作项编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 排序
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// 关联的变更评审标识
    /// </summary>

    std::string getCo2cr() const;
    bool co2crIsSet() const;
    void unsetco2cr();
    void setCo2cr(const std::string& value);

    /// <summary>
    /// 关联的基线评审标识
    /// </summary>

    std::string getCo2br() const;
    bool co2brIsSet() const;
    void unsetco2br();
    void setCo2br(const std::string& value);

    /// <summary>
    /// 关联的通用评审标识
    /// </summary>

    std::string getCo2gr() const;
    bool co2grIsSet() const;
    void unsetco2gr();
    void setCo2gr(const std::string& value);

    /// <summary>
    /// 审批对象Id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 评审单类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 评审单工作状态，取值为\&quot;正在工作\&quot;,\&quot;作废\&quot;
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 变更对象工作项修改前内容
    /// </summary>

    std::string getBeforeChange() const;
    bool beforeChangeIsSet() const;
    void unsetbeforeChange();
    void setBeforeChange(const std::string& value);

    /// <summary>
    /// 变更对象修改后内容
    /// </summary>

    std::string getAfterChange() const;
    bool afterChangeIsSet() const;
    void unsetafterChange();
    void setAfterChange(const std::string& value);

    /// <summary>
    /// 评审单最后修改人
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// 评审单最后修改时间
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 评审单创建人
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 评审单创建时间
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 工作项所属租户ID，可通过[查询树状工作项](ShowIpdIssueTree.xml)接口获取，响应消息体中的**tenant_id**字段的值就是工作项所属租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 工作项状态
    /// </summary>

    std::string getStatusMap() const;
    bool statusMapIsSet() const;
    void unsetstatusMap();
    void setStatusMap(const std::string& value);

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 源系统
    /// </summary>

    std::string getSourceSystem() const;
    bool sourceSystemIsSet() const;
    void unsetsourceSystem();
    void setSourceSystem(const std::string& value);

    /// <summary>
    /// 源系统链接
    /// </summary>

    std::string getSourceSystemLink() const;
    bool sourceSystemLinkIsSet() const;
    void unsetsourceSystemLink();
    void setSourceSystemLink(const std::string& value);

    /// <summary>
    /// 变更对象关联的工作项类型
    /// </summary>

    std::string getIssueCategory() const;
    bool issueCategoryIsSet() const;
    void unsetissueCategory();
    void setIssueCategory(const std::string& value);

    /// <summary>
    /// 工作项ID
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInstanceResponse_result_issue_status getIssueStatus() const;
    bool issueStatusIsSet() const;
    void unsetissueStatus();
    void setIssueStatus(const ProcessInstanceResponse_result_issue_status& value);

    /// <summary>
    /// 工作项严重程度
    /// </summary>

    std::string getIssueSeverity() const;
    bool issueSeverityIsSet() const;
    void unsetissueSeverity();
    void setIssueSeverity(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProcessInstanceResponse_result_issue_priority getIssuePriority() const;
    bool issuePriorityIsSet() const;
    void unsetissuePriority();
    void setIssuePriority(const ProcessInstanceResponse_result_issue_priority& value);

    /// <summary>
    /// 归属项目名称
    /// </summary>

    std::string getDomainTitle() const;
    bool domainTitleIsSet() const;
    void unsetdomainTitle();
    void setDomainTitle(const std::string& value);

    /// <summary>
    /// 提出项目名称
    /// </summary>

    std::string getSrcDomainTitle() const;
    bool srcDomainTitleIsSet() const;
    void unsetsrcDomainTitle();
    void setSrcDomainTitle(const std::string& value);

    /// <summary>
    /// 责任人昵称
    /// </summary>

    std::string getIssueAssigneeName() const;
    bool issueAssigneeNameIsSet() const;
    void unsetissueAssigneeName();
    void setIssueAssigneeName(const std::string& value);

    /// <summary>
    /// 评审原因
    /// </summary>

    std::string getChangeReason() const;
    bool changeReasonIsSet() const;
    void unsetchangeReason();
    void setChangeReason(const std::string& value);

    /// <summary>
    /// 评审类型
    /// </summary>

    std::string getChangeType() const;
    bool changeTypeIsSet() const;
    void unsetchangeType();
    void setChangeType(const std::string& value);

    /// <summary>
    /// 源系统id
    /// </summary>

    std::string getSourceSystemId() const;
    bool sourceSystemIdIsSet() const;
    void unsetsourceSystemId();
    void setSourceSystemId(const std::string& value);

    /// <summary>
    /// 评审描述
    /// </summary>

    std::string getChangeDescription() const;
    bool changeDescriptionIsSet() const;
    void unsetchangeDescription();
    void setChangeDescription(const std::string& value);

    /// <summary>
    /// 是否已删除
    /// </summary>

    std::string getHasDeleted() const;
    bool hasDeletedIsSet() const;
    void unsethasDeleted();
    void setHasDeleted(const std::string& value);

    /// <summary>
    /// 评审结果
    /// </summary>

    std::string getApprovalPhaseResult() const;
    bool approvalPhaseResultIsSet() const;
    void unsetapprovalPhaseResult();
    void setApprovalPhaseResult(const std::string& value);

    /// <summary>
    /// 评审完成时间
    /// </summary>

    std::string getApprovalCompleteTime() const;
    bool approvalCompleteTimeIsSet() const;
    void unsetapprovalCompleteTime();
    void setApprovalCompleteTime(const std::string& value);

    /// <summary>
    /// 评审描述
    /// </summary>

    std::string getCcbDescription() const;
    bool ccbDescriptionIsSet() const;
    void unsetccbDescription();
    void setCcbDescription(const std::string& value);

    /// <summary>
    /// 评审专家
    /// </summary>

    std::string getActualCcb() const;
    bool actualCcbIsSet() const;
    void unsetactualCcb();
    void setActualCcb(const std::string& value);

    /// <summary>
    /// 审批信息列表
    /// </summary>

    std::string getCcbs() const;
    bool ccbsIsSet() const;
    void unsetccbs();
    void setCcbs(const std::string& value);

    /// <summary>
    /// 评审信息
    /// </summary>

    std::string getCcbInfo() const;
    bool ccbInfoIsSet() const;
    void unsetccbInfo();
    void setCcbInfo(const std::string& value);

    /// <summary>
    /// 变更对象评审专家Id列表（创建变更评审时使用）
    /// </summary>

    std::string getOpinions() const;
    bool opinionsIsSet() const;
    void unsetopinions();
    void setOpinions(const std::string& value);

    /// <summary>
    /// 评审意见
    /// </summary>

    std::string getOpinionComments() const;
    bool opinionCommentsIsSet() const;
    void unsetopinionComments();
    void setOpinionComments(const std::string& value);

    /// <summary>
    /// 审批时间
    /// </summary>

    std::string getApprovalTime() const;
    bool approvalTimeIsSet() const;
    void unsetapprovalTime();
    void setApprovalTime(const std::string& value);

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getSrcDomainId() const;
    bool srcDomainIdIsSet() const;
    void unsetsrcDomainId();
    void setSrcDomainId(const std::string& value);

    /// <summary>
    /// 是否跨租户
    /// </summary>

    std::string getCrossDomain() const;
    bool crossDomainIsSet() const;
    void unsetcrossDomain();
    void setCrossDomain(const std::string& value);

    /// <summary>
    /// 归属项目是否迁移
    /// </summary>

    std::string getDomainMoved() const;
    bool domainMovedIsSet() const;
    void unsetdomainMoved();
    void setDomainMoved(const std::string& value);

    /// <summary>
    /// 评审专家
    /// </summary>

    std::vector<std::string>& getReviewer();
    bool reviewerIsSet() const;
    void unsetreviewer();
    void setReviewer(const std::vector<std::string>& value);

    /// <summary>
    /// 决策人
    /// </summary>

    std::vector<std::string>& getApprover();
    bool approverIsSet() const;
    void unsetapprover();
    void setApprover(const std::vector<std::string>& value);

    /// <summary>
    /// 评审轮次
    /// </summary>

    std::string getRounds() const;
    bool roundsIsSet() const;
    void unsetrounds();
    void setRounds(const std::string& value);

    /// <summary>
    /// 最近一轮决策结果
    /// </summary>

    std::string getLastRoundResult() const;
    bool lastRoundResultIsSet() const;
    void unsetlastRoundResult();
    void setLastRoundResult(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string status_;
    bool statusIsSet_;
    ProcessInstanceResponse_result_assignee assignee_;
    bool assigneeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string co2cr_;
    bool co2crIsSet_;
    std::string co2br_;
    bool co2brIsSet_;
    std::string co2gr_;
    bool co2grIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string beforeChange_;
    bool beforeChangeIsSet_;
    std::string afterChange_;
    bool afterChangeIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string statusMap_;
    bool statusMapIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string sourceSystem_;
    bool sourceSystemIsSet_;
    std::string sourceSystemLink_;
    bool sourceSystemLinkIsSet_;
    std::string issueCategory_;
    bool issueCategoryIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    ProcessInstanceResponse_result_issue_status issueStatus_;
    bool issueStatusIsSet_;
    std::string issueSeverity_;
    bool issueSeverityIsSet_;
    ProcessInstanceResponse_result_issue_priority issuePriority_;
    bool issuePriorityIsSet_;
    std::string domainTitle_;
    bool domainTitleIsSet_;
    std::string srcDomainTitle_;
    bool srcDomainTitleIsSet_;
    std::string issueAssigneeName_;
    bool issueAssigneeNameIsSet_;
    std::string changeReason_;
    bool changeReasonIsSet_;
    std::string changeType_;
    bool changeTypeIsSet_;
    std::string sourceSystemId_;
    bool sourceSystemIdIsSet_;
    std::string changeDescription_;
    bool changeDescriptionIsSet_;
    std::string hasDeleted_;
    bool hasDeletedIsSet_;
    std::string approvalPhaseResult_;
    bool approvalPhaseResultIsSet_;
    std::string approvalCompleteTime_;
    bool approvalCompleteTimeIsSet_;
    std::string ccbDescription_;
    bool ccbDescriptionIsSet_;
    std::string actualCcb_;
    bool actualCcbIsSet_;
    std::string ccbs_;
    bool ccbsIsSet_;
    std::string ccbInfo_;
    bool ccbInfoIsSet_;
    std::string opinions_;
    bool opinionsIsSet_;
    std::string opinionComments_;
    bool opinionCommentsIsSet_;
    std::string approvalTime_;
    bool approvalTimeIsSet_;
    std::string srcDomainId_;
    bool srcDomainIdIsSet_;
    std::string crossDomain_;
    bool crossDomainIsSet_;
    std::string domainMoved_;
    bool domainMovedIsSet_;
    std::vector<std::string> reviewer_;
    bool reviewerIsSet_;
    std::vector<std::string> approver_;
    bool approverIsSet_;
    std::string rounds_;
    bool roundsIsSet_;
    std::string lastRoundResult_;
    bool lastRoundResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ProcessInstanceResponse_result_cos_H_
