

#include "huaweicloud/functiongraph/v2/model/UpdateVersionAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateVersionAliasRequest::UpdateVersionAliasRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    aliasName_ = "";
    aliasNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVersionAliasRequest::~UpdateVersionAliasRequest() = default;

void UpdateVersionAliasRequest::validate()
{
}

web::json::value UpdateVersionAliasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(aliasNameIsSet_) {
        val[utility::conversions::to_string_t("alias_name")] = ModelBase::toJson(aliasName_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateVersionAliasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasName(refVal);
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
            UpdateVersionAliasRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateVersionAliasRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void UpdateVersionAliasRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool UpdateVersionAliasRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void UpdateVersionAliasRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string UpdateVersionAliasRequest::getAliasName() const
{
    return aliasName_;
}

void UpdateVersionAliasRequest::setAliasName(const std::string& value)
{
    aliasName_ = value;
    aliasNameIsSet_ = true;
}

bool UpdateVersionAliasRequest::aliasNameIsSet() const
{
    return aliasNameIsSet_;
}

void UpdateVersionAliasRequest::unsetaliasName()
{
    aliasNameIsSet_ = false;
}

std::string UpdateVersionAliasRequest::getContentType() const
{
    return contentType_;
}

void UpdateVersionAliasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateVersionAliasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateVersionAliasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

UpdateVersionAliasRequestBody UpdateVersionAliasRequest::getBody() const
{
    return body_;
}

void UpdateVersionAliasRequest::setBody(const UpdateVersionAliasRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVersionAliasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVersionAliasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


