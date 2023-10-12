

#include "huaweicloud/csms/v1/model/BatchCreateOrDeleteTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




BatchCreateOrDeleteTagsRequest::BatchCreateOrDeleteTagsRequest()
{
    secretId_ = "";
    secretIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateOrDeleteTagsRequest::~BatchCreateOrDeleteTagsRequest() = default;

void BatchCreateOrDeleteTagsRequest::validate()
{
}

web::json::value BatchCreateOrDeleteTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIdIsSet_) {
        val[utility::conversions::to_string_t("secret_id")] = ModelBase::toJson(secretId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateOrDeleteTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchCreateOrDeleteTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateOrDeleteTagsRequest::getSecretId() const
{
    return secretId_;
}

void BatchCreateOrDeleteTagsRequest::setSecretId(const std::string& value)
{
    secretId_ = value;
    secretIdIsSet_ = true;
}

bool BatchCreateOrDeleteTagsRequest::secretIdIsSet() const
{
    return secretIdIsSet_;
}

void BatchCreateOrDeleteTagsRequest::unsetsecretId()
{
    secretIdIsSet_ = false;
}

BatchCreateOrDeleteTagsRequestBody BatchCreateOrDeleteTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateOrDeleteTagsRequest::setBody(const BatchCreateOrDeleteTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateOrDeleteTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateOrDeleteTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


