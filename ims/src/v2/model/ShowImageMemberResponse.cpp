

#include "huaweicloud/ims/v2/model/ShowImageMemberResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ShowImageMemberResponse::ShowImageMemberResponse()
{
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    memberId_ = "";
    memberIdIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    memberType_ = "";
    memberTypeIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
}

ShowImageMemberResponse::~ShowImageMemberResponse() = default;

void ShowImageMemberResponse::validate()
{
}

web::json::value ShowImageMemberResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(memberTypeIsSet_) {
        val[utility::conversions::to_string_t("member_type")] = ModelBase::toJson(memberType_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }

    return val;
}
bool ShowImageMemberResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
        }
    }
    return ok;
}


std::string ShowImageMemberResponse::getStatus() const
{
    return status_;
}

void ShowImageMemberResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowImageMemberResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowImageMemberResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowImageMemberResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowImageMemberResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowImageMemberResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowImageMemberResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowImageMemberResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowImageMemberResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowImageMemberResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowImageMemberResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ShowImageMemberResponse::getImageId() const
{
    return imageId_;
}

void ShowImageMemberResponse::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ShowImageMemberResponse::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ShowImageMemberResponse::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ShowImageMemberResponse::getMemberId() const
{
    return memberId_;
}

void ShowImageMemberResponse::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool ShowImageMemberResponse::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void ShowImageMemberResponse::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string ShowImageMemberResponse::getSchema() const
{
    return schema_;
}

void ShowImageMemberResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool ShowImageMemberResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void ShowImageMemberResponse::unsetschema()
{
    schemaIsSet_ = false;
}

std::string ShowImageMemberResponse::getMemberType() const
{
    return memberType_;
}

void ShowImageMemberResponse::setMemberType(const std::string& value)
{
    memberType_ = value;
    memberTypeIsSet_ = true;
}

bool ShowImageMemberResponse::memberTypeIsSet() const
{
    return memberTypeIsSet_;
}

void ShowImageMemberResponse::unsetmemberType()
{
    memberTypeIsSet_ = false;
}

std::string ShowImageMemberResponse::getUrn() const
{
    return urn_;
}

void ShowImageMemberResponse::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool ShowImageMemberResponse::urnIsSet() const
{
    return urnIsSet_;
}

void ShowImageMemberResponse::unseturn()
{
    urnIsSet_ = false;
}

}
}
}
}
}


