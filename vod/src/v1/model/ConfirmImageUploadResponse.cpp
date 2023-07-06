

#include "huaweicloud/vod/v1/model/ConfirmImageUploadResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ConfirmImageUploadResponse::ConfirmImageUploadResponse()
{
    id_ = "";
    idIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
}

ConfirmImageUploadResponse::~ConfirmImageUploadResponse() = default;

void ConfirmImageUploadResponse::validate()
{
}

web::json::value ConfirmImageUploadResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }

    return val;
}

bool ConfirmImageUploadResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
        }
    }
    return ok;
}

std::string ConfirmImageUploadResponse::getId() const
{
    return id_;
}

void ConfirmImageUploadResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConfirmImageUploadResponse::idIsSet() const
{
    return idIsSet_;
}

void ConfirmImageUploadResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ConfirmImageUploadResponse::getImageUrl() const
{
    return imageUrl_;
}

void ConfirmImageUploadResponse::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool ConfirmImageUploadResponse::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void ConfirmImageUploadResponse::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

}
}
}
}
}


