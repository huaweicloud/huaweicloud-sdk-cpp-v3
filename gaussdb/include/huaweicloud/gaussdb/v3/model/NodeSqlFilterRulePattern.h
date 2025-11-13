
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRulePattern_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRulePattern_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SQL限流规则和最大并发数
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  NodeSqlFilterRulePattern
    : public ModelBase
{
public:
    NodeSqlFilterRulePattern();
    virtual ~NodeSqlFilterRulePattern();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSqlFilterRulePattern members

    /// <summary>
    /// SQL限流规则，由一个或多个关键字（最多为128个关键字）组成，关键字之间通过\&quot;~\&quot;分隔符分开，如select~from~t1。规则中不能包含‘\\’、中英文逗号、‘~~’，不能以‘~’结尾。
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// 最大并发数。取值范围：非负整数。
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);

    /// <summary>
    /// **参数解释**：  SQL限流失效时间，标准秒级时间戳，永久生效SQL限流规则该字段为null。  **约束限制**：  不涉及。  **取值范围**：  0 - 9223372036854775807。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getExpireAt() const;
    bool expireAtIsSet() const;
    void unsetexpireAt();
    void setExpireAt(int64_t value);


protected:
    std::string pattern_;
    bool patternIsSet_;
    int32_t maxConcurrency_;
    bool maxConcurrencyIsSet_;
    int64_t expireAt_;
    bool expireAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRulePattern_H_
