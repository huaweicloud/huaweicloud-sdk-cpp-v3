

#include "huaweicloud/modelarts/v1/model/NodeSelectorTerm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeSelectorTerm::NodeSelectorTerm()
{
    matchExpressionsIsSet_ = false;
    matchFieldsIsSet_ = false;
}

NodeSelectorTerm::~NodeSelectorTerm() = default;

void NodeSelectorTerm::validate()
{
}

web::json::value NodeSelectorTerm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(matchExpressionsIsSet_) {
        val[utility::conversions::to_string_t("matchExpressions")] = ModelBase::toJson(matchExpressions_);
    }
    if(matchFieldsIsSet_) {
        val[utility::conversions::to_string_t("matchFields")] = ModelBase::toJson(matchFields_);
    }

    return val;
}
bool NodeSelectorTerm::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("matchExpressions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matchExpressions"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeSelectorRequirement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchExpressions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matchFields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matchFields"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeSelectorRequirement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchFields(refVal);
        }
    }
    return ok;
}


std::vector<NodeSelectorRequirement>& NodeSelectorTerm::getMatchExpressions()
{
    return matchExpressions_;
}

void NodeSelectorTerm::setMatchExpressions(const std::vector<NodeSelectorRequirement>& value)
{
    matchExpressions_ = value;
    matchExpressionsIsSet_ = true;
}

bool NodeSelectorTerm::matchExpressionsIsSet() const
{
    return matchExpressionsIsSet_;
}

void NodeSelectorTerm::unsetmatchExpressions()
{
    matchExpressionsIsSet_ = false;
}

std::vector<NodeSelectorRequirement>& NodeSelectorTerm::getMatchFields()
{
    return matchFields_;
}

void NodeSelectorTerm::setMatchFields(const std::vector<NodeSelectorRequirement>& value)
{
    matchFields_ = value;
    matchFieldsIsSet_ = true;
}

bool NodeSelectorTerm::matchFieldsIsSet() const
{
    return matchFieldsIsSet_;
}

void NodeSelectorTerm::unsetmatchFields()
{
    matchFieldsIsSet_ = false;
}

}
}
}
}
}


