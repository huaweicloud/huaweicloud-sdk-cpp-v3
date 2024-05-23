

#include "huaweicloud/ram/v1/model/ResourceShareAssociation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ResourceShareAssociation::ResourceShareAssociation()
{
    associatedEntity_ = "";
    associatedEntityIsSet_ = false;
    associationType_ = "";
    associationTypeIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    external_ = false;
    externalIsSet_ = false;
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    resourceShareName_ = "";
    resourceShareNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statusMessage_ = "";
    statusMessageIsSet_ = false;
}

ResourceShareAssociation::~ResourceShareAssociation() = default;

void ResourceShareAssociation::validate()
{
}

web::json::value ResourceShareAssociation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associatedEntityIsSet_) {
        val[utility::conversions::to_string_t("associated_entity")] = ModelBase::toJson(associatedEntity_);
    }
    if(associationTypeIsSet_) {
        val[utility::conversions::to_string_t("association_type")] = ModelBase::toJson(associationType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(externalIsSet_) {
        val[utility::conversions::to_string_t("external")] = ModelBase::toJson(external_);
    }
    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }
    if(resourceShareNameIsSet_) {
        val[utility::conversions::to_string_t("resource_share_name")] = ModelBase::toJson(resourceShareName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusMessageIsSet_) {
        val[utility::conversions::to_string_t("status_message")] = ModelBase::toJson(statusMessage_);
    }

    return val;
}
bool ResourceShareAssociation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associated_entity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_entity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedEntity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("association_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("association_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_share_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_share_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusMessage(refVal);
        }
    }
    return ok;
}


std::string ResourceShareAssociation::getAssociatedEntity() const
{
    return associatedEntity_;
}

void ResourceShareAssociation::setAssociatedEntity(const std::string& value)
{
    associatedEntity_ = value;
    associatedEntityIsSet_ = true;
}

bool ResourceShareAssociation::associatedEntityIsSet() const
{
    return associatedEntityIsSet_;
}

void ResourceShareAssociation::unsetassociatedEntity()
{
    associatedEntityIsSet_ = false;
}

std::string ResourceShareAssociation::getAssociationType() const
{
    return associationType_;
}

void ResourceShareAssociation::setAssociationType(const std::string& value)
{
    associationType_ = value;
    associationTypeIsSet_ = true;
}

bool ResourceShareAssociation::associationTypeIsSet() const
{
    return associationTypeIsSet_;
}

void ResourceShareAssociation::unsetassociationType()
{
    associationTypeIsSet_ = false;
}

utility::datetime ResourceShareAssociation::getCreatedAt() const
{
    return createdAt_;
}

void ResourceShareAssociation::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ResourceShareAssociation::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ResourceShareAssociation::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ResourceShareAssociation::getUpdatedAt() const
{
    return updatedAt_;
}

void ResourceShareAssociation::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ResourceShareAssociation::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ResourceShareAssociation::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ResourceShareAssociation::isExternal() const
{
    return external_;
}

void ResourceShareAssociation::setExternal(bool value)
{
    external_ = value;
    externalIsSet_ = true;
}

bool ResourceShareAssociation::externalIsSet() const
{
    return externalIsSet_;
}

void ResourceShareAssociation::unsetexternal()
{
    externalIsSet_ = false;
}

std::string ResourceShareAssociation::getResourceShareId() const
{
    return resourceShareId_;
}

void ResourceShareAssociation::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool ResourceShareAssociation::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void ResourceShareAssociation::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

std::string ResourceShareAssociation::getResourceShareName() const
{
    return resourceShareName_;
}

void ResourceShareAssociation::setResourceShareName(const std::string& value)
{
    resourceShareName_ = value;
    resourceShareNameIsSet_ = true;
}

bool ResourceShareAssociation::resourceShareNameIsSet() const
{
    return resourceShareNameIsSet_;
}

void ResourceShareAssociation::unsetresourceShareName()
{
    resourceShareNameIsSet_ = false;
}

std::string ResourceShareAssociation::getStatus() const
{
    return status_;
}

void ResourceShareAssociation::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResourceShareAssociation::statusIsSet() const
{
    return statusIsSet_;
}

void ResourceShareAssociation::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ResourceShareAssociation::getStatusMessage() const
{
    return statusMessage_;
}

void ResourceShareAssociation::setStatusMessage(const std::string& value)
{
    statusMessage_ = value;
    statusMessageIsSet_ = true;
}

bool ResourceShareAssociation::statusMessageIsSet() const
{
    return statusMessageIsSet_;
}

void ResourceShareAssociation::unsetstatusMessage()
{
    statusMessageIsSet_ = false;
}

}
}
}
}
}


