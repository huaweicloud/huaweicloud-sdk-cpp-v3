

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
    hyperNodeName_ = "";
    hyperNodeNameIsSet_ = false;
    hyperNodeID_ = "";
    hyperNodeIDIsSet_ = false;
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
    if(hyperNodeNameIsSet_) {
        val[utility::conversions::to_string_t("hyperNodeName")] = ModelBase::toJson(hyperNodeName_);
    }
    if(hyperNodeIDIsSet_) {
        val[utility::conversions::to_string_t("hyperNodeID")] = ModelBase::toJson(hyperNodeID_);
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
    if(val.has_field(utility::conversions::to_string_t("hyperNodeName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperNodeName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hyperNodeID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperNodeID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperNodeID(refVal);
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

std::string NodeMetadata_ownerReference::getHyperNodeName() const
{
    return hyperNodeName_;
}

void NodeMetadata_ownerReference::setHyperNodeName(const std::string& value)
{
    hyperNodeName_ = value;
    hyperNodeNameIsSet_ = true;
}

bool NodeMetadata_ownerReference::hyperNodeNameIsSet() const
{
    return hyperNodeNameIsSet_;
}

void NodeMetadata_ownerReference::unsethyperNodeName()
{
    hyperNodeNameIsSet_ = false;
}

std::string NodeMetadata_ownerReference::getHyperNodeID() const
{
    return hyperNodeID_;
}

void NodeMetadata_ownerReference::setHyperNodeID(const std::string& value)
{
    hyperNodeID_ = value;
    hyperNodeIDIsSet_ = true;
}

bool NodeMetadata_ownerReference::hyperNodeIDIsSet() const
{
    return hyperNodeIDIsSet_;
}

void NodeMetadata_ownerReference::unsethyperNodeID()
{
    hyperNodeIDIsSet_ = false;
}

}
}
}
}
}


