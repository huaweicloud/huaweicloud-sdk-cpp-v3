

#include "huaweicloud/ram/v1/model/ResourceShareInvitation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ResourceShareInvitation::ResourceShareInvitation()
{
    receiverAccountId_ = "";
    receiverAccountIdIsSet_ = false;
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    resourceShareName_ = "";
    resourceShareNameIsSet_ = false;
    resourceShareInvitationId_ = "";
    resourceShareInvitationIdIsSet_ = false;
    senderAccountId_ = "";
    senderAccountIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

ResourceShareInvitation::~ResourceShareInvitation() = default;

void ResourceShareInvitation::validate()
{
}

web::json::value ResourceShareInvitation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(receiverAccountIdIsSet_) {
        val[utility::conversions::to_string_t("receiver_account_id")] = ModelBase::toJson(receiverAccountId_);
    }
    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }
    if(resourceShareNameIsSet_) {
        val[utility::conversions::to_string_t("resource_share_name")] = ModelBase::toJson(resourceShareName_);
    }
    if(resourceShareInvitationIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_invitation_id")] = ModelBase::toJson(resourceShareInvitationId_);
    }
    if(senderAccountIdIsSet_) {
        val[utility::conversions::to_string_t("sender_account_id")] = ModelBase::toJson(senderAccountId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ResourceShareInvitation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("receiver_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receiver_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceiverAccountId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_share_invitation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_invitation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareInvitationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sender_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sender_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSenderAccountId(refVal);
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
    return ok;
}


std::string ResourceShareInvitation::getReceiverAccountId() const
{
    return receiverAccountId_;
}

void ResourceShareInvitation::setReceiverAccountId(const std::string& value)
{
    receiverAccountId_ = value;
    receiverAccountIdIsSet_ = true;
}

bool ResourceShareInvitation::receiverAccountIdIsSet() const
{
    return receiverAccountIdIsSet_;
}

void ResourceShareInvitation::unsetreceiverAccountId()
{
    receiverAccountIdIsSet_ = false;
}

std::string ResourceShareInvitation::getResourceShareId() const
{
    return resourceShareId_;
}

void ResourceShareInvitation::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool ResourceShareInvitation::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void ResourceShareInvitation::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

std::string ResourceShareInvitation::getResourceShareName() const
{
    return resourceShareName_;
}

void ResourceShareInvitation::setResourceShareName(const std::string& value)
{
    resourceShareName_ = value;
    resourceShareNameIsSet_ = true;
}

bool ResourceShareInvitation::resourceShareNameIsSet() const
{
    return resourceShareNameIsSet_;
}

void ResourceShareInvitation::unsetresourceShareName()
{
    resourceShareNameIsSet_ = false;
}

std::string ResourceShareInvitation::getResourceShareInvitationId() const
{
    return resourceShareInvitationId_;
}

void ResourceShareInvitation::setResourceShareInvitationId(const std::string& value)
{
    resourceShareInvitationId_ = value;
    resourceShareInvitationIdIsSet_ = true;
}

bool ResourceShareInvitation::resourceShareInvitationIdIsSet() const
{
    return resourceShareInvitationIdIsSet_;
}

void ResourceShareInvitation::unsetresourceShareInvitationId()
{
    resourceShareInvitationIdIsSet_ = false;
}

std::string ResourceShareInvitation::getSenderAccountId() const
{
    return senderAccountId_;
}

void ResourceShareInvitation::setSenderAccountId(const std::string& value)
{
    senderAccountId_ = value;
    senderAccountIdIsSet_ = true;
}

bool ResourceShareInvitation::senderAccountIdIsSet() const
{
    return senderAccountIdIsSet_;
}

void ResourceShareInvitation::unsetsenderAccountId()
{
    senderAccountIdIsSet_ = false;
}

std::string ResourceShareInvitation::getStatus() const
{
    return status_;
}

void ResourceShareInvitation::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResourceShareInvitation::statusIsSet() const
{
    return statusIsSet_;
}

void ResourceShareInvitation::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime ResourceShareInvitation::getCreatedAt() const
{
    return createdAt_;
}

void ResourceShareInvitation::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ResourceShareInvitation::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ResourceShareInvitation::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ResourceShareInvitation::getUpdatedAt() const
{
    return updatedAt_;
}

void ResourceShareInvitation::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ResourceShareInvitation::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ResourceShareInvitation::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


