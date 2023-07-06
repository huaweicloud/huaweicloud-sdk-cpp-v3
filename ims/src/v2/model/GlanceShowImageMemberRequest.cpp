

#include "huaweicloud/ims/v2/model/GlanceShowImageMemberRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceShowImageMemberRequest::GlanceShowImageMemberRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    memberId_ = "";
    memberIdIsSet_ = false;
}

GlanceShowImageMemberRequest::~GlanceShowImageMemberRequest() = default;

void GlanceShowImageMemberRequest::validate()
{
}

web::json::value GlanceShowImageMemberRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }

    return val;
}

bool GlanceShowImageMemberRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string GlanceShowImageMemberRequest::getImageId() const
{
    return imageId_;
}

void GlanceShowImageMemberRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceShowImageMemberRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceShowImageMemberRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GlanceShowImageMemberRequest::getMemberId() const
{
    return memberId_;
}

void GlanceShowImageMemberRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GlanceShowImageMemberRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GlanceShowImageMemberRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

}
}
}
}
}


