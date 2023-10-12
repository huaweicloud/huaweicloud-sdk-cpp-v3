

#include "huaweicloud/gaussdb/v3/model/NodeSqlFilterRuleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




NodeSqlFilterRuleInfo::NodeSqlFilterRuleInfo()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    rulesIsSet_ = false;
}

NodeSqlFilterRuleInfo::~NodeSqlFilterRuleInfo() = default;

void NodeSqlFilterRuleInfo::validate()
{
}

web::json::value NodeSqlFilterRuleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool NodeSqlFilterRuleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeSqlFilterRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::string NodeSqlFilterRuleInfo::getNodeId() const
{
    return nodeId_;
}

void NodeSqlFilterRuleInfo::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool NodeSqlFilterRuleInfo::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void NodeSqlFilterRuleInfo::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<NodeSqlFilterRule>& NodeSqlFilterRuleInfo::getRules()
{
    return rules_;
}

void NodeSqlFilterRuleInfo::setRules(const std::vector<NodeSqlFilterRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool NodeSqlFilterRuleInfo::rulesIsSet() const
{
    return rulesIsSet_;
}

void NodeSqlFilterRuleInfo::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


