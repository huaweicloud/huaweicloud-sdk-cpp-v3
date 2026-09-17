
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueUpdateAttribute_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueUpdateAttribute_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/LabelEntity.h>
#include <huaweicloud/projectman/v4/model/FieldCodeValuePair.h>
#include <huaweicloud/projectman/v4/model/UserUpdateAttribute.h>
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
/// 工作项更新对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueUpdateAttribute
    : public ModelBase
{
public:
    IssueUpdateAttribute();
    virtual ~IssueUpdateAttribute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueUpdateAttribute members

    /// <summary>
    /// **参数解释**： 工作项类型编码。编辑工作项时，此字段必填、值为当前工作项正确的工作项类型，但不会更新此字段。 **约束限制**： 不涉及。 **取值范围**： 支持多种工作项类型，使用英文逗号分隔。 - 系统设备类项目：RR、SF、IR、SR、AR、Task、Bug - 独立软件类项目：RR、SF、IR、US、Task、Bug - 云服务类项目：RR、Epic、FE、US、Task、Bug **默认取值**： 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项描述字段，可通过[查询树状工作项](ShowIpdIssueTree.xml)接口获取，响应消息体中的**description**字段的值就是工作项描述字段。 **约束限制**： 不涉及。 **取值范围**： 1~500000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 父工作项ID，可通过[查询树状工作项](ShowIpdIssueTree.xml)接口获取，响应消息体中的**parent_id**字段的值就是父工作项ID。 **约束限制**： 不涉及。 **取值范围**： 18~19个字符的数字字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项状态code。可通过[查询工作项状态](ListIssueStatues.xml)接口获取，响应消息体中的**code**字段的值就是工作项状态code。 **约束限制**： 不涉及。 **取值范围**： 2~32个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const UserUpdateAttribute& value);

    /// <summary>
    /// **参数解释**： 工作项抄送人，支持多个抄送人。数组元素为UserUpdateAttribute对象。 **约束限制**： 同一工作项最多支持50个抄送人。
    /// </summary>

    std::vector<UserUpdateAttribute>& getAssignedCc();
    bool assignedCcIsSet() const;
    void unsetassignedCc();
    void setAssignedCc(const std::vector<UserUpdateAttribute>& value);

    /// <summary>
    /// **参数解释**： 工作项计划结束日期，unix时间戳，单位：毫秒。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项计划工时。 **约束限制**： 保留一位小数。 **取值范围**： 0~999999999.9。 **默认取值**： 不涉及。
    /// </summary>

    std::string getWorkload() const;
    bool workloadIsSet() const;
    void unsetworkload();
    void setWorkload(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项关联项ID。 **约束限制**： 多个关联项用英文逗号分隔，同一工作项最多支持50个关联项。 **取值范围**： 0~2048个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项标签。数组元素为LabelEntity对象。 **约束限制**： 不涉及。 **取值范围**： 0~50个元素，每个元素为LabelEntity对象。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<LabelEntity>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<LabelEntity>& value);

    /// <summary>
    /// **参数解释**： 工作项自定义字段映射，用户添加的系统字段也在此列，格式为{\&quot;code\&quot;:\&quot;字段code\&quot;,\&quot;value\&quot;:\&quot;字段值\&quot;}。数组元素为FieldCodeValuePair对象。 **约束限制**： 不涉及。 **取值范围**： 0~200个元素，每个元素为FieldCodeValuePair对象。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<FieldCodeValuePair>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<FieldCodeValuePair>& value);

    /// <summary>
    /// **参数解释**： IR和SF的关联字段。 **约束限制**： IR可以填写该字段。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getIr2feature() const;
    bool ir2featureIsSet() const;
    void unsetir2feature();
    void setIr2feature(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项是否需要分解。 **约束限制**： 仅可以分解的工作项类型有此字段。 **取值范围**： - yes：需要分解 - no：不需要分解 **默认取值**： 不涉及。
    /// </summary>

    std::string getNeedBreak() const;
    bool needBreakIsSet() const;
    void unsetneedBreak();
    void setNeedBreak(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项基线状态。 **约束限制**： 不涉及。 **取值范围**： - null：未基线 - baselined：已基线 - baseline-reviewing：基线评审中 **默认取值**： 不涉及。
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项优先级，部分工作项有此字段。 **约束限制**： 不涉及。 **取值范围**： - 低：低优先级。 - 中：中优先级。 - 高：高优先级。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否涉及网络安全。 **约束限制**： 预设字段中，仅研发需求类型的工作项有此字段。 **取值范围**： - yes：涉及网络安全。 - no：不涉及网络安全。 **默认取值**： 不涉及。
    /// </summary>

    std::string getRelatedNetworkSecurity() const;
    bool relatedNetworkSecurityIsSet() const;
    void unsetrelatedNetworkSecurity();
    void setRelatedNetworkSecurity(const std::string& value);

    /// <summary>
    /// **参数解释**： 领域字段。 **约束限制**： 不涉及。 **取值范围**： - software - soft-hardware - hardware - 性能 - 功能 - 运维 - 运营 - 用户体验 - 隐私保护 - 合规 - 韧性(可靠性/可用性) - 韧性(危险检测与相应恢复) - 透明 - 无害 - 安全 - API - 成本 - 可维护性 - 其他DFX - 可用性 - others **默认取值**： 不涉及。
    /// </summary>

    std::string getBusinessDomain() const;
    bool businessDomainIsSet() const;
    void unsetbusinessDomain();
    void setBusinessDomain(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项发布计划ID。通过[发布/迭代计划列表查询](ListPlan.xml)接口查询计划列表，返回参数中PlanVO里面的category&#x3D;PI的对象的**id**字段就是迭代计划的ID。 **约束限制**： 不涉及。 **取值范围**： 18~19个字符的数字字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanPi() const;
    bool planPiIsSet() const;
    void unsetplanPi();
    void setPlanPi(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项完成的迭代计划ID，在Bug中为修复迭代计划ID。通过[发布/迭代计划列表查询](ListPlan.xml)接口查询计划列表，返回参数中PlanVO里面的category&#x3D;Iteration的对象的**id**字段就是迭代计划的ID。 **约束限制**： 18~19个字符的数字字符串。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanIteration() const;
    bool planIterationIsSet() const;
    void unsetplanIteration();
    void setPlanIteration(const std::string& value);

    /// <summary>
    /// **参数解释**： 无需分解原因。 **约束限制**： need_break字段值为“no”时有此字段。 **取值范围**： 0~512个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getNoBreakReason() const;
    bool noBreakReasonIsSet() const;
    void unsetnoBreakReason();
    void setNoBreakReason(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项提出人。数组元素为UserUpdateAttribute对象。 **约束限制**： 不涉及。
    /// </summary>

    std::vector<UserUpdateAttribute>& getSubmittedBy();
    bool submittedByIsSet() const;
    void unsetsubmittedBy();
    void setSubmittedBy(const std::vector<UserUpdateAttribute>& value);

    /// <summary>
    /// **参数解释**： IR关联的RR ID，可以通过[查询工作项列表](ListIpdProjectIssues.xml)或者[查询树状工作项](ShowIpdIssueTree.xml)接口获取，响应消息体中的**id**字段的值就是工作项ID。 **约束限制**： 多个关联项ID使用英文逗号分隔。 **取值范围**： 0~1024个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getIr2rr() const;
    bool ir2rrIsSet() const;
    void unsetir2rr();
    void setIr2rr(const std::string& value);

    /// <summary>
    /// **参数解释**： 特性集ID，可以通过[查询特性集](ShowBaselineSnapshots.xml)接口获取，响应消息体中的**id**字段的值就是特性集ID。 **约束限制**： 不涉及。 **取值范围**： 18~19个字符的数字字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getFeatureSet() const;
    bool featureSetIsSet() const;
    void unsetfeatureSet();
    void setFeatureSet(const std::string& value);

    /// <summary>
    /// **参数解释**： 期望修复时间。预设字段中，仅Bug有此字段，unix时间戳，单位：毫秒。 **约束限制**： 不涉及。 **取值范围**： 11~19个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getExpectedRepairDate() const;
    bool expectedRepairDateIsSet() const;
    void unsetexpectedRepairDate();
    void setExpectedRepairDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 缺陷发现发布计划ID，预设字段中，仅Bug有此字段。通过[发布/迭代计划列表查询](ListPlan.xml)接口查询计划列表，返回参数中PlanVO里面的category&#x3D;PI的对象的**id**字段就是迭代计划的ID。 **约束限制**： 不涉及。 **取值范围**： 18~19个字符的数字字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getFoundPi() const;
    bool foundPiIsSet() const;
    void unsetfoundPi();
    void setFoundPi(const std::string& value);

    /// <summary>
    /// **参数解释**： 缺陷发现迭代计划ID，预设字段中，仅Bug有此字段。通过[发布/迭代计划列表查询](ListPlan.xml)接口查询计划列表，返回参数中PlanVO里面的category&#x3D;Iteration的对象的**id**字段就是迭代计划的ID。 **约束限制**： 不涉及。 **取值范围**： 18~19个字符的数字字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getFoundIteration() const;
    bool foundIterationIsSet() const;
    void unsetfoundIteration();
    void setFoundIteration(const std::string& value);

    /// <summary>
    /// **参数解释**： 分析原因。 **约束限制**： 预设字段中，仅Bug有此字段。 **取值范围**： 0~50000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getReasonAnalysis() const;
    bool reasonAnalysisIsSet() const;
    void unsetreasonAnalysis();
    void setReasonAnalysis(const std::string& value);

    /// <summary>
    /// **参数解释**： 修复方案。预设字段中，仅Bug有此字段。 **约束限制**： 不涉及。 **取值范围**： 0~50000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getRepairSolution() const;
    bool repairSolutionIsSet() const;
    void unsetrepairSolution();
    void setRepairSolution(const std::string& value);

    /// <summary>
    /// **参数解释**： 测试报告。预设字段中，仅Bug有此字段。 **约束限制**： 不涉及。 **取值范围**： 0~50000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getTestReport() const;
    bool testReportIsSet() const;
    void unsettestReport();
    void setTestReport(const std::string& value);

    /// <summary>
    /// **参数解释**： 无需修复原因。预设字段中，仅Bug有此字段。 **约束限制**： 不涉及。 **取值范围**： 0~50000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getSysNoRepairReason() const;
    bool sysNoRepairReasonIsSet() const;
    void unsetsysNoRepairReason();
    void setSysNoRepairReason(const std::string& value);

    /// <summary>
    /// **参数解释**： 激活原因。预设字段中，仅Bug有此字段。 **约束限制**： 不涉及。 **取值范围**： 0~50000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getSysActivationReason() const;
    bool sysActivationReasonIsSet() const;
    void unsetsysActivationReason();
    void setSysActivationReason(const std::string& value);

    /// <summary>
    /// **参数解释**： 退回原因。预设字段中，仅Bug有此字段。 **约束限制**： 不涉及。 **取值范围**： 0~50000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getSysReturnReason() const;
    bool sysReturnReasonIsSet() const;
    void unsetsysReturnReason();
    void setSysReturnReason(const std::string& value);

    /// <summary>
    /// **参数解释**： 回归不通过次数。预设字段中，仅Bug有此字段。 **约束限制**： 不涉及。 **取值范围**： 0~999999。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getTestFailuresTimes() const;
    bool testFailuresTimesIsSet() const;
    void unsettestFailuresTimes();
    void setTestFailuresTimes(int32_t value);

    /// <summary>
    /// **参数解释**： 关闭类型。 **约束限制**： 不涉及。 **取值范围**： - problem_solved：问题解决关闭 - problem_to_requirement：问题转需求关闭 - duplicate_problem：重复问题关闭 - not_a_problem：非问题关闭 **默认取值**： 不涉及。
    /// </summary>

    std::string getCloseType() const;
    bool closeTypeIsSet() const;
    void unsetcloseType();
    void setCloseType(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级。低密级权限者不能访问高密级的工作项。可以通过[查询字段列表](ListIpdProjectFields.xml)接口获取，响应消息体中密级的**option**字段的值就是密级字段的可选值。 **约束限制**： 仅在涉密环境（SM）下存在此字段，非涉密环境下无此字段。涉密环境下必填。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getSecurityLevel() const;
    bool securityLevelIsSet() const;
    void unsetsecurityLevel();
    void setSecurityLevel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getPlanOwner() const;
    bool planOwnerIsSet() const;
    void unsetplanOwner();
    void setPlanOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getDoingOwner() const;
    bool doingOwnerIsSet() const;
    void unsetdoingOwner();
    void setDoingOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getDeliveredOwner() const;
    bool deliveredOwnerIsSet() const;
    void unsetdeliveredOwner();
    void setDeliveredOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getCheckingOwner() const;
    bool checkingOwnerIsSet() const;
    void unsetcheckingOwner();
    void setCheckingOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getTestOwner() const;
    bool testOwnerIsSet() const;
    void unsettestOwner();
    void setTestOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getDevelopOwner() const;
    bool developOwnerIsSet() const;
    void unsetdevelopOwner();
    void setDevelopOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getProcessingOwner() const;
    bool processingOwnerIsSet() const;
    void unsetprocessingOwner();
    void setProcessingOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getFixedOwner() const;
    bool fixedOwnerIsSet() const;
    void unsetfixedOwner();
    void setFixedOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getResearchanddevelopOwner() const;
    bool researchanddevelopOwnerIsSet() const;
    void unsetresearchanddevelopOwner();
    void setResearchanddevelopOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// 
    /// </summary>

    UserUpdateAttribute getAnalyseOwner() const;
    bool analyseOwnerIsSet() const;
    void unsetanalyseOwner();
    void setAnalyseOwner(const UserUpdateAttribute& value);

    /// <summary>
    /// **参数解释**： 计划开始时间。工作项的计划启动日期，用于项目进度管理和排期。 **约束限制**： 不涉及。 **取值范围**： 11~19个字符的时间戳字符串，单位为毫秒（ms）。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 期望完成时间。工作项的预期交付日期，用于跟踪工作项是否按期完成。 **约束限制**： 不涉及。 **取值范围**： 11~19个字符的时间戳字符串，单位为毫秒（ms）。 **默认取值**： 不涉及。
    /// </summary>

    std::string getExpectDeliveryTime() const;
    bool expectDeliveryTimeIsSet() const;
    void unsetexpectDeliveryTime();
    void setExpectDeliveryTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 计划测试结束时间。Bug类型工作项的计划测试完成日期，用于跟踪Bug修复后的测试进度。 **约束限制**： 仅对Bug类型工作项生效，非Bug类型忽略此字段。 **取值范围**： 11~19个字符的时间戳字符串，单位为毫秒（ms）。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanTestEndDate() const;
    bool planTestEndDateIsSet() const;
    void unsetplanTestEndDate();
    void setPlanTestEndDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 严重程度。Bug类型工作项的严重级别，用于评估Bug的影响范围和修复优先级。 **约束限制**： 仅对Bug类型工作项生效，非Bug类型忽略此字段。 **取值范围**： - 致命：系统崩溃、数据丢失等严重影响 - 严重：主要功能无法使用 - 一般：次要功能异常，有替代方案 - 提示：界面优化、建议性问题 **默认取值**： 不涉及。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否承诺。RR（原始需求）类型工作项的承诺状态标识，用于标记需求是否已承诺交付。 **约束限制**： 仅对RR类型工作项生效，非RR类型忽略此字段。 **取值范围**： - yes：已承诺 - no：未承诺 **默认取值**： 不涉及。
    /// </summary>

    std::string getPromised() const;
    bool promisedIsSet() const;
    void unsetpromised();
    void setPromised(const std::string& value);

    /// <summary>
    /// **参数解释**： 承接人。RR（原始需求）类型工作项的需求承接责任人，负责需求的分析和转化。 **约束限制**： 仅对RR类型工作项生效，非RR类型忽略此字段。
    /// </summary>

    std::vector<UserUpdateAttribute>& getRecipient();
    bool recipientIsSet() const;
    void unsetrecipient();
    void setRecipient(const std::vector<UserUpdateAttribute>& value);

    /// <summary>
    /// **参数解释**： 无需研发原因。RR（原始需求）类型工作项不需要进行研发的原因说明。 **约束限制**： 仅对RR类型工作项生效，非RR类型忽略此字段。 **取值范围**： 0~50000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getSysNoDevelopReason() const;
    bool sysNoDevelopReasonIsSet() const;
    void unsetsysNoDevelopReason();
    void setSysNoDevelopReason(const std::string& value);

    /// <summary>
    /// **参数解释**： 价值特性。SF/FE类型工作项对应的业务价值特性描述，用于关联业务价值和技术实现。 **约束限制**： 仅对SF/FE类型工作项生效，其他类型忽略此字段。 **取值范围**： - yes：是 - no：否 **默认取值**： 不涉及。
    /// </summary>

    std::string getValFeature() const;
    bool valFeatureIsSet() const;
    void unsetvalFeature();
    void setValFeature(const std::string& value);

    /// <summary>
    /// **参数解释**： 功能场景。SF/FE类型工作项的功能应用场景描述，用于说明特性的使用场景和用户故事。 **约束限制**： 仅对SF/FE类型工作项生效，其他类型忽略此字段。 **取值范围**： 0~512个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getFunctionScene() const;
    bool functionSceneIsSet() const;
    void unsetfunctionScene();
    void setFunctionScene(const std::string& value);


protected:
    std::string category_;
    bool categoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    UserUpdateAttribute assignee_;
    bool assigneeIsSet_;
    std::vector<UserUpdateAttribute> assignedCc_;
    bool assignedCcIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    std::string workload_;
    bool workloadIsSet_;
    std::string link_;
    bool linkIsSet_;
    std::vector<LabelEntity> labels_;
    bool labelsIsSet_;
    std::vector<FieldCodeValuePair> customFields_;
    bool customFieldsIsSet_;
    std::string ir2feature_;
    bool ir2featureIsSet_;
    std::string needBreak_;
    bool needBreakIsSet_;
    std::string baseline_;
    bool baselineIsSet_;
    std::string priority_;
    bool priorityIsSet_;
    std::string relatedNetworkSecurity_;
    bool relatedNetworkSecurityIsSet_;
    std::string businessDomain_;
    bool businessDomainIsSet_;
    std::string planPi_;
    bool planPiIsSet_;
    std::string planIteration_;
    bool planIterationIsSet_;
    std::string noBreakReason_;
    bool noBreakReasonIsSet_;
    std::vector<UserUpdateAttribute> submittedBy_;
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
    std::string securityLevel_;
    bool securityLevelIsSet_;
    UserUpdateAttribute planOwner_;
    bool planOwnerIsSet_;
    UserUpdateAttribute doingOwner_;
    bool doingOwnerIsSet_;
    UserUpdateAttribute deliveredOwner_;
    bool deliveredOwnerIsSet_;
    UserUpdateAttribute checkingOwner_;
    bool checkingOwnerIsSet_;
    UserUpdateAttribute testOwner_;
    bool testOwnerIsSet_;
    UserUpdateAttribute developOwner_;
    bool developOwnerIsSet_;
    UserUpdateAttribute processingOwner_;
    bool processingOwnerIsSet_;
    UserUpdateAttribute fixedOwner_;
    bool fixedOwnerIsSet_;
    UserUpdateAttribute researchanddevelopOwner_;
    bool researchanddevelopOwnerIsSet_;
    UserUpdateAttribute analyseOwner_;
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
    std::vector<UserUpdateAttribute> recipient_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueUpdateAttribute_H_
