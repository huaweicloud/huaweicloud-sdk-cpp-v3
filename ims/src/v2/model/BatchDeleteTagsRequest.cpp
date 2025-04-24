

#include "huaweicloud/ims/v2/model/BatchDeleteTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchDeleteTagsRequest::BatchDeleteTagsRequest()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteTagsRequest::~BatchDeleteTagsRequest() = default;

void BatchDeleteTagsRequest::validate()
{
}

web::json::value BatchDeleteTagsRequest::toJson() const
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
bool BatchDeleteTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteTagsRequest::getImageId() const
{
    return imageId_;
}

void BatchDeleteTagsRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool BatchDeleteTagsRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void BatchDeleteTagsRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

BatchDeleteTagsRequestBody BatchDeleteTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteTagsRequest::setBody(const BatchDeleteTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


