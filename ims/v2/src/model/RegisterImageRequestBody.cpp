

#include "huaweicloud/ims/model/RegisterImageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




RegisterImageRequestBody::RegisterImageRequestBody()
{
    imageUrl_ = "";
    imageUrlIsSet_ = false;
}

RegisterImageRequestBody::~RegisterImageRequestBody() = default;

void RegisterImageRequestBody::validate()
{
}

web::json::value RegisterImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }

    return val;
}

bool RegisterImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string RegisterImageRequestBody::getImageUrl() const
{
    return imageUrl_;
}

void RegisterImageRequestBody::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool RegisterImageRequestBody::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void RegisterImageRequestBody::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

}
}
}
}
}


