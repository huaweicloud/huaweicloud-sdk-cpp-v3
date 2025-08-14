

#include "huaweicloud/identitycenterstore/v1/model/DescribeGroupResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeGroupResp::DescribeGroupResp()
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

DescribeGroupResp::~DescribeGroupResp() = default;

void DescribeGroupResp::validate()
{
}

web::json::value DescribeGroupResp::toJson() const
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
bool DescribeGroupResp::fromJson(const web::json::value& val)
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


std::string DescribeGroupResp::getDescription() const
{
    return description_;
}

void DescribeGroupResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DescribeGroupResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DescribeGroupResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string DescribeGroupResp::getDisplayName() const
{
    return displayName_;
}

void DescribeGroupResp::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool DescribeGroupResp::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void DescribeGroupResp::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string DescribeGroupResp::getExternalId() const
{
    return externalId_;
}

void DescribeGroupResp::setExternalId(const std::string& value)
{
    externalId_ = value;
    externalIdIsSet_ = true;
}

bool DescribeGroupResp::externalIdIsSet() const
{
    return externalIdIsSet_;
}

void DescribeGroupResp::unsetexternalId()
{
    externalIdIsSet_ = false;
}

std::vector<ExternalIdDto>& DescribeGroupResp::getExternalIds()
{
    return externalIds_;
}

void DescribeGroupResp::setExternalIds(const std::vector<ExternalIdDto>& value)
{
    externalIds_ = value;
    externalIdsIsSet_ = true;
}

bool DescribeGroupResp::externalIdsIsSet() const
{
    return externalIdsIsSet_;
}

void DescribeGroupResp::unsetexternalIds()
{
    externalIdsIsSet_ = false;
}

std::string DescribeGroupResp::getGroupId() const
{
    return groupId_;
}

void DescribeGroupResp::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DescribeGroupResp::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DescribeGroupResp::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DescribeGroupResp::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribeGroupResp::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribeGroupResp::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribeGroupResp::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

int64_t DescribeGroupResp::getCreatedAt() const
{
    return createdAt_;
}

void DescribeGroupResp::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DescribeGroupResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DescribeGroupResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string DescribeGroupResp::getCreatedBy() const
{
    return createdBy_;
}

void DescribeGroupResp::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool DescribeGroupResp::createdByIsSet() const
{
    return createdByIsSet_;
}

void DescribeGroupResp::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

int64_t DescribeGroupResp::getUpdatedAt() const
{
    return updatedAt_;
}

void DescribeGroupResp::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DescribeGroupResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DescribeGroupResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string DescribeGroupResp::getUpdatedBy() const
{
    return updatedBy_;
}

void DescribeGroupResp::setUpdatedBy(const std::string& value)
{
    updatedBy_ = value;
    updatedByIsSet_ = true;
}

bool DescribeGroupResp::updatedByIsSet() const
{
    return updatedByIsSet_;
}

void DescribeGroupResp::unsetupdatedBy()
{
    updatedByIsSet_ = false;
}

}
}
}
}
}


