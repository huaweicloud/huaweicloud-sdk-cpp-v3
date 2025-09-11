

#include "huaweicloud/functiongraph/v2/model/InvokeFunctionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




InvokeFunctionRequest::InvokeFunctionRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    xCffLogType_ = "";
    xCffLogTypeIsSet_ = false;
    xCFFRequestVersion_ = "";
    xCFFRequestVersionIsSet_ = false;
    xCffInstanceMemory_ = "";
    xCffInstanceMemoryIsSet_ = false;
    bodyIsSet_ = false;
}

InvokeFunctionRequest::~InvokeFunctionRequest() = default;

void InvokeFunctionRequest::validate()
{
}

web::json::value InvokeFunctionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(xCffLogTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Cff-Log-Type")] = ModelBase::toJson(xCffLogType_);
    }
    if(xCFFRequestVersionIsSet_) {
        val[utility::conversions::to_string_t("X-CFF-Request-Version")] = ModelBase::toJson(xCFFRequestVersion_);
    }
    if(xCffInstanceMemoryIsSet_) {
        val[utility::conversions::to_string_t("X-Cff-Instance-Memory")] = ModelBase::toJson(xCffInstanceMemory_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool InvokeFunctionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Cff-Log-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Cff-Log-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXCffLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-CFF-Request-Version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-CFF-Request-Version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXCFFRequestVersion(refVal);
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


std::string InvokeFunctionRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void InvokeFunctionRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool InvokeFunctionRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void InvokeFunctionRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string InvokeFunctionRequest::getContentType() const
{
    return contentType_;
}

void InvokeFunctionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool InvokeFunctionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void InvokeFunctionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string InvokeFunctionRequest::getXCffLogType() const
{
    return xCffLogType_;
}

void InvokeFunctionRequest::setXCffLogType(const std::string& value)
{
    xCffLogType_ = value;
    xCffLogTypeIsSet_ = true;
}

bool InvokeFunctionRequest::xCffLogTypeIsSet() const
{
    return xCffLogTypeIsSet_;
}

void InvokeFunctionRequest::unsetxCffLogType()
{
    xCffLogTypeIsSet_ = false;
}

std::string InvokeFunctionRequest::getXCFFRequestVersion() const
{
    return xCFFRequestVersion_;
}

void InvokeFunctionRequest::setXCFFRequestVersion(const std::string& value)
{
    xCFFRequestVersion_ = value;
    xCFFRequestVersionIsSet_ = true;
}

bool InvokeFunctionRequest::xCFFRequestVersionIsSet() const
{
    return xCFFRequestVersionIsSet_;
}

void InvokeFunctionRequest::unsetxCFFRequestVersion()
{
    xCFFRequestVersionIsSet_ = false;
}

std::string InvokeFunctionRequest::getXCffInstanceMemory() const
{
    return xCffInstanceMemory_;
}

void InvokeFunctionRequest::setXCffInstanceMemory(const std::string& value)
{
    xCffInstanceMemory_ = value;
    xCffInstanceMemoryIsSet_ = true;
}

bool InvokeFunctionRequest::xCffInstanceMemoryIsSet() const
{
    return xCffInstanceMemoryIsSet_;
}

void InvokeFunctionRequest::unsetxCffInstanceMemory()
{
    xCffInstanceMemoryIsSet_ = false;
}

std::map<std::string, Object>& InvokeFunctionRequest::getBody()
{
    return body_;
}

void InvokeFunctionRequest::setBody(const std::map<std::string, Object>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InvokeFunctionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InvokeFunctionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


