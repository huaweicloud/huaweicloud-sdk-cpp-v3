

#include "huaweicloud/ram/v1/model/BatchCreateResourceShareTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




BatchCreateResourceShareTagsRequest::BatchCreateResourceShareTagsRequest()
{
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateResourceShareTagsRequest::~BatchCreateResourceShareTagsRequest() = default;

void BatchCreateResourceShareTagsRequest::validate()
{
}

web::json::value BatchCreateResourceShareTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateResourceShareTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TagResourceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateResourceShareTagsRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void BatchCreateResourceShareTagsRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool BatchCreateResourceShareTagsRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void BatchCreateResourceShareTagsRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

TagResourceReqBody BatchCreateResourceShareTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateResourceShareTagsRequest::setBody(const TagResourceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateResourceShareTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateResourceShareTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


