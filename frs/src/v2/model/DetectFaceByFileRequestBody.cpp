

#include "huaweicloud/frs/v2/model/DetectFaceByFileRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByFileRequestBody::DetectFaceByFileRequestBody()
{
    imageFileIsSet_ = false;
    attributes_ = "";
    attributesIsSet_ = false;
}

DetectFaceByFileRequestBody::~DetectFaceByFileRequestBody() = default;

void DetectFaceByFileRequestBody::validate()
{
}

web::json::value DetectFaceByFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}

bool DetectFaceByFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}

HttpContent DetectFaceByFileRequestBody::getImageFile() const
{
    return imageFile_;
}

void DetectFaceByFileRequestBody::setImageFile(const HttpContent& value)
{
    imageFile_ = value;
    imageFileIsSet_ = true;
}

bool DetectFaceByFileRequestBody::imageFileIsSet() const
{
    return imageFileIsSet_;
}

void DetectFaceByFileRequestBody::unsetimageFile()
{
    imageFileIsSet_ = false;
}

std::string DetectFaceByFileRequestBody::getAttributes() const
{
    return attributes_;
}

void DetectFaceByFileRequestBody::setAttributes(const std::string& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool DetectFaceByFileRequestBody::attributesIsSet() const
{
    return attributesIsSet_;
}

void DetectFaceByFileRequestBody::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


