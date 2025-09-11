

#include "huaweicloud/functiongraph/v2/model/CreateVersionAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateVersionAliasRequest::CreateVersionAliasRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateVersionAliasRequest::~CreateVersionAliasRequest() = default;

void CreateVersionAliasRequest::validate()
{
}

web::json::value CreateVersionAliasRequest::toJson() const
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
bool CreateVersionAliasRequest::fromJson(const web::json::value& val)
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
            CreateVersionAliasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateVersionAliasRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void CreateVersionAliasRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool CreateVersionAliasRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void CreateVersionAliasRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string CreateVersionAliasRequest::getContentType() const
{
    return contentType_;
}

void CreateVersionAliasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateVersionAliasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateVersionAliasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateVersionAliasRequestBody CreateVersionAliasRequest::getBody() const
{
    return body_;
}

void CreateVersionAliasRequest::setBody(const CreateVersionAliasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVersionAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVersionAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


