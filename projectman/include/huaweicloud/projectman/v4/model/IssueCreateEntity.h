
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCreateEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCreateEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/LabelEntity.h>
#include <huaweicloud/projectman/v4/model/FieldCodeValuePair.h>
#include <string>
#include <huaweicloud/projectman/v4/model/UserEntity.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项创建对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueCreateEntity
    : public ModelBase
{
public:
    IssueCreateEntity();
    virtual ~IssueCreateEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueCreateEntity members

    /// <summary>
    /// **参数解释**： 工作项标题。 **约束限制**：  不涉及。 **取值范围**： 2~256个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项描述字段。 **约束限制**： 不涉及。 **取值范围**： 0~500000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项类型编码。编辑工作项时，此字段必填、值为当前工作项正确的工作项类型，但不会更新此字段。 **约束限制**： 不涉及。 **取值范围**： 支持多种工作项类型，使用英文逗号分隔。 - 系统设备类项目：RR、SF、IR、SR、AR、Task、Bug - 独立软件类项目：RR、SF、IR、US、Task、Bug - 云服务类项目：RR、Epic、FE、US、Task、Bug **默认取值**： 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项类型层级关系ID，此参数影响工作项的层级显示。通过[获取模型树配置信息](GetModelConfig.xml)获取，根据参数中的category在响应消息体中category_layer_config中找到对应的category_code，和category_code同级的id就是工作项类型层级关系ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCategoryLayerId() const;
    bool categoryLayerIdIsSet() const;
    void unsetcategoryLayerId();
    void setCategoryLayerId(const std::string& value);

    /// <summary>
    /// **参数解释**： 父工作项ID。 **约束限制**： 创建子工作项时必填，其他场景非必填。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项状态code。可通过[查询工作项状态](ListIssueStatues.xml)接口获取，响应消息体中的**code**字段的值就是工作项状态code。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserEntity getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const UserEntity& value);

    /// <summary>
    /// **参数解释**： 原始需求承接人。 **约束限制**： 当工作项类型为RR时字段必填，其他工作项类型无此字段。
    /// </summary>

    std::vector<UserEntity>& getRecipient();
    bool recipientIsSet() const;
    void unsetrecipient();
    void setRecipient(const std::vector<UserEntity>& value);

    /// <summary>
    /// **参数解释**： 工作项抄送人，支持多个抄送人。 **约束限制**： 同一工作项最多支持50个抄送人。
    /// </summary>

    std::vector<UserEntity>& getAssignedCc();
    bool assignedCcIsSet() const;
    void unsetassignedCc();
    void setAssignedCc(const std::vector<UserEntity>& value);

    /// <summary>
    /// **参数解释**： 工作项计划结束日期。 **约束限制**： 0~13个字符的数字字符串，可选负号前缀。 **取值范围**： 时间戳。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项计划工时。 **约束限制**： 不涉及。 **取值范围**： 0~999999999.9中的数字字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getWorkload() const;
    bool workloadIsSet() const;
    void unsetworkload();
    void setWorkload(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项关联项ID。 **约束限制**： 多个关联项用英文逗号分隔，同一工作项最多支持50个关联项。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项标签。 **约束限制**： 不涉及。
    /// </summary>

    std::vector<LabelEntity>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::vector<LabelEntity>& value);

    /// <summary>
    /// **参数解释**： 工作项自定义字段映射。用户添加的系统字段也在此列。 **约束限制**： 不涉及。
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
    /// **参数解释**： 工作项优先级。 **约束限制**： RR、SF、FE、IR、SR、AR、Task、Bug可以填写该字段。 **取值范围**： - 低：低优先级。 - 中：中优先级。 - 高：高优先级。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否涉及网络安全。 **约束限制**： 仅研发需求有此字段。 **取值范围**： - yes：涉及网络安全。 - no：不涉及网络安全。 **默认取值**： 不涉及。
    /// </summary>

    std::string getRelatedNetworkSecurity() const;
    bool relatedNetworkSecurityIsSet() const;
    void unsetrelatedNetworkSecurity();
    void setRelatedNetworkSecurity(const std::string& value);

    /// <summary>
    /// **参数解释**： 研发需求协同信息，协同任务ID，可通过[查询树状工作项](ShowIpdIssueTree.xml)接口获取，响应消息体中的**collaboratives**字段的值就是研发需求协同信息，协同任务ID。 **约束限制**： 协同任务ID。IR、SR、AR、US有此字段。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCollaboratives() const;
    bool collaborativesIsSet() const;
    void unsetcollaboratives();
    void setCollaboratives(const std::string& value);

    /// <summary>
    /// **参数解释**： 领域字段。 **约束限制**：  FE、SF、IR、SR、AR、Bug有此字段。 **取值范围**： - software - soft-hardware - hardware - 性能 - 功能 - 运维 - 运营 - 用户体验 - 隐私保护 - 合规 - 韧性(可靠性/可用性) - 韧性(危险检测与相应恢复) - 透明 - 无害 - 安全 - API - 成本 - 可维护性 - 其他DFX - 可用性 - others **默认取值**： 不涉及。
    /// </summary>

    std::string getBusinessDomain() const;
    bool businessDomainIsSet() const;
    void unsetbusinessDomain();
    void setBusinessDomain(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项发布计划ID。 **约束限制**： 默认SR、AR、US、Task、Bug有此字段。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanPi() const;
    bool planPiIsSet() const;
    void unsetplanPi();
    void setPlanPi(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项提出人。 **约束限制**： 仅RR、Bug有此字段。
    /// </summary>

    std::vector<UserEntity>& getSubmittedBy();
    bool submittedByIsSet() const;
    void unsetsubmittedBy();
    void setSubmittedBy(const std::vector<UserEntity>& value);

    /// <summary>
    /// **参数解释**： IR关联的RR的Id。 **约束限制**： 仅IR有此字段，多选时用英文逗号分隔。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getIr2rr() const;
    bool ir2rrIsSet() const;
    void unsetir2rr();
    void setIr2rr(const std::string& value);

    /// <summary>
    /// **参数解释**： 特性集ID。 **约束限制**： 仅SF/FE有此字段。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getFeatureSet() const;
    bool featureSetIsSet() const;
    void unsetfeatureSet();
    void setFeatureSet(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级。低密级权限者不能访问高密级的工作项。可以通过[[查询字段列表](ListIpdProjectFields.xml)]接口获取，响应消息体中密级的**option**字段的值就是密级字段的可选值。 **约束限制**： 仅在涉密环境（SM）下存在此字段，非涉密环境下无此字段。涉密环境下必填。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getSecurityLevel() const;
    bool securityLevelIsSet() const;
    void unsetsecurityLevel();
    void setSecurityLevel(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string categoryLayerId_;
    bool categoryLayerIdIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    UserEntity assignee_;
    bool assigneeIsSet_;
    std::vector<UserEntity> recipient_;
    bool recipientIsSet_;
    std::vector<UserEntity> assignedCc_;
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
    std::vector<UserEntity> submittedBy_;
    bool submittedByIsSet_;
    std::string ir2rr_;
    bool ir2rrIsSet_;
    std::string featureSet_;
    bool featureSetIsSet_;
    std::string securityLevel_;
    bool securityLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCreateEntity_H_
