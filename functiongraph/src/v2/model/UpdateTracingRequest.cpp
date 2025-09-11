

#include "huaweicloud/functiongraph/v2/model/UpdateTracingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateTracingRequest::UpdateTracingRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTracingRequest::~UpdateTracingRequest() = default;

void UpdateTracingRequest::validate()
{
}

web::json::value UpdateTracingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTracingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateTracingRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTracingRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateTracingRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateTracingRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateTracingRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateTracingRequest::getContentType() const
{
    return contentType_;
}

void UpdateTracingRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateTracingRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateTracingRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateTracingRequestBody UpdateTracingRequest::getBody() const
{
    return body_;
}

void UpdateTracingRequest::setBody(const UpdateTracingRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTracingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTracingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


