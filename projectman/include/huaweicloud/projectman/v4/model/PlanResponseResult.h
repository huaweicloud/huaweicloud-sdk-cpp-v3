
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanResponseResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanResponseResult_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/projectman/v4/model/PlanResponseResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 响应中的计划详情数据对象，日期字段为unix时间戳格式。 **约束限制**： 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  PlanResponseResult
    : public ModelBase
{
public:
    PlanResponseResult();
    virtual ~PlanResponseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlanResponseResult members

    /// <summary>
    /// **参数解释：** 发布、迭代、里程碑的ID **取值范围：** 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 标题 **取值范围：** 不涉及
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 分类，枚举类型 **取值范围：** - PI：发布 - Iteration：迭代 - PlanMilestone：里程碑
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释：** 描述 **取值范围：** 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 作废标识，枚举类型。 **取值范围：** - 正在工作：可正常操作的发布。 - 作废：软删除后的发布。 - 删除：彻底删除后的发布。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 发布/迭代的状态，枚举类型。 **取值范围：** - planned：发布/计划未开始 - going：发布/计划进行中 - ended：发布/计划已结束
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 子项目迭代信息
    /// </summary>

    std::vector<PlanResponseResult>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<PlanResponseResult>& value);

    /// <summary>
    /// **参数解释：** 创建人ID **取值范围：** 不涉及
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近更新人ID。 **取值范围：** 不涉及
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 计划开始时间，unix时间戳，单位：毫秒。 **取值范围：** 不涉及
    /// </summary>

    int64_t getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(int64_t value);

    /// <summary>
    /// **参数解释：** 计划完成时间，unix时间戳，单位：毫秒。 **取值范围：** 不涉及
    /// </summary>

    int64_t getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(int64_t value);

    /// <summary>
    /// **参数解释：** 创建时间，unix时间戳，单位：毫秒 **取值范围：** 不涉及
    /// </summary>

    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(int64_t value);

    /// <summary>
    /// **参数解释：** 父计划ID，当计划类型为迭代(Iteration)时，用于指定所属的发布计划。 **取值范围：** 长度为18~19个字符的数字字符串。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释：** 基线状态，枚举类型，标识计划是否已纳入基线管理。 **取值范围：** - baselined：已基线 - unbaseline：未基线 - \&quot;\&quot;：未基线
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);

    /// <summary>
    /// **参数解释：** 预估工作量，用于标识计划所需的人力或时间投入，单位人/天。 **取值范围：** 最大长度11个字符。
    /// </summary>

    std::string getWorkload() const;
    bool workloadIsSet() const;
    void unsetworkload();
    void setWorkload(const std::string& value);

    /// <summary>
    /// **参数解释：** 责任人ID，标识计划的负责人。 **取值范围：** 长度为32位的字符串。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<PlanResponseResult>* children_;
    bool childrenIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    int64_t planStartDate_;
    bool planStartDateIsSet_;
    int64_t planEndDate_;
    bool planEndDateIsSet_;
    int64_t createdDate_;
    bool createdDateIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string baseline_;
    bool baselineIsSet_;
    std::string workload_;
    bool workloadIsSet_;
    std::string owner_;
    bool ownerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanResponseResult_H_
