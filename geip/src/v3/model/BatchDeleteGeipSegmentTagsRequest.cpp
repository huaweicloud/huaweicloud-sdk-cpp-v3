

#include "huaweicloud/geip/v3/model/BatchDeleteGeipSegmentTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchDeleteGeipSegmentTagsRequest::BatchDeleteGeipSegmentTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteGeipSegmentTagsRequest::~BatchDeleteGeipSegmentTagsRequest() = default;

void BatchDeleteGeipSegmentTagsRequest::validate()
{
}

web::json::value BatchDeleteGeipSegmentTagsRequest::toJson() const
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
bool BatchDeleteGeipSegmentTagsRequest::fromJson(const web::json::value& val)
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


std::string BatchDeleteGeipSegmentTagsRequest::getResourceId() const
{
    return resourceId_;
}

void BatchDeleteGeipSegmentTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BatchDeleteGeipSegmentTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BatchDeleteGeipSegmentTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

BatchDeleteV2RequestBody BatchDeleteGeipSegmentTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteGeipSegmentTagsRequest::setBody(const BatchDeleteV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteGeipSegmentTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteGeipSegmentTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


