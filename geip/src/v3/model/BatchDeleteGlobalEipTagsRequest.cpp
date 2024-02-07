

#include "huaweicloud/geip/v3/model/BatchDeleteGlobalEipTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDeleteGlobalEipTagsRequest::BatchDeleteGlobalEipTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteGlobalEipTagsRequest::~BatchDeleteGlobalEipTagsRequest() = default;

void BatchDeleteGlobalEipTagsRequest::validate()
{
}

web::json::value BatchDeleteGlobalEipTagsRequest::toJson() const
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
bool BatchDeleteGlobalEipTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteV2RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteGlobalEipTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchDeleteGlobalEipTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchDeleteGlobalEipTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchDeleteGlobalEipTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

BatchDeleteV2RequestBody BatchDeleteGlobalEipTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteGlobalEipTagsRequest::setBody(const BatchDeleteV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteGlobalEipTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteGlobalEipTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


