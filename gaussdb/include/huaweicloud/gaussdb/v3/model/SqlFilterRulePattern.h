
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SqlFilterRulePattern_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SqlFilterRulePattern_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SqlFilterRulePattern
    : public ModelBase
{
public:
    SqlFilterRulePattern();
    virtual ~SqlFilterRulePattern();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SqlFilterRulePattern members

    /// <summary>
    /// **参数解释**：  SQL限流规则。  **取值范围**：  由一个或多个关键字（最多为128个关键字）组成，关键字之间通过\&quot;~\&quot;分隔符分开，如select~from~t1。规则中不能包含‘\\’、中英文逗号、‘~~’，不能以‘~’结尾。
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// **参数解释**：  最大并发数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);

    /// <summary>
    /// **参数解释**：  当前并发数。  **取值范围**：  0 - 4294967296。
    /// </summary>

    int32_t getCurConcurrency() const;
    bool curConcurrencyIsSet() const;
    void unsetcurConcurrency();
    void setCurConcurrency(int32_t value);

    /// <summary>
    /// **参数解释**：  当前拦截次数。  **取值范围**：  0 - 4294967296。
    /// </summary>

    int32_t getCurReject() const;
    bool curRejectIsSet() const;
    void unsetcurReject();
    void setCurReject(int32_t value);

    /// <summary>
    /// **参数解释**：  SQL限流规则创建时间。  **取值范围**：  0 - 9223372036854775807。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：  SQL限流规则失效时间。  **取值范围**：  0 - 9223372036854775807。
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
    int32_t curConcurrency_;
    bool curConcurrencyIsSet_;
    int32_t curReject_;
    bool curRejectIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t expireAt_;
    bool expireAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SqlFilterRulePattern_H_
