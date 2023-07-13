

#include "huaweicloud/sdrs/v1/model/BatchAddTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchAddTagsRequest::BatchAddTagsRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddTagsRequest::~BatchAddTagsRequest() = default;

void BatchAddTagsRequest::validate()
{
}

web::json::value BatchAddTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchAddTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAddTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchAddTagsRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void BatchAddTagsRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool BatchAddTagsRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void BatchAddTagsRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

BatchAddTagsRequestBody BatchAddTagsRequest::getBody() const
{
    return body_;
}

void BatchAddTagsRequest::setBody(const BatchAddTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


