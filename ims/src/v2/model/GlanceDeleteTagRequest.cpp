

#include "huaweicloud/ims/v2/model/GlanceDeleteTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceDeleteTagRequest::GlanceDeleteTagRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
}

GlanceDeleteTagRequest::~GlanceDeleteTagRequest() = default;

void GlanceDeleteTagRequest::validate()
{
}

web::json::value GlanceDeleteTagRequest::toJson() const
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

bool GlanceDeleteTagRequest::fromJson(const web::json::value& val)
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


std::string GlanceDeleteTagRequest::getImageId() const
{
    return imageId_;
}

void GlanceDeleteTagRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceDeleteTagRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceDeleteTagRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GlanceDeleteTagRequest::getTag() const
{
    return tag_;
}

void GlanceDeleteTagRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool GlanceDeleteTagRequest::tagIsSet() const
{
    return tagIsSet_;
}

void GlanceDeleteTagRequest::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


