

#include "huaweicloud/ims/v2/model/GlanceImageMembers.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceImageMembers::GlanceImageMembers()
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

GlanceImageMembers::~GlanceImageMembers() = default;

void GlanceImageMembers::validate()
{
}

web::json::value GlanceImageMembers::toJson() const
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
bool GlanceImageMembers::fromJson(const web::json::value& val)
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


std::string GlanceImageMembers::getStatus() const
{
    return status_;
}

void GlanceImageMembers::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GlanceImageMembers::statusIsSet() const
{
    return statusIsSet_;
}

void GlanceImageMembers::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GlanceImageMembers::getCreatedAt() const
{
    return createdAt_;
}

void GlanceImageMembers::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GlanceImageMembers::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GlanceImageMembers::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GlanceImageMembers::getUpdatedAt() const
{
    return updatedAt_;
}

void GlanceImageMembers::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GlanceImageMembers::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GlanceImageMembers::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GlanceImageMembers::getImageId() const
{
    return imageId_;
}

void GlanceImageMembers::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceImageMembers::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceImageMembers::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GlanceImageMembers::getMemberId() const
{
    return memberId_;
}

void GlanceImageMembers::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GlanceImageMembers::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GlanceImageMembers::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string GlanceImageMembers::getSchema() const
{
    return schema_;
}

void GlanceImageMembers::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GlanceImageMembers::schemaIsSet() const
{
    return schemaIsSet_;
}

void GlanceImageMembers::unsetschema()
{
    schemaIsSet_ = false;
}

std::string GlanceImageMembers::getMemberType() const
{
    return memberType_;
}

void GlanceImageMembers::setMemberType(const std::string& value)
{
    memberType_ = value;
    memberTypeIsSet_ = true;
}

bool GlanceImageMembers::memberTypeIsSet() const
{
    return memberTypeIsSet_;
}

void GlanceImageMembers::unsetmemberType()
{
    memberTypeIsSet_ = false;
}

std::string GlanceImageMembers::getUrn() const
{
    return urn_;
}

void GlanceImageMembers::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool GlanceImageMembers::urnIsSet() const
{
    return urnIsSet_;
}

void GlanceImageMembers::unseturn()
{
    urnIsSet_ = false;
}

}
}
}
}
}


