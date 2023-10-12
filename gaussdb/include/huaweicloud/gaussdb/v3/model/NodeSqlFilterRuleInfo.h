
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRuleInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRuleInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/NodeSqlFilterRule.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点级别的SQL限流规则。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  NodeSqlFilterRuleInfo
    : public ModelBase
{
public:
    NodeSqlFilterRuleInfo();
    virtual ~NodeSqlFilterRuleInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeSqlFilterRuleInfo members

    /// <summary>
    /// 节点ID
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// SQL限流规则。集合的sql_type值不能重复。
    /// </summary>

    std::vector<NodeSqlFilterRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<NodeSqlFilterRule>& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::vector<NodeSqlFilterRule> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_NodeSqlFilterRuleInfo_H_
