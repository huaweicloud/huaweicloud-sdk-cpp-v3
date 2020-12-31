

#include "huaweicloud/ims/model/GlanceShowImageMemberResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceShowImageMemberResponse::GlanceShowImageMemberResponse()
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

GlanceShowImageMemberResponse::~GlanceShowImageMemberResponse() = default;

void GlanceShowImageMemberResponse::validate()
{
}

web::json::value GlanceShowImageMemberResponse::toJson() const
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

bool GlanceShowImageMemberResponse::fromJson(const web::json::value& val)
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


std::string GlanceShowImageMemberResponse::getStatus() const
{
    return status_;
}

void GlanceShowImageMemberResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GlanceShowImageMemberResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GlanceShowImageMemberResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GlanceShowImageMemberResponse::getCreatedAt() const
{
    return createdAt_;
}

void GlanceShowImageMemberResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GlanceShowImageMemberResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GlanceShowImageMemberResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GlanceShowImageMemberResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void GlanceShowImageMemberResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GlanceShowImageMemberResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GlanceShowImageMemberResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GlanceShowImageMemberResponse::getImageId() const
{
    return imageId_;
}

void GlanceShowImageMemberResponse::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceShowImageMemberResponse::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceShowImageMemberResponse::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GlanceShowImageMemberResponse::getMemberId() const
{
    return memberId_;
}

void GlanceShowImageMemberResponse::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GlanceShowImageMemberResponse::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GlanceShowImageMemberResponse::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string GlanceShowImageMemberResponse::getSchema() const
{
    return schema_;
}

void GlanceShowImageMemberResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GlanceShowImageMemberResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void GlanceShowImageMemberResponse::unsetschema()
{
    schemaIsSet_ = false;
}

}
}
}
}
}


