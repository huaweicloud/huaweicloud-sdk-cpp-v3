

#include "huaweicloud/modelarts/v1/model/SyncImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SyncImageRequest::SyncImageRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
}

SyncImageRequest::~SyncImageRequest() = default;

void SyncImageRequest::validate()
{
}

web::json::value SyncImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }

    return val;
}
bool SyncImageRequest::fromJson(const web::json::value& val)
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


std::string SyncImageRequest::getImageId() const
{
    return imageId_;
}

void SyncImageRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool SyncImageRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void SyncImageRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

}
}
}
}
}


