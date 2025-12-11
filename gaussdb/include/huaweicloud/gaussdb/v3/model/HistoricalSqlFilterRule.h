
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HistoricalSqlFilterRule_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HistoricalSqlFilterRule_H_


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
/// **参数解释**：  SQL限流规则。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HistoricalSqlFilterRule
    : public ModelBase
{
public:
    HistoricalSqlFilterRule();
    virtual ~HistoricalSqlFilterRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HistoricalSqlFilterRule members

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  节点ID。  **取值范围**：  与入参中的节点ID一致。  **默认取值**：  不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL限流规则。  **取值范围**：  由一个或多个关键字（最多为128个关键字）组成，关键字之间通过\&quot;~\&quot;分隔符分开，如select~from~t1。规则中不能包含‘\\’、中英文逗号、‘~~’，不能以‘~’结尾。  **默认取值**：  不涉及
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL限流类型。  **取值范围**：  - SELECT：查询语句。 - UPDATE：更新语句。 - DELETE：删除语句。 - INSERT：插入语句。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSqlType() const;
    bool sqlTypeIsSet() const;
    void unsetsqlType();
    void setSqlType(const std::string& value);

    /// <summary>
    /// **参数解释**：  最大并发数。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);

    /// <summary>
    /// **参数解释**：  SQL限流规则创建时间。  **取值范围**：  0 - 9223372036854775807。  **默认取值**：  不涉及
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：  SQL限流规则失效时间。  **取值范围**：  0 - 9223372036854775807。  **默认取值**：  不涉及
    /// </summary>

    int64_t getExpireAt() const;
    bool expireAtIsSet() const;
    void unsetexpireAt();
    void setExpireAt(int64_t value);

    /// <summary>
    /// **参数解释**：  SQL限流规则删除时间。  **取值范围**：  0 - 9223372036854775807。  **默认取值**：  不涉及
    /// </summary>

    int64_t getDeleteAt() const;
    bool deleteAtIsSet() const;
    void unsetdeleteAt();
    void setDeleteAt(int64_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
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
    int64_t deleteAt_;
    bool deleteAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HistoricalSqlFilterRule_H_
