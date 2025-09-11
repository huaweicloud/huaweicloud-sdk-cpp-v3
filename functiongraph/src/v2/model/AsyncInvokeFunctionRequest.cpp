

#include "huaweicloud/functiongraph/v2/model/AsyncInvokeFunctionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




AsyncInvokeFunctionRequest::AsyncInvokeFunctionRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    xCffInstanceMemory_ = "";
    xCffInstanceMemoryIsSet_ = false;
    bodyIsSet_ = false;
}

AsyncInvokeFunctionRequest::~AsyncInvokeFunctionRequest() = default;

void AsyncInvokeFunctionRequest::validate()
{
}

web::json::value AsyncInvokeFunctionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(xCffInstanceMemoryIsSet_) {
        val[utility::conversions::to_string_t("X-Cff-Instance-Memory")] = ModelBase::toJson(xCffInstanceMemory_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AsyncInvokeFunctionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Cff-Instance-Memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Cff-Instance-Memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXCffInstanceMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AsyncInvokeFunctionRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void AsyncInvokeFunctionRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool AsyncInvokeFunctionRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void AsyncInvokeFunctionRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string AsyncInvokeFunctionRequest::getContentType() const
{
    return contentType_;
}

void AsyncInvokeFunctionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool AsyncInvokeFunctionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void AsyncInvokeFunctionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string AsyncInvokeFunctionRequest::getXCffInstanceMemory() const
{
    return xCffInstanceMemory_;
}

void AsyncInvokeFunctionRequest::setXCffInstanceMemory(const std::string& value)
{
    xCffInstanceMemory_ = value;
    xCffInstanceMemoryIsSet_ = true;
}

bool AsyncInvokeFunctionRequest::xCffInstanceMemoryIsSet() const
{
    return xCffInstanceMemoryIsSet_;
}

void AsyncInvokeFunctionRequest::unsetxCffInstanceMemory()
{
    xCffInstanceMemoryIsSet_ = false;
}

std::map<std::string, Object>& AsyncInvokeFunctionRequest::getBody()
{
    return body_;
}

void AsyncInvokeFunctionRequest::setBody(const std::map<std::string, Object>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AsyncInvokeFunctionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AsyncInvokeFunctionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


