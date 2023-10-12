

#include "huaweicloud/ims/v2/model/SubJobEntities.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




SubJobEntities::SubJobEntities()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
}

SubJobEntities::~SubJobEntities() = default;

void SubJobEntities::validate()
{
}

web::json::value SubJobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }

    return val;
}
bool SubJobEntities::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    return ok;
}


std::string SubJobEntities::getImageId() const
{
    return imageId_;
}

void SubJobEntities::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool SubJobEntities::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void SubJobEntities::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string SubJobEntities::getImageName() const
{
    return imageName_;
}

void SubJobEntities::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool SubJobEntities::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void SubJobEntities::unsetimageName()
{
    imageNameIsSet_ = false;
}

}
}
}
}
}


