

#include "huaweicloud/ims/v2/model/GlanceDeleteImageMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceDeleteImageMemberRequest::GlanceDeleteImageMemberRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    memberId_ = "";
    memberIdIsSet_ = false;
}

GlanceDeleteImageMemberRequest::~GlanceDeleteImageMemberRequest() = default;

void GlanceDeleteImageMemberRequest::validate()
{
}

web::json::value GlanceDeleteImageMemberRequest::toJson() const
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
bool GlanceDeleteImageMemberRequest::fromJson(const web::json::value& val)
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


std::string GlanceDeleteImageMemberRequest::getImageId() const
{
    return imageId_;
}

void GlanceDeleteImageMemberRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceDeleteImageMemberRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceDeleteImageMemberRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GlanceDeleteImageMemberRequest::getMemberId() const
{
    return memberId_;
}

void GlanceDeleteImageMemberRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GlanceDeleteImageMemberRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GlanceDeleteImageMemberRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

}
}
}
}
}


