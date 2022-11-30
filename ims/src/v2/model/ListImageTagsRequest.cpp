

#include "huaweicloud/ims/v2/model/ListImageTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImageTagsRequest::ListImageTagsRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
}

ListImageTagsRequest::~ListImageTagsRequest() = default;

void ListImageTagsRequest::validate()
{
}

web::json::value ListImageTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }

    return val;
}

bool ListImageTagsRequest::fromJson(const web::json::value& val)
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


std::string ListImageTagsRequest::getImageId() const
{
    return imageId_;
}

void ListImageTagsRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ListImageTagsRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ListImageTagsRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

}
}
}
}
}


