

#include "huaweicloud/ims/v2/model/ShowImageMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ShowImageMemberRequest::ShowImageMemberRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    memberId_ = "";
    memberIdIsSet_ = false;
}

ShowImageMemberRequest::~ShowImageMemberRequest() = default;

void ShowImageMemberRequest::validate()
{
}

web::json::value ShowImageMemberRequest::toJson() const
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
bool ShowImageMemberRequest::fromJson(const web::json::value& val)
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


std::string ShowImageMemberRequest::getImageId() const
{
    return imageId_;
}

void ShowImageMemberRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ShowImageMemberRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ShowImageMemberRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ShowImageMemberRequest::getMemberId() const
{
    return memberId_;
}

void ShowImageMemberRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool ShowImageMemberRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void ShowImageMemberRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

}
}
}
}
}


