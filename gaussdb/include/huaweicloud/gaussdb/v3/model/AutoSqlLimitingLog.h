
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AutoSqlLimitingLog_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AutoSqlLimitingLog_H_


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
/// **参数解释**：  自治限流执行记录。  **约束限制**：  不涉及
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  AutoSqlLimitingLog
    : public ModelBase
{
public:
    AutoSqlLimitingLog();
    virtual ~AutoSqlLimitingLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoSqlLimitingLog members

    /// <summary>
    /// **参数解释**：  节点ID。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为no07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL限流规则。  **取值范围**：  由一个或多个关键字（最多为128个关键字）组成，关键字之间通过\&quot;~\&quot;分隔符分开，如select~from~t1。规则中不能包含‘\\’、中英文逗号、‘~~’，不能以‘~’结尾。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// **参数解释**：  限流类型。  **取值范围**：  SELECT。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSqlType() const;
    bool sqlTypeIsSet() const;
    void unsetsqlType();
    void setSqlType(const std::string& value);

    /// <summary>
    /// **参数解释**：  最大并发数。  **取值范围**：  [0~1000000000]。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);

    /// <summary>
    /// **参数解释**：  限流开始时间戳。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：  限流失效时间戳。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getExpireAt() const;
    bool expireAtIsSet() const;
    void unsetexpireAt();
    void setExpireAt(int64_t value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string pattern_;
    bool patternIsSet_;
    std::string sqlType_;
    bool sqlTypeIsSet_;
    int32_t maxConcurrency_;
    bool maxConcurrencyIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AutoSqlLimitingLog_H_
