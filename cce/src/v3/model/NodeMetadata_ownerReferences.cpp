

#include "huaweicloud/cce/v3/model/NodeMetadata_ownerReferences.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeMetadata_ownerReferences::NodeMetadata_ownerReferences()
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

NodeMetadata_ownerReferences::~NodeMetadata_ownerReferences() = default;

void NodeMetadata_ownerReferences::validate()
{
}

web::json::value NodeMetadata_ownerReferences::toJson() const
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
bool NodeMetadata_ownerReferences::fromJson(const web::json::value& val)
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


std::string NodeMetadata_ownerReferences::getNodepoolName() const
{
    return nodepoolName_;
}

void NodeMetadata_ownerReferences::setNodepoolName(const std::string& value)
{
    nodepoolName_ = value;
    nodepoolNameIsSet_ = true;
}

bool NodeMetadata_ownerReferences::nodepoolNameIsSet() const
{
    return nodepoolNameIsSet_;
}

void NodeMetadata_ownerReferences::unsetnodepoolName()
{
    nodepoolNameIsSet_ = false;
}

std::string NodeMetadata_ownerReferences::getNodepoolID() const
{
    return nodepoolID_;
}

void NodeMetadata_ownerReferences::setNodepoolID(const std::string& value)
{
    nodepoolID_ = value;
    nodepoolIDIsSet_ = true;
}

bool NodeMetadata_ownerReferences::nodepoolIDIsSet() const
{
    return nodepoolIDIsSet_;
}

void NodeMetadata_ownerReferences::unsetnodepoolID()
{
    nodepoolIDIsSet_ = false;
}

std::string NodeMetadata_ownerReferences::getHyperNodeName() const
{
    return hyperNodeName_;
}

void NodeMetadata_ownerReferences::setHyperNodeName(const std::string& value)
{
    hyperNodeName_ = value;
    hyperNodeNameIsSet_ = true;
}

bool NodeMetadata_ownerReferences::hyperNodeNameIsSet() const
{
    return hyperNodeNameIsSet_;
}

void NodeMetadata_ownerReferences::unsethyperNodeName()
{
    hyperNodeNameIsSet_ = false;
}

std::string NodeMetadata_ownerReferences::getHyperNodeID() const
{
    return hyperNodeID_;
}

void NodeMetadata_ownerReferences::setHyperNodeID(const std::string& value)
{
    hyperNodeID_ = value;
    hyperNodeIDIsSet_ = true;
}

bool NodeMetadata_ownerReferences::hyperNodeIDIsSet() const
{
    return hyperNodeIDIsSet_;
}

void NodeMetadata_ownerReferences::unsethyperNodeID()
{
    hyperNodeIDIsSet_ = false;
}

}
}
}
}
}


