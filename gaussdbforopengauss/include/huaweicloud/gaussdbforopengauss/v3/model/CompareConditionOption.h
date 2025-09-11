
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CompareConditionOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CompareConditionOption_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 组合比较查询条件，可针对某个给定过滤字段，进行区间范围、大小、小于等条件合并查询。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CompareConditionOption
    : public ModelBase
{
public:
    CompareConditionOption();
    virtual ~CompareConditionOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareConditionOption members

    /// <summary>
    /// **参数解释**: 查询字段名称，当前仅支持特定的数值字段。 **约束限制**: 不涉及。 **取值范围**: - total_sql_time: 总SQL耗时。 - sql_time：SQL执行次数。  **默认取值**: 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否使能包含等于，如果为true，则表示包含边界条件（min或max）的取值。 **约束限制**: 不涉及。 **取值范围**: - true - false  **默认取值**: 不涉及。
    /// </summary>

    bool isEnableEqual() const;
    bool enableEqualIsSet() const;
    void unsetenableEqual();
    void setEnableEqual(bool value);

    /// <summary>
    /// **参数解释**: 最小值判断条件对应取值（大于条件）。 **约束限制**: 不涉及。 **取值范围**: [0, 2^63-1] **默认取值**: 不涉及。
    /// </summary>

    int64_t getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(int64_t value);

    /// <summary>
    /// **参数解释**: 最大值判断条件对应取值（小于条件）。 **约束限制**: 不涉及。 **取值范围**: [0, 2^63-1] **默认取值**: 不涉及。
    /// </summary>

    int64_t getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(int64_t value);

    /// <summary>
    /// **参数解释**: 等值判断条件对应取值（等于条件）。value的优先级最高，如果value不为空，则忽略min和max的取值设置；value为空时，才使能min和max的条件过滤。 **约束限制**: 不涉及。 **取值范围**: [0, 2^63-1] **默认取值**: 不涉及。
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool enableEqual_;
    bool enableEqualIsSet_;
    int64_t min_;
    bool minIsSet_;
    int64_t max_;
    bool maxIsSet_;
    int64_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CompareConditionOption_H_
