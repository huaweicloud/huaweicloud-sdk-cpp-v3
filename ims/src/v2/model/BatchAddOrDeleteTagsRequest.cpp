

#include "huaweicloud/ims/v2/model/BatchAddOrDeleteTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchAddOrDeleteTagsRequest::BatchAddOrDeleteTagsRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddOrDeleteTagsRequest::~BatchAddOrDeleteTagsRequest() = default;

void BatchAddOrDeleteTagsRequest::validate()
{
}

web::json::value BatchAddOrDeleteTagsRequest::toJson() const
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
bool BatchAddOrDeleteTagsRequest::fromJson(const web::json::value& val)
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
            BatchAddOrDeleteTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddOrDeleteTagsRequest::getImageId() const
{
    return imageId_;
}

void BatchAddOrDeleteTagsRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool BatchAddOrDeleteTagsRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void BatchAddOrDeleteTagsRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

BatchAddOrDeleteTagsRequestBody BatchAddOrDeleteTagsRequest::getBody() const
{
    return body_;
}

void BatchAddOrDeleteTagsRequest::setBody(const BatchAddOrDeleteTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddOrDeleteTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddOrDeleteTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


