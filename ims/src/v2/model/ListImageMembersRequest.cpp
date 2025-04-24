

#include "huaweicloud/ims/v2/model/ListImageMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImageMembersRequest::ListImageMembersRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
}

ListImageMembersRequest::~ListImageMembersRequest() = default;

void ListImageMembersRequest::validate()
{
}

web::json::value ListImageMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }

    return val;
}
bool ListImageMembersRequest::fromJson(const web::json::value& val)
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


std::string ListImageMembersRequest::getImageId() const
{
    return imageId_;
}

void ListImageMembersRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ListImageMembersRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ListImageMembersRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

}
}
}
}
}


