

#include "huaweicloud/sdrs/v1/model/BatchDeleteTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchDeleteTagsRequest::BatchDeleteTagsRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteTagsRequest::~BatchDeleteTagsRequest() = default;

void BatchDeleteTagsRequest::validate()
{
}

web::json::value BatchDeleteTagsRequest::toJson() const
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

bool BatchDeleteTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteTagsRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void BatchDeleteTagsRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool BatchDeleteTagsRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void BatchDeleteTagsRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
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


