

#include "huaweicloud/gaussdb/v3/model/DeleteNodeSqlFilterRuleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteNodeSqlFilterRuleInfo::DeleteNodeSqlFilterRuleInfo()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    rulesIsSet_ = false;
}

DeleteNodeSqlFilterRuleInfo::~DeleteNodeSqlFilterRuleInfo() = default;

void DeleteNodeSqlFilterRuleInfo::validate()
{
}

web::json::value DeleteNodeSqlFilterRuleInfo::toJson() const
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
bool DeleteNodeSqlFilterRuleInfo::fromJson(const web::json::value& val)
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
            std::vector<DeleteNodeSqlFilterRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::string DeleteNodeSqlFilterRuleInfo::getNodeId() const
{
    return nodeId_;
}

void DeleteNodeSqlFilterRuleInfo::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeleteNodeSqlFilterRuleInfo::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeleteNodeSqlFilterRuleInfo::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<DeleteNodeSqlFilterRule>& DeleteNodeSqlFilterRuleInfo::getRules()
{
    return rules_;
}

void DeleteNodeSqlFilterRuleInfo::setRules(const std::vector<DeleteNodeSqlFilterRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool DeleteNodeSqlFilterRuleInfo::rulesIsSet() const
{
    return rulesIsSet_;
}

void DeleteNodeSqlFilterRuleInfo::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


