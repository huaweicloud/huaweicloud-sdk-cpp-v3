
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHistoricalSqlFilterRuleRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHistoricalSqlFilterRuleRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowHistoricalSqlFilterRuleRequest
    : public ModelBase
{
public:
    ShowHistoricalSqlFilterRuleRequest();
    virtual ~ShowHistoricalSqlFilterRuleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHistoricalSqlFilterRuleRequest members

    /// <summary>
    /// **参数解释**：              请求语言类型。  **约束限制**：  不涉及。  **取值范围**： - en-us - zh-cn  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  节点ID，此参数是节点的唯一标识。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为no07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL限流类型。  **约束限制**：  不涉及。  **取值范围**：  - SELECT：查询语句。 - UPDATE：更新语句。 - DELETE：删除语句。 - INSERT：插入语句。  **默认取值**：  不传则默认查询所有类型的限流规则。
    /// </summary>

    std::string getSqlType() const;
    bool sqlTypeIsSet() const;
    void unsetsqlType();
    void setSqlType(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string sqlType_;
    bool sqlTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHistoricalSqlFilterRuleRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHistoricalSqlFilterRuleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHistoricalSqlFilterRuleRequest_H_
