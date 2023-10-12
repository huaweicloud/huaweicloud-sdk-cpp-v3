

#include "huaweicloud/ims/v2/model/GlanceCreateTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceCreateTagRequest::GlanceCreateTagRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
}

GlanceCreateTagRequest::~GlanceCreateTagRequest() = default;

void GlanceCreateTagRequest::validate()
{
}

web::json::value GlanceCreateTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool GlanceCreateTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}


std::string GlanceCreateTagRequest::getImageId() const
{
    return imageId_;
}

void GlanceCreateTagRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceCreateTagRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceCreateTagRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GlanceCreateTagRequest::getTag() const
{
    return tag_;
}

void GlanceCreateTagRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool GlanceCreateTagRequest::tagIsSet() const
{
    return tagIsSet_;
}

void GlanceCreateTagRequest::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


