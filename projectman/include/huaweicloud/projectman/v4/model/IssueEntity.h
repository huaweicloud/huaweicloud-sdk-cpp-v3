
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
/// 工作项对象
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
    /// 需要更新的工作项ID，可通过查询树状工作项接口获取，响应消息体中的id字段的值就是工作项ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 工作项标题，可通过查询树状工作项接口获取，响应消息体中的title字段的值就是工作项标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 工作项描述字段，可通过查询树状工作项接口获取，响应消息体中的description字段的值就是工作项描述字段。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 工作项大分类定义。工作项创建、编辑无此字段，仅作展示用，可通过查询树状工作项接口获取，响应消息体中的type字段的值就是工作项大分类定义。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 工作项编号，可通过查询树状工作项接口获取，响应消息体中的number字段的值就是工作项编号。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 工作项类型，可通过查询树状工作项接口获取，响应消息体中的category字段的值就是工作项类型。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 工作项类型层级关系ID，此参数影响工作项的层级显示。通过获取模型树配置信息获取，根据参数中的category在响应消息体中category_layer_config中找到对应的category_code，和category_code同级的id就是工作项类型层级关系ID。
    /// </summary>

    std::string getCategoryLayerId() const;
    bool categoryLayerIdIsSet() const;
    void unsetcategoryLayerId();
    void setCategoryLayerId(const std::string& value);

    /// <summary>
    /// 父工作项ID，可通过查询树状工作项接口获取，响应消息体中的parent_id字段的值就是父工作项ID。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 项目的32位uuid，项目唯一标识，通过查询IPD项目列表接口获取，响应消息体中的project_id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项状态code。可通过查询工作项状态接口获取，响应消息体中的code字段的值就是工作项工作项状态code。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 工作项的生命周期，可选值为“正在工作”，“作废”，可通过查询树状工作项接口获取，响应消息体中的state字段的值就是工作项的生命周期。
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
    /// 工作项抄送人，支持多个抄送人。数组元素为UserEntity对象。
    /// </summary>

    std::vector<UserEntity>& getAssignedCc();
    bool assignedCcIsSet() const;
    void unsetassignedCc();
    void setAssignedCc(const std::vector<UserEntity>& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserEntity& value);

    /// <summary>
    /// 工作项创建时间，unix时间戳，单位：毫秒。
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
    /// 工作项最近更新时间，unix时间戳，单位：毫秒。
    /// </summary>

    std::string getModifiedTime() const;
    bool modifiedTimeIsSet() const;
    void unsetmodifiedTime();
    void setModifiedTime(const std::string& value);

    /// <summary>
    /// 工作项计划结束日期，unix时间戳，单位：毫秒。
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// 工作项关闭时间，unix时间戳，单位：毫秒。
    /// </summary>

    std::string getCloseTime() const;
    bool closeTimeIsSet() const;
    void unsetcloseTime();
    void setCloseTime(const std::string& value);

    /// <summary>
    /// 工作项计划工时。
    /// </summary>

    std::string getWorkload() const;
    bool workloadIsSet() const;
    void unsetworkload();
    void setWorkload(const std::string& value);

    /// <summary>
    /// 工作项实际工时。
    /// </summary>

    std::string getWorkloadSum() const;
    bool workloadSumIsSet() const;
    void unsetworkloadSum();
    void setWorkloadSum(const std::string& value);

    /// <summary>
    /// 工作项所属租户ID，可通过查询树状工作项接口获取，响应消息体中的tenant_id字段的值就是工作项所属租户ID。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 工作项关联项ID。
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);

    /// <summary>
    /// 工作项是否已挂起。
    /// </summary>

    bool isSuspended() const;
    bool suspendedIsSet() const;
    void unsetsuspended();
    void setSuspended(bool value);

    /// <summary>
    /// 工作项状态改变时间，可用于计算工作项在当前状态停留天数，unix时间戳，单位：毫秒。
    /// </summary>

    std::string getStatusModifiedTime() const;
    bool statusModifiedTimeIsSet() const;
    void unsetstatusModifiedTime();
    void setStatusModifiedTime(const std::string& value);

    /// <summary>
    /// 工作项标签。数组元素为LabelEntity对象。
    /// </summary>

    std::vector<LabelEntity>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<LabelEntity>& value);

    /// <summary>
    /// 工作项自定义字段映射，用户添加的系统字段也在此列，格式为{\&quot;code\&quot;:\&quot;字段code\&quot;,\&quot;value\&quot;:\&quot;字段值\&quot;}。数组元素为FieldCodeValuePair对象。
    /// </summary>

    std::vector<FieldCodeValuePair>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<FieldCodeValuePair>& value);

    /// <summary>
    /// 工作项的子工作项集合。数组元素为IssueEntity对象。
    /// </summary>

    std::vector<IssueEntity>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<IssueEntity>& value);

    /// <summary>
    /// 子工作项的路径。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// IR和SF的关联字段。
    /// </summary>

    std::string getIr2feature() const;
    bool ir2featureIsSet() const;
    void unsetir2feature();
    void setIr2feature(const std::string& value);

    /// <summary>
    /// 工作项是否需要分解。
    /// </summary>

    std::string getNeedBreak() const;
    bool needBreakIsSet() const;
    void unsetneedBreak();
    void setNeedBreak(const std::string& value);

    /// <summary>
    /// 分解状态。
    /// </summary>

    std::string getBreakStatus() const;
    bool breakStatusIsSet() const;
    void unsetbreakStatus();
    void setBreakStatus(const std::string& value);

    /// <summary>
    /// 工作项基线状态。
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);

    /// <summary>
    /// 工作项优先级，部分工作项有此字段。
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);

    /// <summary>
    /// 是否涉及网络安全。
    /// </summary>

    std::string getRelatedNetworkSecurity() const;
    bool relatedNetworkSecurityIsSet() const;
    void unsetrelatedNetworkSecurity();
    void setRelatedNetworkSecurity(const std::string& value);

    /// <summary>
    /// 研发需求协同信息，协同任务ID，可通过查询树状工作项接口获取，响应消息体中的collaboratives字段的值就是研发需求协同信息，协同任务ID。
    /// </summary>

    std::string getCollaboratives() const;
    bool collaborativesIsSet() const;
    void unsetcollaboratives();
    void setCollaboratives(const std::string& value);

    /// <summary>
    /// 领域字段。
    /// </summary>

    std::string getBusinessDomain() const;
    bool businessDomainIsSet() const;
    void unsetbusinessDomain();
    void setBusinessDomain(const std::string& value);

    /// <summary>
    /// 工作项发布计划ID。通过发布/迭代计划列表查询接口查询计划列表，返回参数中PlanVO里面的category&#x3D;PI的对象的id字段就是迭代计划的ID。
    /// </summary>

    std::string getPlanPi() const;
    bool planPiIsSet() const;
    void unsetplanPi();
    void setPlanPi(const std::string& value);

    /// <summary>
    /// 工作项完成的迭代计划ID，在Bug中为修复迭代计划ID。通过发布/迭代计划列表查询接口查询计划列表，返回参数中PlanVO里面的category&#x3D;Iteration的对象的id字段就是迭代计划的ID。
    /// </summary>

    std::string getPlanIteration() const;
    bool planIterationIsSet() const;
    void unsetplanIteration();
    void setPlanIteration(const std::string& value);

    /// <summary>
    /// 工作项变更状态。
    /// </summary>

    std::string getChangeStatus() const;
    bool changeStatusIsSet() const;
    void unsetchangeStatus();
    void setChangeStatus(const std::string& value);

    /// <summary>
    /// 无需分解原因。
    /// </summary>

    std::string getNoBreakReason() const;
    bool noBreakReasonIsSet() const;
    void unsetnoBreakReason();
    void setNoBreakReason(const std::string& value);

    /// <summary>
    /// 工作项提出人。数组元素为UserEntity对象。
    /// </summary>

    std::vector<UserEntity>& getSubmittedBy();
    bool submittedByIsSet() const;
    void unsetsubmittedBy();
    void setSubmittedBy(const std::vector<UserEntity>& value);

    /// <summary>
    /// IR关联的RR ID，可以通过查询工作项列表或者查询树状工作项接口获取，响应消息体中的id字段的值就是工作项ID。
    /// </summary>

    std::string getIr2rr() const;
    bool ir2rrIsSet() const;
    void unsetir2rr();
    void setIr2rr(const std::string& value);

    /// <summary>
    /// 特性集ID，可以通过查询特性集接口获取，响应消息体中的id字段的值就是特性集ID。
    /// </summary>

    std::string getFeatureSet() const;
    bool featureSetIsSet() const;
    void unsetfeatureSet();
    void setFeatureSet(const std::string& value);

    /// <summary>
    /// 期望修复时间。预设字段中，仅Bug有此字段，unix时间戳，单位：毫秒。
    /// </summary>

    std::string getExpectedRepairDate() const;
    bool expectedRepairDateIsSet() const;
    void unsetexpectedRepairDate();
    void setExpectedRepairDate(const std::string& value);

    /// <summary>
    /// 缺陷发现发布计划ID，预设字段中，仅Bug有此字段。通过发布/迭代计划列表查询接口查询计划列表，返回参数中PlanVO里面的category&#x3D;PI的对象的id字段就是迭代计划的ID。
    /// </summary>

    std::string getFoundPi() const;
    bool foundPiIsSet() const;
    void unsetfoundPi();
    void setFoundPi(const std::string& value);

    /// <summary>
    /// 缺陷发现迭代计划ID，预设字段中，仅Bug有此字段。通过发布/迭代计划列表查询接口查询计划列表，返回参数中PlanVO里面的category&#x3D;Iteration的对象的id字段就是迭代计划的ID。
    /// </summary>

    std::string getFoundIteration() const;
    bool foundIterationIsSet() const;
    void unsetfoundIteration();
    void setFoundIteration(const std::string& value);

    /// <summary>
    /// 分析原因。
    /// </summary>

    std::string getReasonAnalysis() const;
    bool reasonAnalysisIsSet() const;
    void unsetreasonAnalysis();
    void setReasonAnalysis(const std::string& value);

    /// <summary>
    /// 修复方案。预设字段中，仅Bug有此字段。
    /// </summary>

    std::string getRepairSolution() const;
    bool repairSolutionIsSet() const;
    void unsetrepairSolution();
    void setRepairSolution(const std::string& value);

    /// <summary>
    /// 测试报告。预设字段中，仅Bug有此字段。
    /// </summary>

    std::string getTestReport() const;
    bool testReportIsSet() const;
    void unsettestReport();
    void setTestReport(const std::string& value);

    /// <summary>
    /// 无需修复原因。预设字段中，仅Bug有此字段。
    /// </summary>

    std::string getSysNoRepairReason() const;
    bool sysNoRepairReasonIsSet() const;
    void unsetsysNoRepairReason();
    void setSysNoRepairReason(const std::string& value);

    /// <summary>
    /// 激活原因。预设字段中，仅Bug有此字段。
    /// </summary>

    std::string getSysActivationReason() const;
    bool sysActivationReasonIsSet() const;
    void unsetsysActivationReason();
    void setSysActivationReason(const std::string& value);

    /// <summary>
    /// 退回原因。预设字段中，仅Bug有此字段。
    /// </summary>

    std::string getSysReturnReason() const;
    bool sysReturnReasonIsSet() const;
    void unsetsysReturnReason();
    void setSysReturnReason(const std::string& value);

    /// <summary>
    /// 回归不通过次数。预设字段中，仅Bug有此字段。
    /// </summary>

    int32_t getTestFailuresTimes() const;
    bool testFailuresTimesIsSet() const;
    void unsettestFailuresTimes();
    void setTestFailuresTimes(int32_t value);

    /// <summary>
    /// 关闭类型。
    /// </summary>

    std::string getCloseType() const;
    bool closeTypeIsSet() const;
    void unsetcloseType();
    void setCloseType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getPlanOwner() const;
    bool planOwnerIsSet() const;
    void unsetplanOwner();
    void setPlanOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getDoingOwner() const;
    bool doingOwnerIsSet() const;
    void unsetdoingOwner();
    void setDoingOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getDeliveredOwner() const;
    bool deliveredOwnerIsSet() const;
    void unsetdeliveredOwner();
    void setDeliveredOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getCheckingOwner() const;
    bool checkingOwnerIsSet() const;
    void unsetcheckingOwner();
    void setCheckingOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getTestOwner() const;
    bool testOwnerIsSet() const;
    void unsettestOwner();
    void setTestOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getDevelopOwner() const;
    bool developOwnerIsSet() const;
    void unsetdevelopOwner();
    void setDevelopOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getProcessingOwner() const;
    bool processingOwnerIsSet() const;
    void unsetprocessingOwner();
    void setProcessingOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getFixedOwner() const;
    bool fixedOwnerIsSet() const;
    void unsetfixedOwner();
    void setFixedOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getResearchanddevelopOwner() const;
    bool researchanddevelopOwnerIsSet() const;
    void unsetresearchanddevelopOwner();
    void setResearchanddevelopOwner(const UserEntity& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getAnalyseOwner() const;
    bool analyseOwnerIsSet() const;
    void unsetanalyseOwner();
    void setAnalyseOwner(const UserEntity& value);

    /// <summary>
    /// 计划开始时间。工作项的计划启动日期，用于项目进度管理和排期。
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// 期望完成时间。工作项的预期交付日期，用于跟踪工作项是否按期完成。
    /// </summary>

    std::string getExpectDeliveryTime() const;
    bool expectDeliveryTimeIsSet() const;
    void unsetexpectDeliveryTime();
    void setExpectDeliveryTime(const std::string& value);

    /// <summary>
    /// 计划测试结束时间。Bug类型工作项的计划测试完成日期，用于跟踪Bug修复后的测试进度。
    /// </summary>

    std::string getPlanTestEndDate() const;
    bool planTestEndDateIsSet() const;
    void unsetplanTestEndDate();
    void setPlanTestEndDate(const std::string& value);

    /// <summary>
    /// 严重程度。Bug类型工作项的严重级别，用于评估Bug的影响范围和修复优先级。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// 是否承诺。RR（原始需求）类型工作项的承诺状态标识，用于标记需求是否已承诺交付。
    /// </summary>

    std::string getPromised() const;
    bool promisedIsSet() const;
    void unsetpromised();
    void setPromised(const std::string& value);

    /// <summary>
    /// 承接人。RR（原始需求）类型工作项的需求承接责任人，负责需求的分析和转化。
    /// </summary>

    std::vector<UserEntity>& getRecipient();
    bool recipientIsSet() const;
    void unsetrecipient();
    void setRecipient(const std::vector<UserEntity>& value);

    /// <summary>
    /// 无需研发原因。RR（原始需求）类型工作项不需要进行研发的原因说明。
    /// </summary>

    std::string getSysNoDevelopReason() const;
    bool sysNoDevelopReasonIsSet() const;
    void unsetsysNoDevelopReason();
    void setSysNoDevelopReason(const std::string& value);

    /// <summary>
    /// 价值特性。SF/FE类型工作项对应的业务价值特性描述，用于关联业务价值和技术实现。
    /// </summary>

    std::string getValFeature() const;
    bool valFeatureIsSet() const;
    void unsetvalFeature();
    void setValFeature(const std::string& value);

    /// <summary>
    /// 功能场景。SF/FE类型工作项的功能应用场景描述，用于说明特性的使用场景和用户故事。
    /// </summary>

    std::string getFunctionScene() const;
    bool functionSceneIsSet() const;
    void unsetfunctionScene();
    void setFunctionScene(const std::string& value);


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
    std::string categoryLayerId_;
    bool categoryLayerIdIsSet_;
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
    std::vector<UserEntity> assignedCc_;
    bool assignedCcIsSet_;
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
    std::string planIteration_;
    bool planIterationIsSet_;
    std::string changeStatus_;
    bool changeStatusIsSet_;
    std::string noBreakReason_;
    bool noBreakReasonIsSet_;
    std::vector<UserEntity> submittedBy_;
    bool submittedByIsSet_;
    std::string ir2rr_;
    bool ir2rrIsSet_;
    std::string featureSet_;
    bool featureSetIsSet_;
    std::string expectedRepairDate_;
    bool expectedRepairDateIsSet_;
    std::string foundPi_;
    bool foundPiIsSet_;
    std::string foundIteration_;
    bool foundIterationIsSet_;
    std::string reasonAnalysis_;
    bool reasonAnalysisIsSet_;
    std::string repairSolution_;
    bool repairSolutionIsSet_;
    std::string testReport_;
    bool testReportIsSet_;
    std::string sysNoRepairReason_;
    bool sysNoRepairReasonIsSet_;
    std::string sysActivationReason_;
    bool sysActivationReasonIsSet_;
    std::string sysReturnReason_;
    bool sysReturnReasonIsSet_;
    int32_t testFailuresTimes_;
    bool testFailuresTimesIsSet_;
    std::string closeType_;
    bool closeTypeIsSet_;
    UserEntity planOwner_;
    bool planOwnerIsSet_;
    UserEntity doingOwner_;
    bool doingOwnerIsSet_;
    UserEntity deliveredOwner_;
    bool deliveredOwnerIsSet_;
    UserEntity checkingOwner_;
    bool checkingOwnerIsSet_;
    UserEntity testOwner_;
    bool testOwnerIsSet_;
    UserEntity developOwner_;
    bool developOwnerIsSet_;
    UserEntity processingOwner_;
    bool processingOwnerIsSet_;
    UserEntity fixedOwner_;
    bool fixedOwnerIsSet_;
    UserEntity researchanddevelopOwner_;
    bool researchanddevelopOwnerIsSet_;
    UserEntity analyseOwner_;
    bool analyseOwnerIsSet_;
    std::string planStartDate_;
    bool planStartDateIsSet_;
    std::string expectDeliveryTime_;
    bool expectDeliveryTimeIsSet_;
    std::string planTestEndDate_;
    bool planTestEndDateIsSet_;
    std::string severity_;
    bool severityIsSet_;
    std::string promised_;
    bool promisedIsSet_;
    std::vector<UserEntity> recipient_;
    bool recipientIsSet_;
    std::string sysNoDevelopReason_;
    bool sysNoDevelopReasonIsSet_;
    std::string valFeature_;
    bool valFeatureIsSet_;
    std::string functionScene_;
    bool functionSceneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueEntity_H_
