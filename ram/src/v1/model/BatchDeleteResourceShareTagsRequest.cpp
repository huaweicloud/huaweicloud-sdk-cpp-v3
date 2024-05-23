

#include "huaweicloud/ram/v1/model/BatchDeleteResourceShareTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




BatchDeleteResourceShareTagsRequest::BatchDeleteResourceShareTagsRequest()
{
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteResourceShareTagsRequest::~BatchDeleteResourceShareTagsRequest() = default;

void BatchDeleteResourceShareTagsRequest::validate()
{
}

web::json::value BatchDeleteResourceShareTagsRequest::toJson() const
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
bool BatchDeleteResourceShareTagsRequest::fromJson(const web::json::value& val)
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
            UntagResourceReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteResourceShareTagsRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void BatchDeleteResourceShareTagsRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool BatchDeleteResourceShareTagsRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void BatchDeleteResourceShareTagsRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

UntagResourceReqBody BatchDeleteResourceShareTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteResourceShareTagsRequest::setBody(const UntagResourceReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteResourceShareTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteResourceShareTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


