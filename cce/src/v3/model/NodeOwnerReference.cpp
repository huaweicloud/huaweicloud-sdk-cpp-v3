

#include "huaweicloud/cce/v3/model/NodeOwnerReference.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeOwnerReference::NodeOwnerReference()
{
    nodepoolName_ = "";
    nodepoolNameIsSet_ = false;
    nodepoolID_ = "";
    nodepoolIDIsSet_ = false;
}

NodeOwnerReference::~NodeOwnerReference() = default;

void NodeOwnerReference::validate()
{
}

web::json::value NodeOwnerReference::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodepoolNameIsSet_) {
        val[utility::conversions::to_string_t("nodepoolName")] = ModelBase::toJson(nodepoolName_);
    }
    if(nodepoolIDIsSet_) {
        val[utility::conversions::to_string_t("nodepoolID")] = ModelBase::toJson(nodepoolID_);
    }

    return val;
}
bool NodeOwnerReference::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodepoolName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepoolName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodepoolID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepoolID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolID(refVal);
        }
    }
    return ok;
}


std::string NodeOwnerReference::getNodepoolName() const
{
    return nodepoolName_;
}

void NodeOwnerReference::setNodepoolName(const std::string& value)
{
    nodepoolName_ = value;
    nodepoolNameIsSet_ = true;
}

bool NodeOwnerReference::nodepoolNameIsSet() const
{
    return nodepoolNameIsSet_;
}

void NodeOwnerReference::unsetnodepoolName()
{
    nodepoolNameIsSet_ = false;
}

std::string NodeOwnerReference::getNodepoolID() const
{
    return nodepoolID_;
}

void NodeOwnerReference::setNodepoolID(const std::string& value)
{
    nodepoolID_ = value;
    nodepoolIDIsSet_ = true;
}

bool NodeOwnerReference::nodepoolIDIsSet() const
{
    return nodepoolIDIsSet_;
}

void NodeOwnerReference::unsetnodepoolID()
{
    nodepoolIDIsSet_ = false;
}

}
}
}
}
}


