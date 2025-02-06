

#include "huaweicloud/identitycenterstore/v1/model/DescribeGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeGroupResponse::DescribeGroupResponse()
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

DescribeGroupResponse::~DescribeGroupResponse() = default;

void DescribeGroupResponse::validate()
{
}

web::json::value DescribeGroupResponse::toJson() const
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
bool DescribeGroupResponse::fromJson(const web::json::value& val)
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


std::string DescribeGroupResponse::getDescription() const
{
    return description_;
}

void DescribeGroupResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DescribeGroupResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DescribeGroupResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DescribeGroupResponse::getDisplayName() const
{
    return displayName_;
}

void DescribeGroupResponse::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool DescribeGroupResponse::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void DescribeGroupResponse::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string DescribeGroupResponse::getExternalId() const
{
    return externalId_;
}

void DescribeGroupResponse::setExternalId(const std::string& value)
{
    externalId_ = value;
    externalIdIsSet_ = true;
}

bool DescribeGroupResponse::externalIdIsSet() const
{
    return externalIdIsSet_;
}

void DescribeGroupResponse::unsetexternalId()
{
    externalIdIsSet_ = false;
}

std::vector<ExternalIdDto>& DescribeGroupResponse::getExternalIds()
{
    return externalIds_;
}

void DescribeGroupResponse::setExternalIds(const std::vector<ExternalIdDto>& value)
{
    externalIds_ = value;
    externalIdsIsSet_ = true;
}

bool DescribeGroupResponse::externalIdsIsSet() const
{
    return externalIdsIsSet_;
}

void DescribeGroupResponse::unsetexternalIds()
{
    externalIdsIsSet_ = false;
}

std::string DescribeGroupResponse::getGroupId() const
{
    return groupId_;
}

void DescribeGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DescribeGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DescribeGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DescribeGroupResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribeGroupResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribeGroupResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribeGroupResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

int64_t DescribeGroupResponse::getCreatedAt() const
{
    return createdAt_;
}

void DescribeGroupResponse::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DescribeGroupResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DescribeGroupResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string DescribeGroupResponse::getCreatedBy() const
{
    return createdBy_;
}

void DescribeGroupResponse::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool DescribeGroupResponse::createdByIsSet() const
{
    return createdByIsSet_;
}

void DescribeGroupResponse::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t DescribeGroupResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void DescribeGroupResponse::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DescribeGroupResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DescribeGroupResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string DescribeGroupResponse::getUpdatedBy() const
{
    return updatedBy_;
}

void DescribeGroupResponse::setUpdatedBy(const std::string& value)
{
    updatedBy_ = value;
    updatedByIsSet_ = true;
}

bool DescribeGroupResponse::updatedByIsSet() const
{
    return updatedByIsSet_;
}

void DescribeGroupResponse::unsetupdatedBy()
{
    updatedByIsSet_ = false;
}

}
}
}
}
}


