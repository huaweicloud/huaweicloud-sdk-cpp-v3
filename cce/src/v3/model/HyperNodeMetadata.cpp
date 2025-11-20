

#include "huaweicloud/cce/v3/model/HyperNodeMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




HyperNodeMetadata::HyperNodeMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    uid_ = "";
    uidIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
    ownerReferenceIsSet_ = false;
}

HyperNodeMetadata::~HyperNodeMetadata() = default;

void HyperNodeMetadata::validate()
{
}

web::json::value HyperNodeMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(ownerReferenceIsSet_) {
        val[utility::conversions::to_string_t("ownerReference")] = ModelBase::toJson(ownerReference_);
    }

    return val;
}
bool HyperNodeMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerReference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerReference"));
        if(!fieldValue.is_null())
        {
            HyperNodeMetadata_ownerReference refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerReference(refVal);
        }
    }
    return ok;
}


std::string HyperNodeMetadata::getName() const
{
    return name_;
}

void HyperNodeMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HyperNodeMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void HyperNodeMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string HyperNodeMetadata::getUid() const
{
    return uid_;
}

void HyperNodeMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool HyperNodeMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void HyperNodeMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string HyperNodeMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void HyperNodeMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool HyperNodeMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void HyperNodeMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string HyperNodeMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void HyperNodeMetadata::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool HyperNodeMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void HyperNodeMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

HyperNodeMetadata_ownerReference HyperNodeMetadata::getOwnerReference() const
{
    return ownerReference_;
}

void HyperNodeMetadata::setOwnerReference(const HyperNodeMetadata_ownerReference& value)
{
    ownerReference_ = value;
    ownerReferenceIsSet_ = true;
}

bool HyperNodeMetadata::ownerReferenceIsSet() const
{
    return ownerReferenceIsSet_;
}

void HyperNodeMetadata::unsetownerReference()
{
    ownerReferenceIsSet_ = false;
}

}
}
}
}
}


