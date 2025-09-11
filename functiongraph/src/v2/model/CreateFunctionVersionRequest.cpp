

#include "huaweicloud/functiongraph/v2/model/CreateFunctionVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionVersionRequest::CreateFunctionVersionRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateFunctionVersionRequest::~CreateFunctionVersionRequest() = default;

void CreateFunctionVersionRequest::validate()
{
}

web::json::value CreateFunctionVersionRequest::toJson() const
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
bool CreateFunctionVersionRequest::fromJson(const web::json::value& val)
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
            CreateFunctionVersionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionVersionRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void CreateFunctionVersionRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool CreateFunctionVersionRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void CreateFunctionVersionRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string CreateFunctionVersionRequest::getContentType() const
{
    return contentType_;
}

void CreateFunctionVersionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateFunctionVersionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateFunctionVersionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateFunctionVersionRequestBody CreateFunctionVersionRequest::getBody() const
{
    return body_;
}

void CreateFunctionVersionRequest::setBody(const CreateFunctionVersionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFunctionVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFunctionVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


