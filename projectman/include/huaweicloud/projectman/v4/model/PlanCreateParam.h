
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanCreateParam_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanCreateParam_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 创建发布/迭代计划的请求参数。 **约束限制**： 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  PlanCreateParam
    : public ModelBase
{
public:
    PlanCreateParam();
    virtual ~PlanCreateParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlanCreateParam members

    /// <summary>
    /// **参数解释**： 计划标题。 **约束限制**： 不涉及。 **取值范围**： 1~256个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释**： 计划分类，枚举类型。 **约束限制**： 不涉及。 **取值范围**： - PI：发布 - Iteration：迭代 - PlanMilestone：里程碑 **默认取值**： 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 计划描述信息。 **约束限制**： 不涉及。 **取值范围**： 0~1000个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 计划开始时间，格式为yyyy-MM-dd，如2024-01-01。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanStartDate() const;
    bool planStartDateIsSet() const;
    void unsetplanStartDate();
    void setPlanStartDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 计划完成时间，格式为yyyy-MM-dd，如2024-01-01。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 父计划ID，当category为Iteration时必填，用于指定所属的发布计划。 **约束限制**： category为Iteration时必填。 **取值范围**： 长度为18~19个字符的数字字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 预估工作量，用于标识计划所需的人力投入，单位人/天。 **约束限制**： 不涉及。 **取值范围**： 0~11个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getWorkload() const;
    bool workloadIsSet() const;
    void unsetworkload();
    void setWorkload(const std::string& value);

    /// <summary>
    /// **参数解释**： 责任人ID，标识计划的负责人。 **约束限制**： 不涉及。 **取值范围**： 长度为32个字符。 **默认取值**： 不涉及。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string planStartDate_;
    bool planStartDateIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanCreateParam_H_
