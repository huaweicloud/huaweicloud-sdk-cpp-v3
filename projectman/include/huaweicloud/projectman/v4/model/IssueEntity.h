
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/LabelEntity.h>
#include <huaweicloud/projectman/v4/model/FieldCodeValuePair.h>
#include <string>
#include <huaweicloud/projectman/v4/model/UserEntity.h>
#include <vector>
#include <huaweicloud/projectman/v4/model/IssueEntity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项的公共父类，即所有工作项类型都有这些字段 其子类有 IssueAREntity IssueBugEntity IssueEntity IssueEpicEntity IssueFEEntity IssueIREntity IssueRREntity IssueSFEntity IssueSREntity IssueTaskEntity IssueUSEntity
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueEntity
    : public ModelBase
{
public:
    IssueEntity();
    virtual ~IssueEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueEntity members

    /// <summary>
    /// 工作项id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 工作项标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项描述字段
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 工作项大分类定义 requirement(研发需求)、bug(缺陷)、task(任务)、feature(特性)、raw_requirement(原始需求)
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 工作项编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 工作项类型，编辑工作项时，此字段必填、值为当前工作项正确的工作项类型，但不会更新此字段
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 父工作项id
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 工作项所属的项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项状态code
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 工作项的生命周期，可选值为\&quot;正在工作\&quot;,\&quot;作废\&quot;
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserEntity& value);

    /// <summary>
    /// 工作项创建时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const UserEntity& value);

    /// <summary>
    /// 工作项最近更新时间
    /// </summary>

    std::string getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetmodifiedTime();
    void setModifiedTime(const std::string& value);

    /// <summary>
    /// 工作项计划结束日期，时间戳
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// 工作项关闭时间
    /// </summary>

    std::string getCloseTime() const;
    bool closeTimeIsSet() const;
    void unsetcloseTime();
    void setCloseTime(const std::string& value);

    /// <summary>
    /// 工作项计划工时，保留一位小数，取值范围为0~999999999.9
    /// </summary>

    std::string getWorkload() const;
    bool workloadIsSet() const;
    void unsetworkload();
    void setWorkload(const std::string& value);

    /// <summary>
    /// 工作项计划工时，保留一位小数，取值范围为0~999999999.9，不可编辑
    /// </summary>

    std::string getWorkloadSum() const;
    bool workloadSumIsSet() const;
    void unsetworkloadSum();
    void setWorkloadSum(const std::string& value);

    /// <summary>
    /// 工作项所属租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 工作项关联项id，多个关联项用英文逗号分隔，同一工作项最多支持50个关联项
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);

    /// <summary>
    /// 工作项是否已挂起
    /// </summary>

    bool isSuspended() const;
    bool suspendedIsSet() const;
    void unsetsuspended();
    void setSuspended(bool value);

    /// <summary>
    /// 工作项状态改变时间，可用于计算工作项在当前状态停留天数
    /// </summary>

    std::string getStatusModifiedTime() const;
    bool statusModifiedTimeIsSet() const;
    void unsetstatusModifiedTime();
    void setStatusModifiedTime(const std::string& value);

    /// <summary>
    /// 工作项标签
    /// </summary>

    std::vector<LabelEntity>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<LabelEntity>& value);

    /// <summary>
    /// 工作项自定义字段映射，用户添加的系统字段也在此列 { \&quot;code\&quot;:\&quot;字段code\&quot;, \&quot;value\&quot;:\&quot;字段值\&quot; }
    /// </summary>

    std::vector<FieldCodeValuePair>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<FieldCodeValuePair>& value);

    /// <summary>
    /// 工作项的子工作项集合
    /// </summary>

    std::vector<IssueEntity>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<IssueEntity>& value);

    /// <summary>
    /// 子工作项的路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// IR和FE的关联字段，工作项类型为IR时，有此字段
    /// </summary>

    std::string getIr2feature() const;
    bool ir2featureIsSet() const;
    void unsetir2feature();
    void setIr2feature(const std::string& value);

    /// <summary>
    /// 工作项是否需要分解,仅可以分解的工作项类型有此字段
    /// </summary>

    std::string getNeedBreak() const;
    bool needBreakIsSet() const;
    void unsetneedBreak();
    void setNeedBreak(const std::string& value);

    /// <summary>
    /// 分解状态 已分解—decomposed 未分解—undecomposed 不涉及— --
    /// </summary>

    std::string getBreakStatus() const;
    bool breakStatusIsSet() const;
    void unsetbreakStatus();
    void setBreakStatus(const std::string& value);

    /// <summary>
    /// 工作项基线状态 未基线 —— null 已基线 —— baselined 基线评审中——baseline-reviewing
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);

    /// <summary>
    /// 工作项优先级，部分工作项有此字段
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);

    /// <summary>
    /// 是否涉及网络安全。预设字段中，仅研发需求有此字段
    /// </summary>

    std::string getRelatedNetworkSecurity() const;
    bool relatedNetworkSecurityIsSet() const;
    void unsetrelatedNetworkSecurity();
    void setRelatedNetworkSecurity(const std::string& value);

    /// <summary>
    /// 研发需求协同信息，协同任务id
    /// </summary>

    std::string getCollaboratives() const;
    bool collaborativesIsSet() const;
    void unsetcollaboratives();
    void setCollaboratives(const std::string& value);

    /// <summary>
    /// 领域字段
    /// </summary>

    std::string getBusinessDomain() const;
    bool businessDomainIsSet() const;
    void unsetbusinessDomain();
    void setBusinessDomain(const std::string& value);

    /// <summary>
    /// 工作项发布(老版本名为PI) id
    /// </summary>

    std::string getPlanPi() const;
    bool planPiIsSet() const;
    void unsetplanPi();
    void setPlanPi(const std::string& value);

    /// <summary>
    /// 工作项变更状态 变更评审中——change-reviewing 已变更——changed 未变更-unchange或null
    /// </summary>

    std::string getChangeStatus() const;
    bool changeStatusIsSet() const;
    void unsetchangeStatus();
    void setChangeStatus(const std::string& value);

    /// <summary>
    /// 无需分解原因，need_break&#x3D;no时有此字段
    /// </summary>

    std::string getNoBreakReason() const;
    bool noBreakReasonIsSet() const;
    void unsetnoBreakReason();
    void setNoBreakReason(const std::string& value);

    /// <summary>
    /// 提出人，部分工作项有此字段，多人时用英文逗号分隔
    /// </summary>

    std::string getSubmittedBy() const;
    bool submittedByIsSet() const;
    void unsetsubmittedBy();
    void setSubmittedBy(const std::string& value);

    /// <summary>
    /// IR关联的RR id，多选时用英文逗号分隔
    /// </summary>

    std::string getIr2rr() const;
    bool ir2rrIsSet() const;
    void unsetir2rr();
    void setIr2rr(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string state_;
    bool stateIsSet_;
    UserEntity assignee_;
    bool assigneeIsSet_;
    UserEntity createdBy_;
    bool createdByIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    UserEntity modifiedBy_;
    bool modifiedByIsSet_;
    std::string modifiedTime_;
    bool modifiedTimeIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    std::string closeTime_;
    bool closeTimeIsSet_;
    std::string workload_;
    bool workloadIsSet_;
    std::string workloadSum_;
    bool workloadSumIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string link_;
    bool linkIsSet_;
    bool suspended_;
    bool suspendedIsSet_;
    std::string statusModifiedTime_;
    bool statusModifiedTimeIsSet_;
    std::vector<LabelEntity> labels_;
    bool labelsIsSet_;
    std::vector<FieldCodeValuePair> customFields_;
    bool customFieldsIsSet_;
    std::vector<IssueEntity>* children_;
    bool childrenIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string ir2feature_;
    bool ir2featureIsSet_;
    std::string needBreak_;
    bool needBreakIsSet_;
    std::string breakStatus_;
    bool breakStatusIsSet_;
    std::string baseline_;
    bool baselineIsSet_;
    std::string priority_;
    bool priorityIsSet_;
    std::string relatedNetworkSecurity_;
    bool relatedNetworkSecurityIsSet_;
    std::string collaboratives_;
    bool collaborativesIsSet_;
    std::string businessDomain_;
    bool businessDomainIsSet_;
    std::string planPi_;
    bool planPiIsSet_;
    std::string changeStatus_;
    bool changeStatusIsSet_;
    std::string noBreakReason_;
    bool noBreakReasonIsSet_;
    std::string submittedBy_;
    bool submittedByIsSet_;
    std::string ir2rr_;
    bool ir2rrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueEntity_H_
