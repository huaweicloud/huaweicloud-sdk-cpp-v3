

#include "huaweicloud/ims/v2/model/GlanceUpdateImageMemberRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceUpdateImageMemberRequest::GlanceUpdateImageMemberRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    memberId_ = "";
    memberIdIsSet_ = false;
    bodyIsSet_ = false;
}

GlanceUpdateImageMemberRequest::~GlanceUpdateImageMemberRequest() = default;

void GlanceUpdateImageMemberRequest::validate()
{
}

web::json::value GlanceUpdateImageMemberRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool GlanceUpdateImageMemberRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GlanceUpdateImageMemberRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string GlanceUpdateImageMemberRequest::getImageId() const
{
    return imageId_;
}

void GlanceUpdateImageMemberRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceUpdateImageMemberRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceUpdateImageMemberRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GlanceUpdateImageMemberRequest::getMemberId() const
{
    return memberId_;
}

void GlanceUpdateImageMemberRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GlanceUpdateImageMemberRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GlanceUpdateImageMemberRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

GlanceUpdateImageMemberRequestBody GlanceUpdateImageMemberRequest::getBody() const
{
    return body_;
}

void GlanceUpdateImageMemberRequest::setBody(const GlanceUpdateImageMemberRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool GlanceUpdateImageMemberRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void GlanceUpdateImageMemberRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


