

#include "huaweicloud/ims/v2/model/DeleteImageTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




DeleteImageTagRequest::DeleteImageTagRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeleteImageTagRequest::~DeleteImageTagRequest() = default;

void DeleteImageTagRequest::validate()
{
}

web::json::value DeleteImageTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}

bool DeleteImageTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string DeleteImageTagRequest::getImageId() const
{
    return imageId_;
}

void DeleteImageTagRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool DeleteImageTagRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void DeleteImageTagRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string DeleteImageTagRequest::getKey() const
{
    return key_;
}

void DeleteImageTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteImageTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteImageTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


