

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionAsyncInvokeConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionAsyncInvokeConfigRequest::UpdateFunctionAsyncInvokeConfigRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFunctionAsyncInvokeConfigRequest::~UpdateFunctionAsyncInvokeConfigRequest() = default;

void UpdateFunctionAsyncInvokeConfigRequest::validate()
{
}

web::json::value UpdateFunctionAsyncInvokeConfigRequest::toJson() const
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
bool UpdateFunctionAsyncInvokeConfigRequest::fromJson(const web::json::value& val)
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
            UpdateFunctionAsyncInvokeConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFunctionAsyncInvokeConfigRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateFunctionAsyncInvokeConfigRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateFunctionAsyncInvokeConfigRequest::getContentType() const
{
    return contentType_;
}

void UpdateFunctionAsyncInvokeConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateFunctionAsyncInvokeConfigRequestBody UpdateFunctionAsyncInvokeConfigRequest::getBody() const
{
    return body_;
}

void UpdateFunctionAsyncInvokeConfigRequest::setBody(const UpdateFunctionAsyncInvokeConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFunctionAsyncInvokeConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFunctionAsyncInvokeConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


