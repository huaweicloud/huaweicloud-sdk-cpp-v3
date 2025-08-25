

#include "huaweicloud/cce/v3/model/NodeSpecUpdate_nodeNameTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeSpecUpdate_nodeNameTemplate::NodeSpecUpdate_nodeNameTemplate()
{
    nodeNamePrefix_ = "";
    nodeNamePrefixIsSet_ = false;
    nodeNameSuffix_ = "";
    nodeNameSuffixIsSet_ = false;
}

NodeSpecUpdate_nodeNameTemplate::~NodeSpecUpdate_nodeNameTemplate() = default;

void NodeSpecUpdate_nodeNameTemplate::validate()
{
}

web::json::value NodeSpecUpdate_nodeNameTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNamePrefixIsSet_) {
        val[utility::conversions::to_string_t("nodeNamePrefix")] = ModelBase::toJson(nodeNamePrefix_);
    }
    if(nodeNameSuffixIsSet_) {
        val[utility::conversions::to_string_t("nodeNameSuffix")] = ModelBase::toJson(nodeNameSuffix_);
    }

    return val;
}
bool NodeSpecUpdate_nodeNameTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeNamePrefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNamePrefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNamePrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeNameSuffix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNameSuffix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNameSuffix(refVal);
        }
    }
    return ok;
}


std::string NodeSpecUpdate_nodeNameTemplate::getNodeNamePrefix() const
{
    return nodeNamePrefix_;
}

void NodeSpecUpdate_nodeNameTemplate::setNodeNamePrefix(const std::string& value)
{
    nodeNamePrefix_ = value;
    nodeNamePrefixIsSet_ = true;
}

bool NodeSpecUpdate_nodeNameTemplate::nodeNamePrefixIsSet() const
{
    return nodeNamePrefixIsSet_;
}

void NodeSpecUpdate_nodeNameTemplate::unsetnodeNamePrefix()
{
    nodeNamePrefixIsSet_ = false;
}

std::string NodeSpecUpdate_nodeNameTemplate::getNodeNameSuffix() const
{
    return nodeNameSuffix_;
}

void NodeSpecUpdate_nodeNameTemplate::setNodeNameSuffix(const std::string& value)
{
    nodeNameSuffix_ = value;
    nodeNameSuffixIsSet_ = true;
}

bool NodeSpecUpdate_nodeNameTemplate::nodeNameSuffixIsSet() const
{
    return nodeNameSuffixIsSet_;
}

void NodeSpecUpdate_nodeNameTemplate::unsetnodeNameSuffix()
{
    nodeNameSuffixIsSet_ = false;
}

}
}
}
}
}


