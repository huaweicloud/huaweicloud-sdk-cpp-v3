

#include "huaweicloud/ims/v2/model/GlanceUpdateImageMemberResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceUpdateImageMemberResponse::GlanceUpdateImageMemberResponse()
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
}

GlanceUpdateImageMemberResponse::~GlanceUpdateImageMemberResponse() = default;

void GlanceUpdateImageMemberResponse::validate()
{
}

web::json::value GlanceUpdateImageMemberResponse::toJson() const
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

    return val;
}

bool GlanceUpdateImageMemberResponse::fromJson(const web::json::value& val)
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
    return ok;
}

std::string GlanceUpdateImageMemberResponse::getStatus() const
{
    return status_;
}

void GlanceUpdateImageMemberResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GlanceUpdateImageMemberResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GlanceUpdateImageMemberResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GlanceUpdateImageMemberResponse::getCreatedAt() const
{
    return createdAt_;
}

void GlanceUpdateImageMemberResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GlanceUpdateImageMemberResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GlanceUpdateImageMemberResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GlanceUpdateImageMemberResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void GlanceUpdateImageMemberResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GlanceUpdateImageMemberResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GlanceUpdateImageMemberResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GlanceUpdateImageMemberResponse::getImageId() const
{
    return imageId_;
}

void GlanceUpdateImageMemberResponse::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceUpdateImageMemberResponse::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceUpdateImageMemberResponse::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GlanceUpdateImageMemberResponse::getMemberId() const
{
    return memberId_;
}

void GlanceUpdateImageMemberResponse::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GlanceUpdateImageMemberResponse::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GlanceUpdateImageMemberResponse::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string GlanceUpdateImageMemberResponse::getSchema() const
{
    return schema_;
}

void GlanceUpdateImageMemberResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GlanceUpdateImageMemberResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void GlanceUpdateImageMemberResponse::unsetschema()
{
    schemaIsSet_ = false;
}

}
}
}
}
}


