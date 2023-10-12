

#include "huaweicloud/ims/v2/model/GlanceListImageMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceListImageMembersRequest::GlanceListImageMembersRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
}

GlanceListImageMembersRequest::~GlanceListImageMembersRequest() = default;

void GlanceListImageMembersRequest::validate()
{
}

web::json::value GlanceListImageMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }

    return val;
}
bool GlanceListImageMembersRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GlanceListImageMembersRequest::getImageId() const
{
    return imageId_;
}

void GlanceListImageMembersRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GlanceListImageMembersRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GlanceListImageMembersRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

}
}
}
}
}


