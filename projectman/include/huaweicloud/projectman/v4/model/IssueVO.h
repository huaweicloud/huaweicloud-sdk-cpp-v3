
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/AlmStatus.h>
#include <huaweicloud/projectman/v4/model/UserVO.h>
#include <huaweicloud/projectman/v4/model/IssueVO.h>
#include <string>
#include <huaweicloud/projectman/v4/model/DomainVO.h>
#include <huaweicloud/projectman/v4/model/OptionVO.h>
#include <map>
#include <vector>
#include <huaweicloud/projectman/v4/model/PlanVO.h>
#include <huaweicloud/projectman/v4/model/WorkItemLabelVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueVO
    : public ModelBase
{
public:
    IssueVO();
    virtual ~IssueVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueVO members

    /// <summary>
    /// **参数解释：**  分析结论，通常在接纳RR时填写。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysAnalysisConclusion() const;
    bool sysAnalysisConclusionIsSet() const;
    void unsetsysAnalysisConclusion();
    void setSysAnalysisConclusion(const std::string& value);

    /// <summary>
    /// **参数解释：**  备注。通常在提交验收RR时填写。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysRemark() const;
    bool sysRemarkIsSet() const;
    void unsetsysRemark();
    void setSysRemark(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getPromised() const;
    bool promisedIsSet() const;
    void unsetpromised();
    void setPromised(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  工作项的分类。 **取值范围：**  - requirement - raw requirement - bug - task - feature
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：**  标识工作项是否跨项目提交。 **取值范围：**  - 1：跨项目提交工作项。 - 0：非跨项目提交工作项。
    /// </summary>

    std::string getBelongInside() const;
    bool belongInsideIsSet() const;
    void unsetbelongInside();
    void setBelongInside(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DomainVO getSrcDomain() const;
    bool srcDomainIsSet() const;
    void unsetsrcDomain();
    void setSrcDomain(const DomainVO& value);

    /// <summary>
    /// 
    /// </summary>

    DomainVO getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const DomainVO& value);

    /// <summary>
    /// **参数解释：**  原始需求的协同上游需求Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSendFrom() const;
    bool sendFromIsSet() const;
    void unsetsendFrom();
    void setSendFrom(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项编号，由工作项类型+年月日+6位随机数组成。 **取值范围：**  不涉及。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// **参数解释：**  原始需求的协同下游需求Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSendTo() const;
    bool sendToIsSet() const;
    void unsetsendTo();
    void setSendTo(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项父子挂载路径关系。 **取值范围：**  不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项计划工时。 **取值范围：**  不涉及。
    /// </summary>

    std::string getWorkloadManDay() const;
    bool workloadManDayIsSet() const;
    void unsetworkloadManDay();
    void setWorkloadManDay(const std::string& value);

    /// <summary>
    /// **参数解释：**  验收结论。通常是验收RR时填写。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysCheckConclusion() const;
    bool sysCheckConclusionIsSet() const;
    void unsetsysCheckConclusion();
    void setSysCheckConclusion(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项唯一Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项生命周期。 **取值范围：**  - 正在工作：可正常操作的工作项； - 作废：软删除后的工作项，可在回收站恢复； - 删除：彻底删除后的工作项，无法恢复。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项在当前状态的停留天数。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getStayDays() const;
    bool stayDaysIsSet() const;
    void unsetstayDays();
    void setStayDays(int32_t value);

    /// <summary>
    /// **参数解释：**  抄送人。 **取值范围：**  不涉及。
    /// </summary>

    std::vector<UserVO>& getAssignedCc();
    bool assignedCcIsSet() const;
    void unsetassignedCc();
    void setAssignedCc(const std::vector<UserVO>& value);

    /// <summary>
    /// **参数解释：**  工作项提交时间，指工作项进入工作流的时间，而不是创建时间。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSubmitTime() const;
    bool submitTimeIsSet() const;
    void unsetsubmitTime();
    void setSubmitTime(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项标签。 **取值范围：**  不涉及。
    /// </summary>

    std::vector<WorkItemLabelVO>& getWorkitem2label();
    bool workitem2labelIsSet() const;
    void unsetworkitem2label();
    void setWorkitem2label(const std::vector<WorkItemLabelVO>& value);

    /// <summary>
    /// **参数解释：**  退回原因。通常为退回RR/Bug时填写。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysReturnConclusion() const;
    bool sysReturnConclusionIsSet() const;
    void unsetsysReturnConclusion();
    void setSysReturnConclusion(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项完成时间。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCloseTime() const;
    bool closeTimeIsSet() const;
    void unsetcloseTime();
    void setCloseTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  工作项最新修改时间。 **取值范围：**  不涉及。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserVO& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getBreakStatus() const;
    bool breakStatusIsSet() const;
    void unsetbreakStatus();
    void setBreakStatus(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  工作项上一次流转状态的时间，可用于计算停留天数。unix时间戳，单位为毫秒。 **取值范围：**  不涉及。
    /// </summary>

    std::string getStatusModifiedDate() const;
    bool statusModifiedDateIsSet() const;
    void unsetstatusModifiedDate();
    void setStatusModifiedDate(const std::string& value);

    /// <summary>
    /// **参数解释：**  期望完成时间。Unix时间戳，单位为毫秒。 **取值范围：**  不涉及。
    /// </summary>

    std::string getExpectDeliveryTime() const;
    bool expectDeliveryTimeIsSet() const;
    void unsetexpectDeliveryTime();
    void setExpectDeliveryTime(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项的父工作项Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const UserVO& value);

    /// <summary>
    /// **参数解释：**  工作项所属租户的域。 **取值范围：**  不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AlmStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const AlmStatus& value);

    /// <summary>
    /// **参数解释：**  工作项所属租户Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PlanVO getPlanPi() const;
    bool planPiIsSet() const;
    void unsetplanPi();
    void setPlanPi(const PlanVO& value);

    /// <summary>
    /// **参数解释：**  关联工作项的关系字段。多值使用英文逗号分隔。 **取值范围：**  不涉及。
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项描述，最多支持50w字符。 **取值范围：**  不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getIsSuspended() const;
    bool isSuspendedIsSet() const;
    void unsetisSuspended();
    void setIsSuspended(const OptionVO& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getChangeStatus() const;
    bool changeStatusIsSet() const;
    void unsetchangeStatus();
    void setChangeStatus(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  工作项标题。 **取值范围：**  不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项实际工时。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSumWorkloadManDay() const;
    bool sumWorkloadManDayIsSet() const;
    void unsetsumWorkloadManDay();
    void setSumWorkloadManDay(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项关闭原因。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysCloseReason() const;
    bool sysCloseReasonIsSet() const;
    void unsetsysCloseReason();
    void setSysCloseReason(const std::string& value);

    /// <summary>
    /// **参数解释：**  重新提交原因，通常用于RR/Bug退回后重新提交。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysResubmitReason() const;
    bool sysResubmitReasonIsSet() const;
    void unsetsysResubmitReason();
    void setSysResubmitReason(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项计划完成时间。 **取值范围：**  不涉及。
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// **参数解释：**  RR的子IR的id。多值使用英文逗号分隔。 **取值范围：**  不涉及。
    /// </summary>

    std::string getRr2ir() const;
    bool rr2irIsSet() const;
    void unsetrr2ir();
    void setRr2ir(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项类型层级id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCategoryLayerId() const;
    bool categoryLayerIdIsSet() const;
    void unsetcategoryLayerId();
    void setCategoryLayerId(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项提交人。 **取值范围：**  不涉及。
    /// </summary>

    std::vector<UserVO>& getSubmittedBy();
    bool submittedByIsSet() const;
    void unsetsubmittedBy();
    void setSubmittedBy(const std::vector<UserVO>& value);

    /// <summary>
    /// **参数解释：**  RR的子US的id，多值使用英文逗号分隔。 **取值范围：**  不涉及。
    /// </summary>

    std::string getRr2us() const;
    bool rr2usIsSet() const;
    void unsetrr2us();
    void setRr2us(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项无需开发原因。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysNoDevelopReason() const;
    bool sysNoDevelopReasonIsSet() const;
    void unsetsysNoDevelopReason();
    void setSysNoDevelopReason(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PlanVO getPlanIteration() const;
    bool planIterationIsSet() const;
    void unsetplanIteration();
    void setPlanIteration(const PlanVO& value);

    /// <summary>
    /// **参数解释：**  退回原因。通常用于RR/bug退回。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysReturnReason() const;
    bool sysReturnReasonIsSet() const;
    void unsetsysReturnReason();
    void setSysReturnReason(const std::string& value);

    /// <summary>
    /// **参数解释：**  是否级联删除标记。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCascadeDelete() const;
    bool cascadeDeleteIsSet() const;
    void unsetcascadeDelete();
    void setCascadeDelete(const std::string& value);

    /// <summary>
    /// **参数解释：**  承接人。通常用于RR。 **取值范围：**  不涉及。
    /// </summary>

    std::vector<UserVO>& getRecipient();
    bool recipientIsSet() const;
    void unsetrecipient();
    void setRecipient(const std::vector<UserVO>& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const UserVO& value);

    /// <summary>
    /// **参数解释：**  工作项创建时间。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项类型。 **取值范围：**  - 系统设备类项目：RR/SF/IR/SR/AR/Task/Bug。 - 独立软件类项目：RR/SF/IR/US/Task/Bug。 - 云服务类项目：RR/Epic/FE/US/Task/Bug。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释：**  研发需求协同需求状态。 **取值范围：**  不涉及。
    /// </summary>

    std::vector<std::string>& getCollaborativeStatus();
    bool collaborativeStatusIsSet() const;
    void unsetcollaborativeStatus();
    void setCollaborativeStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    DomainVO getProject() const;
    bool projectIsSet() const;
    void unsetproject();
    void setProject(const DomainVO& value);

    /// <summary>
    /// **参数解释：**  子工作项列表。 **取值范围：**  不涉及。
    /// </summary>

    std::map<std::string, IssueVO>& getChildIssues();
    bool childIssuesIsSet() const;
    void unsetchildIssues();
    void setChildIssues(const std::map<std::string, IssueVO>& value);

    /// <summary>
    /// **参数解释：**  激活次数。Bug激活时自动赋值。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getActivateTimes() const;
    bool activateTimesIsSet() const;
    void unsetactivateTimes();
    void setActivateTimes(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const OptionVO& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getBusinessDomain() const;
    bool businessDomainIsSet() const;
    void unsetbusinessDomain();
    void setBusinessDomain(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  子工作项Id，多值使用英文逗号分隔。 **取值范围：**  不涉及。
    /// </summary>

    std::string getChildren() const;
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::string& value);

    /// <summary>
    /// **参数解释：**  协同需求的状态变化历史记录，内容为Json字符串。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCollaborativeHistory() const;
    bool collaborativeHistoryIsSet() const;
    void unsetcollaborativeHistory();
    void setCollaborativeHistory(const std::string& value);

    /// <summary>
    /// **参数解释：**  协同需求中的记录Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getCollaboratives() const;
    bool collaborativesIsSet() const;
    void unsetcollaboratives();
    void setCollaboratives(const std::string& value);

    /// <summary>
    /// **参数解释：**  卷积实际工时。父工作项中将子工作项/协同工作项的实际工时卷积得到。 **取值范围：**  不涉及。
    /// </summary>

    std::string getConvolutionActualHours() const;
    bool convolutionActualHoursIsSet() const;
    void unsetconvolutionActualHours();
    void setConvolutionActualHours(const std::string& value);

    /// <summary>
    /// **参数解释：**  卷积计划工时。父工作项中将子工作项/协同工作项的计划工时卷积得到。 **取值范围：**  不涉及。
    /// </summary>

    std::string getConvolutionPlanHours() const;
    bool convolutionPlanHoursIsSet() const;
    void unsetconvolutionPlanHours();
    void setConvolutionPlanHours(const std::string& value);

    /// <summary>
    /// **参数解释：**  开发责任人。通常用于“开发”状态节点责任人。 **取值范围：**  不涉及。
    /// </summary>

    std::string getDevelopOwner() const;
    bool developOwnerIsSet() const;
    void unsetdevelopOwner();
    void setDevelopOwner(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getDoneRatio() const;
    bool doneRatioIsSet() const;
    void unsetdoneRatio();
    void setDoneRatio(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  期望修复时间。 **取值范围：**  不涉及。
    /// </summary>

    std::string getExpectedRepairDate() const;
    bool expectedRepairDateIsSet() const;
    void unsetexpectedRepairDate();
    void setExpectedRepairDate(const std::string& value);

    /// <summary>
    /// **参数解释：**  SF的子IR的id。多值使用英文逗号分隔。 **取值范围：**  不涉及。
    /// </summary>

    std::string getFeature2ir() const;
    bool feature2irIsSet() const;
    void unsetfeature2ir();
    void setFeature2ir(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getFeatureSet() const;
    bool featureSetIsSet() const;
    void unsetfeatureSet();
    void setFeatureSet(const OptionVO& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getFoundEnv() const;
    bool foundEnvIsSet() const;
    void unsetfoundEnv();
    void setFoundEnv(const OptionVO& value);

    /// <summary>
    /// 
    /// </summary>

    PlanVO getFoundIteration() const;
    bool foundIterationIsSet() const;
    void unsetfoundIteration();
    void setFoundIteration(const PlanVO& value);

    /// <summary>
    /// 
    /// </summary>

    PlanVO getFoundPi() const;
    bool foundPiIsSet() const;
    void unsetfoundPi();
    void setFoundPi(const PlanVO& value);

    /// <summary>
    /// **参数解释：**  功能场景。 **取值范围：**  不涉及。
    /// </summary>

    std::string getFunctionScene() const;
    bool functionSceneIsSet() const;
    void unsetfunctionScene();
    void setFunctionScene(const std::string& value);

    /// <summary>
    /// **参数解释：**  IR关联的SF的Id，一个IR仅能关联一个SF。 **取值范围：**  不涉及。
    /// </summary>

    std::string getIr2feature() const;
    bool ir2featureIsSet() const;
    void unsetir2feature();
    void setIr2feature(const std::string& value);

    /// <summary>
    /// **参数解释：**  IR关联父RR的Id，多值使用英文逗号分隔。 **取值范围：**  不涉及。
    /// </summary>

    std::string getIr2rr() const;
    bool ir2rrIsSet() const;
    void unsetir2rr();
    void setIr2rr(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项关联的决策意见Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getIssueOpinionId() const;
    bool issueOpinionIdIsSet() const;
    void unsetissueOpinionId();
    void setIssueOpinionId(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项关联的评审意见Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getIssueReviewId() const;
    bool issueReviewIdIsSet() const;
    void unsetissueReviewId();
    void setIssueReviewId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getModule() const;
    bool moduleIsSet() const;
    void unsetmodule();
    void setModule(const OptionVO& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getNeedBreak() const;
    bool needBreakIsSet() const;
    void unsetneedBreak();
    void setNeedBreak(const OptionVO& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getNeedDevelop() const;
    bool needDevelopIsSet() const;
    void unsetneedDevelop();
    void setNeedDevelop(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  无需分解原因。 **取值范围：**  不涉及。
    /// </summary>

    std::string getNoBreakReason() const;
    bool noBreakReasonIsSet() const;
    void unsetnoBreakReason();
    void setNoBreakReason(const std::string& value);

    /// <summary>
    /// **参数解释：**  无需开发原因。 **取值范围：**  不涉及。
    /// </summary>

    std::string getNoDevelopReason() const;
    bool noDevelopReasonIsSet() const;
    void unsetnoDevelopReason();
    void setNoDevelopReason(const std::string& value);

    /// <summary>
    /// **参数解释：**  优先级顺序。 **取值范围：**  1~100。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// **参数解释：**  计划开发结束时间。通常用于“开发”状态节点，Unix时间戳，单位为毫秒。 **取值范围：**  不涉及。
    /// </summary>

    std::string getPlanDevEndDate() const;
    bool planDevEndDateIsSet() const;
    void unsetplanDevEndDate();
    void setPlanDevEndDate(const std::string& value);

    /// <summary>
    /// **参数解释：**  计划处理中结束时间。通常用于“处理中”状态节点，Unix时间戳，单位为毫秒。 **取值范围：**  不涉及。
    /// </summary>

    std::string getPlanProcessingEndDate() const;
    bool planProcessingEndDateIsSet() const;
    void unsetplanProcessingEndDate();
    void setPlanProcessingEndDate(const std::string& value);

    /// <summary>
    /// **参数解释：**  计划研发结束时间。通常用于“研发”状态节点，Unix时间戳，单位为毫秒。 **取值范围：**  不涉及。
    /// </summary>

    std::string getPlanResearchanddevelopEndDate() const;
    bool planResearchanddevelopEndDateIsSet() const;
    void unsetplanResearchanddevelopEndDate();
    void setPlanResearchanddevelopEndDate(const std::string& value);

    /// <summary>
    /// **参数解释：**  计划测试结束时间。通常用于“测试”状态节点，Unix时间戳，单位为毫秒。 **取值范围：**  不涉及。
    /// </summary>

    std::string getPlanTestEndDate() const;
    bool planTestEndDateIsSet() const;
    void unsetplanTestEndDate();
    void setPlanTestEndDate(const std::string& value);

    /// <summary>
    /// **参数解释：**  标识工作项在列表中初始排序位置。 **取值范围：**  不涉及。
    /// </summary>

    std::string getPositionFloat() const;
    bool positionFloatIsSet() const;
    void unsetpositionFloat();
    void setPositionFloat(const std::string& value);

    /// <summary>
    /// **参数解释：**  处理中责任人。通常用于“处理中”状态节点。 **取值范围：**  不涉及。
    /// </summary>

    std::string getProcessingOwner() const;
    bool processingOwnerIsSet() const;
    void unsetprocessingOwner();
    void setProcessingOwner(const std::string& value);

    /// <summary>
    /// **参数解释：**  分析原因。 **取值范围：**  不涉及。
    /// </summary>

    std::string getReasonAnalysis() const;
    bool reasonAnalysisIsSet() const;
    void unsetreasonAnalysis();
    void setReasonAnalysis(const std::string& value);

    /// <summary>
    /// **参数解释：**  回归不通过次数。缺陷测试不通过时自动赋值。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getRegressionFailureNumber() const;
    bool regressionFailureNumberIsSet() const;
    void unsetregressionFailureNumber();
    void setRegressionFailureNumber(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getRelatedNetworkSecurity() const;
    bool relatedNetworkSecurityIsSet() const;
    void unsetrelatedNetworkSecurity();
    void setRelatedNetworkSecurity(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  修复方案。常用于修复缺陷时。 **取值范围：**  不涉及。
    /// </summary>

    std::string getRepairSolution() const;
    bool repairSolutionIsSet() const;
    void unsetrepairSolution();
    void setRepairSolution(const std::string& value);

    /// <summary>
    /// **参数解释：**  研发责任人。通常用于“研发”状态节点。 **取值范围：**  不涉及。
    /// </summary>

    std::string getResearchanddevelopOwner() const;
    bool researchanddevelopOwnerIsSet() const;
    void unsetresearchanddevelopOwner();
    void setResearchanddevelopOwner(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  严重程度。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysActivationReason() const;
    bool sysActivationReasonIsSet() const;
    void unsetsysActivationReason();
    void setSysActivationReason(const std::string& value);

    /// <summary>
    /// **参数解释：**  无需修复原因。通常用于在缺陷无需修复时。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSysNoRepairReason() const;
    bool sysNoRepairReasonIsSet() const;
    void unsetsysNoRepairReason();
    void setSysNoRepairReason(const std::string& value);

    /// <summary>
    /// **参数解释：**  测试不通过次数。 **取值范围：**  不涉及。
    /// </summary>

    int32_t getTestFailuresTimes() const;
    bool testFailuresTimesIsSet() const;
    void unsettestFailuresTimes();
    void setTestFailuresTimes(int32_t value);

    /// <summary>
    /// **参数解释：**  测试责任人。通常用于“测试”状态节点。 **取值范围：**  不涉及。
    /// </summary>

    std::string getTestOwner() const;
    bool testOwnerIsSet() const;
    void unsettestOwner();
    void setTestOwner(const std::string& value);

    /// <summary>
    /// **参数解释：**  测试报告。 **取值范围：**  不涉及。
    /// </summary>

    std::string getTestReport() const;
    bool testReportIsSet() const;
    void unsettestReport();
    void setTestReport(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OptionVO getValFeature() const;
    bool valFeatureIsSet() const;
    void unsetvalFeature();
    void setValFeature(const OptionVO& value);

    /// <summary>
    /// **参数解释：**  工作项关联的甘特图Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getWorkitem2ganttchart() const;
    bool workitem2ganttchartIsSet() const;
    void unsetworkitem2ganttchart();
    void setWorkitem2ganttchart(const std::string& value);

    /// <summary>
    /// **参数解释：**  工作项关联的思维导图Id。 **取值范围：**  不涉及。
    /// </summary>

    std::string getWorkitem2mindmap() const;
    bool workitem2mindmapIsSet() const;
    void unsetworkitem2mindmap();
    void setWorkitem2mindmap(const std::string& value);


protected:
    std::string sysAnalysisConclusion_;
    bool sysAnalysisConclusionIsSet_;
    std::string sysRemark_;
    bool sysRemarkIsSet_;
    OptionVO promised_;
    bool promisedIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string belongInside_;
    bool belongInsideIsSet_;
    DomainVO srcDomain_;
    bool srcDomainIsSet_;
    DomainVO domainId_;
    bool domainIdIsSet_;
    std::string sendFrom_;
    bool sendFromIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string sendTo_;
    bool sendToIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string workloadManDay_;
    bool workloadManDayIsSet_;
    std::string sysCheckConclusion_;
    bool sysCheckConclusionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string state_;
    bool stateIsSet_;
    int32_t stayDays_;
    bool stayDaysIsSet_;
    std::vector<UserVO> assignedCc_;
    bool assignedCcIsSet_;
    std::string submitTime_;
    bool submitTimeIsSet_;
    std::vector<WorkItemLabelVO> workitem2label_;
    bool workitem2labelIsSet_;
    std::string sysReturnConclusion_;
    bool sysReturnConclusionIsSet_;
    std::string closeTime_;
    bool closeTimeIsSet_;
    OptionVO priority_;
    bool priorityIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    UserVO createdBy_;
    bool createdByIsSet_;
    OptionVO breakStatus_;
    bool breakStatusIsSet_;
    std::string statusModifiedDate_;
    bool statusModifiedDateIsSet_;
    std::string expectDeliveryTime_;
    bool expectDeliveryTimeIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    UserVO assignee_;
    bool assigneeIsSet_;
    std::string region_;
    bool regionIsSet_;
    AlmStatus status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    PlanVO planPi_;
    bool planPiIsSet_;
    std::string link_;
    bool linkIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    OptionVO isSuspended_;
    bool isSuspendedIsSet_;
    OptionVO changeStatus_;
    bool changeStatusIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string sumWorkloadManDay_;
    bool sumWorkloadManDayIsSet_;
    std::string sysCloseReason_;
    bool sysCloseReasonIsSet_;
    std::string sysResubmitReason_;
    bool sysResubmitReasonIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    std::string rr2ir_;
    bool rr2irIsSet_;
    std::string categoryLayerId_;
    bool categoryLayerIdIsSet_;
    std::vector<UserVO> submittedBy_;
    bool submittedByIsSet_;
    std::string rr2us_;
    bool rr2usIsSet_;
    std::string sysNoDevelopReason_;
    bool sysNoDevelopReasonIsSet_;
    PlanVO planIteration_;
    bool planIterationIsSet_;
    std::string sysReturnReason_;
    bool sysReturnReasonIsSet_;
    std::string cascadeDelete_;
    bool cascadeDeleteIsSet_;
    std::vector<UserVO> recipient_;
    bool recipientIsSet_;
    UserVO modifiedBy_;
    bool modifiedByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::vector<std::string> collaborativeStatus_;
    bool collaborativeStatusIsSet_;
    DomainVO project_;
    bool projectIsSet_;
    std::map<std::string, IssueVO>* childIssues_;
    bool childIssuesIsSet_;
    int32_t activateTimes_;
    bool activateTimesIsSet_;
    OptionVO baseline_;
    bool baselineIsSet_;
    OptionVO businessDomain_;
    bool businessDomainIsSet_;
    std::string children_;
    bool childrenIsSet_;
    std::string collaborativeHistory_;
    bool collaborativeHistoryIsSet_;
    std::string collaboratives_;
    bool collaborativesIsSet_;
    std::string convolutionActualHours_;
    bool convolutionActualHoursIsSet_;
    std::string convolutionPlanHours_;
    bool convolutionPlanHoursIsSet_;
    std::string developOwner_;
    bool developOwnerIsSet_;
    OptionVO doneRatio_;
    bool doneRatioIsSet_;
    std::string expectedRepairDate_;
    bool expectedRepairDateIsSet_;
    std::string feature2ir_;
    bool feature2irIsSet_;
    OptionVO featureSet_;
    bool featureSetIsSet_;
    OptionVO foundEnv_;
    bool foundEnvIsSet_;
    PlanVO foundIteration_;
    bool foundIterationIsSet_;
    PlanVO foundPi_;
    bool foundPiIsSet_;
    std::string functionScene_;
    bool functionSceneIsSet_;
    std::string ir2feature_;
    bool ir2featureIsSet_;
    std::string ir2rr_;
    bool ir2rrIsSet_;
    std::string issueOpinionId_;
    bool issueOpinionIdIsSet_;
    std::string issueReviewId_;
    bool issueReviewIdIsSet_;
    OptionVO module_;
    bool moduleIsSet_;
    OptionVO needBreak_;
    bool needBreakIsSet_;
    OptionVO needDevelop_;
    bool needDevelopIsSet_;
    std::string noBreakReason_;
    bool noBreakReasonIsSet_;
    std::string noDevelopReason_;
    bool noDevelopReasonIsSet_;
    std::string order_;
    bool orderIsSet_;
    std::string planDevEndDate_;
    bool planDevEndDateIsSet_;
    std::string planProcessingEndDate_;
    bool planProcessingEndDateIsSet_;
    std::string planResearchanddevelopEndDate_;
    bool planResearchanddevelopEndDateIsSet_;
    std::string planTestEndDate_;
    bool planTestEndDateIsSet_;
    std::string positionFloat_;
    bool positionFloatIsSet_;
    std::string processingOwner_;
    bool processingOwnerIsSet_;
    std::string reasonAnalysis_;
    bool reasonAnalysisIsSet_;
    int32_t regressionFailureNumber_;
    bool regressionFailureNumberIsSet_;
    OptionVO relatedNetworkSecurity_;
    bool relatedNetworkSecurityIsSet_;
    std::string repairSolution_;
    bool repairSolutionIsSet_;
    std::string researchanddevelopOwner_;
    bool researchanddevelopOwnerIsSet_;
    OptionVO severity_;
    bool severityIsSet_;
    std::string sysActivationReason_;
    bool sysActivationReasonIsSet_;
    std::string sysNoRepairReason_;
    bool sysNoRepairReasonIsSet_;
    int32_t testFailuresTimes_;
    bool testFailuresTimesIsSet_;
    std::string testOwner_;
    bool testOwnerIsSet_;
    std::string testReport_;
    bool testReportIsSet_;
    OptionVO valFeature_;
    bool valFeatureIsSet_;
    std::string workitem2ganttchart_;
    bool workitem2ganttchartIsSet_;
    std::string workitem2mindmap_;
    bool workitem2mindmapIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueVO_H_
