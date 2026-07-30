

#include "huaweicloud/modelarts/v1/model/CodeTreeNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CodeTreeNode::CodeTreeNode()
{
    name_ = "";
    nameIsSet_ = false;
    childrenIsSet_ = false;
}

CodeTreeNode::~CodeTreeNode() = default;

void CodeTreeNode::validate()
{
}

web::json::value CodeTreeNode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(*children_);
    }

    return val;
}
bool CodeTreeNode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<CodeTreeNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}


std::string CodeTreeNode::getName() const
{
    return name_;
}

void CodeTreeNode::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CodeTreeNode::nameIsSet() const
{
    return nameIsSet_;
}

void CodeTreeNode::unsetname()
{
    nameIsSet_ = false;
}

std::vector<CodeTreeNode>& CodeTreeNode::getChildren()
{
    return *children_;
}

void CodeTreeNode::setChildren(const std::vector<CodeTreeNode>& value)
{
    *children_ = value;
    childrenIsSet_ = true;
}

bool CodeTreeNode::childrenIsSet() const
{
    return childrenIsSet_;
}

void CodeTreeNode::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


