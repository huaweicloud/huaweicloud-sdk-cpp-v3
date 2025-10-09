

#include "huaweicloud/cce/v3/model/NodeMetadata_ownerReference.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeMetadata_ownerReference::NodeMetadata_ownerReference()
{
    nodepoolName_ = "";
    nodepoolNameIsSet_ = false;
    nodepoolID_ = "";
    nodepoolIDIsSet_ = false;
}

NodeMetadata_ownerReference::~NodeMetadata_ownerReference() = default;

void NodeMetadata_ownerReference::validate()
{
}

web::json::value NodeMetadata_ownerReference::toJson() const
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
bool NodeMetadata_ownerReference::fromJson(const web::json::value& val)
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


std::string NodeMetadata_ownerReference::getNodepoolName() const
{
    return nodepoolName_;
}

void NodeMetadata_ownerReference::setNodepoolName(const std::string& value)
{
    nodepoolName_ = value;
    nodepoolNameIsSet_ = true;
}

bool NodeMetadata_ownerReference::nodepoolNameIsSet() const
{
    return nodepoolNameIsSet_;
}

void NodeMetadata_ownerReference::unsetnodepoolName()
{
    nodepoolNameIsSet_ = false;
}

std::string NodeMetadata_ownerReference::getNodepoolID() const
{
    return nodepoolID_;
}

void NodeMetadata_ownerReference::setNodepoolID(const std::string& value)
{
    nodepoolID_ = value;
    nodepoolIDIsSet_ = true;
}

bool NodeMetadata_ownerReference::nodepoolIDIsSet() const
{
    return nodepoolIDIsSet_;
}

void NodeMetadata_ownerReference::unsetnodepoolID()
{
    nodepoolIDIsSet_ = false;
}

}
}
}
}
}


