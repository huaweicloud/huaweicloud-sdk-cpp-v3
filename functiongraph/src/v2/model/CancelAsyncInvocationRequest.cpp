

#include "huaweicloud/functiongraph/v2/model/CancelAsyncInvocationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CancelAsyncInvocationRequest::CancelAsyncInvocationRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CancelAsyncInvocationRequest::~CancelAsyncInvocationRequest() = default;

void CancelAsyncInvocationRequest::validate()
{
}

web::json::value CancelAsyncInvocationRequest::toJson() const
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
bool CancelAsyncInvocationRequest::fromJson(const web::json::value& val)
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
            CancelAsyncInvocationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CancelAsyncInvocationRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void CancelAsyncInvocationRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool CancelAsyncInvocationRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void CancelAsyncInvocationRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string CancelAsyncInvocationRequest::getContentType() const
{
    return contentType_;
}

void CancelAsyncInvocationRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CancelAsyncInvocationRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CancelAsyncInvocationRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CancelAsyncInvocationRequestBody CancelAsyncInvocationRequest::getBody() const
{
    return body_;
}

void CancelAsyncInvocationRequest::setBody(const CancelAsyncInvocationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelAsyncInvocationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelAsyncInvocationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


