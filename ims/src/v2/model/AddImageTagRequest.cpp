

#include "huaweicloud/ims/v2/model/AddImageTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




AddImageTagRequest::AddImageTagRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddImageTagRequest::~AddImageTagRequest() = default;

void AddImageTagRequest::validate()
{
}

web::json::value AddImageTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool AddImageTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddImageTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddImageTagRequest::getImageId() const
{
    return imageId_;
}

void AddImageTagRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool AddImageTagRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void AddImageTagRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

AddImageTagRequestBody AddImageTagRequest::getBody() const
{
    return body_;
}

void AddImageTagRequest::setBody(const AddImageTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddImageTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddImageTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


