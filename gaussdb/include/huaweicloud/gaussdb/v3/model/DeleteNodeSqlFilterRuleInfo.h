
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteNodeSqlFilterRuleInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteNodeSqlFilterRuleInfo_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DeleteNodeSqlFilterRule.h>
#include <string>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteNodeSqlFilterRuleInfo
    : public ModelBase
{
public:
    DeleteNodeSqlFilterRuleInfo();
    virtual ~DeleteNodeSqlFilterRuleInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteNodeSqlFilterRuleInfo members

    /// <summary>
    /// 节点ID
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// SQL限流规则。
    /// </summary>

    std::vector<DeleteNodeSqlFilterRule>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<DeleteNodeSqlFilterRule>& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::vector<DeleteNodeSqlFilterRule> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteNodeSqlFilterRuleInfo_H_
