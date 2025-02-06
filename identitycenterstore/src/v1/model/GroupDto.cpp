

#include "huaweicloud/identitycenterstore/v1/model/GroupDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GroupDto::GroupDto()
{
    description_ = "";
    descriptionIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    externalId_ = "";
    externalIdIsSet_ = false;
    externalIdsIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    updatedAt_ = 0L;
    updatedAtIsSet_ = false;
    updatedBy_ = "";
    updatedByIsSet_ = false;
}

GroupDto::~GroupDto() = default;

void GroupDto::validate()
{
}

web::json::value GroupDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(externalIdIsSet_) {
        val[utility::conversions::to_string_t("external_id")] = ModelBase::toJson(externalId_);
    }
    if(externalIdsIsSet_) {
        val[utility::conversions::to_string_t("external_ids")] = ModelBase::toJson(externalIds_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(updatedByIsSet_) {
        val[utility::conversions::to_string_t("updated_by")] = ModelBase::toJson(updatedBy_);
    }

    return val;
}
bool GroupDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<ExternalIdDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedBy(refVal);
        }
    }
    return ok;
}


std::string GroupDto::getDescription() const
{
    return description_;
}

void GroupDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GroupDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GroupDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string GroupDto::getDisplayName() const
{
    return displayName_;
}

void GroupDto::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool GroupDto::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void GroupDto::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string GroupDto::getExternalId() const
{
    return externalId_;
}

void GroupDto::setExternalId(const std::string& value)
{
    externalId_ = value;
    externalIdIsSet_ = true;
}

bool GroupDto::externalIdIsSet() const
{
    return externalIdIsSet_;
}

void GroupDto::unsetexternalId()
{
    externalIdIsSet_ = false;
}

std::vector<ExternalIdDto>& GroupDto::getExternalIds()
{
    return externalIds_;
}

void GroupDto::setExternalIds(const std::vector<ExternalIdDto>& value)
{
    externalIds_ = value;
    externalIdsIsSet_ = true;
}

bool GroupDto::externalIdsIsSet() const
{
    return externalIdsIsSet_;
}

void GroupDto::unsetexternalIds()
{
    externalIdsIsSet_ = false;
}

std::string GroupDto::getGroupId() const
{
    return groupId_;
}

void GroupDto::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GroupDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GroupDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string GroupDto::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GroupDto::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GroupDto::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GroupDto::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

int64_t GroupDto::getCreatedAt() const
{
    return createdAt_;
}

void GroupDto::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GroupDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GroupDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GroupDto::getCreatedBy() const
{
    return createdBy_;
}

void GroupDto::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool GroupDto::createdByIsSet() const
{
    return createdByIsSet_;
}

void GroupDto::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t GroupDto::getUpdatedAt() const
{
    return updatedAt_;
}

void GroupDto::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GroupDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GroupDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GroupDto::getUpdatedBy() const
{
    return updatedBy_;
}

void GroupDto::setUpdatedBy(const std::string& value)
{
    updatedBy_ = value;
    updatedByIsSet_ = true;
}

bool GroupDto::updatedByIsSet() const
{
    return updatedByIsSet_;
}

void GroupDto::unsetupdatedBy()
{
    updatedByIsSet_ = false;
}

}
}
}
}
}


