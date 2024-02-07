

#include "huaweicloud/geip/v3/model/BatchCreateGlobalEipTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGlobalEipTagsRequest::BatchCreateGlobalEipTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateGlobalEipTagsRequest::~BatchCreateGlobalEipTagsRequest() = default;

void BatchCreateGlobalEipTagsRequest::validate()
{
}

web::json::value BatchCreateGlobalEipTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateGlobalEipTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateV2RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateGlobalEipTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchCreateGlobalEipTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchCreateGlobalEipTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchCreateGlobalEipTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

BatchCreateV2RequestBody BatchCreateGlobalEipTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateGlobalEipTagsRequest::setBody(const BatchCreateV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateGlobalEipTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateGlobalEipTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


