

#include "huaweicloud/functiongraph/v2/model/CreateFunctionTriggerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionTriggerRequest::CreateFunctionTriggerRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFunctionTriggerRequest::~CreateFunctionTriggerRequest() = default;

void CreateFunctionTriggerRequest::validate()
{
}

web::json::value CreateFunctionTriggerRequest::toJson() const
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
bool CreateFunctionTriggerRequest::fromJson(const web::json::value& val)
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
            CreateFunctionTriggerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionTriggerRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void CreateFunctionTriggerRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool CreateFunctionTriggerRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void CreateFunctionTriggerRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string CreateFunctionTriggerRequest::getContentType() const
{
    return contentType_;
}

void CreateFunctionTriggerRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateFunctionTriggerRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateFunctionTriggerRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateFunctionTriggerRequestBody CreateFunctionTriggerRequest::getBody() const
{
    return body_;
}

void CreateFunctionTriggerRequest::setBody(const CreateFunctionTriggerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFunctionTriggerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFunctionTriggerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


