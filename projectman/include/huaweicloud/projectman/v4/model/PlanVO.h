
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/projectman/v4/model/PlanVO.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  PlanVO
    : public ModelBase
{
public:
    PlanVO();
    virtual ~PlanVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlanVO members

    /// <summary>
    /// **参数解释：** id（发布、迭代、里程碑的id） **取值范围：** 不涉及
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
    /// **参数解释：** 作废标识，枚举类型。 **取值范围：** - 正在工作：可正常操作的发布 - 作废：软删除后的发布，可在回收站恢复 - 删除：彻底删除后的发布，无法恢复
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

    std::vector<PlanVO>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<PlanVO>& value);

    /// <summary>
    /// **参数解释：** 创建人Id **取值范围：** 不涉及
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近更新人Id **取值范围：** 不涉及
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 计划开始时间，\&quot;yyyy-MM-dd\&quot;格式 **取值范围：** 不涉及
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 计划完成时间，\&quot;yyyy-MM-dd\&quot;格式 **取值范围：** 不涉及
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间，unix时间戳，单位：毫秒 **取值范围：** 不涉及
    /// </summary>

    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(int64_t value);

    /// <summary>
    /// **参数解释：** 父工作项id **取值范围：** 不涉及
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释：** 基线状态，枚举类型 **取值范围：** - baselined：已基线 - unbaseline：未基线 - baseline-reviewing：基线评审中
    /// </summary>

    std::string getBaseline() const;
    bool baselineIsSet() const;
    void unsetbaseline();
    void setBaseline(const std::string& value);

    /// <summary>
    /// **参数解释：** 预估工作量 **取值范围：** 不涉及
    /// </summary>

    std::string getWorkload() const;
    bool workloadIsSet() const;
    void unsetworkload();
    void setWorkload(const std::string& value);

    /// <summary>
    /// **参数解释：** 责任人ID **取值范围：** 不涉及
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
    std::vector<PlanVO>* children_;
    bool childrenIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string planStartDate_;
    bool planStartDateIsSet_;
    std::string planEndDate_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanVO_H_
