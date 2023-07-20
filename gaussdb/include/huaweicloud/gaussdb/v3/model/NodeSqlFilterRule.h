
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRule_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRule_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/NodeSqlFilterRulePattern.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SQL限流规则。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  NodeSqlFilterRule
    : public ModelBase
{
public:
    NodeSqlFilterRule();
    virtual ~NodeSqlFilterRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NodeSqlFilterRule members

    /// <summary>
    /// Sql限流类型。  取值范围： - SELECT - UPDATE - DELETE
    /// </summary>

    std::string getSqlType() const;
    bool sqlTypeIsSet() const;
    void unsetsqlType();
    void setSqlType(const std::string& value);

    /// <summary>
    /// SQL限流具体规则。
    /// </summary>

    std::vector<NodeSqlFilterRulePattern>& getPatterns();
    bool patternsIsSet() const;
    void unsetpatterns();
    void setPatterns(const std::vector<NodeSqlFilterRulePattern>& value);


protected:
    std::string sqlType_;
    bool sqlTypeIsSet_;
    std::vector<NodeSqlFilterRulePattern> patterns_;
    bool patternsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRule_H_
