

#include "huaweicloud/functiongraph/v2/model/ShowVersionAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowVersionAliasRequest::ShowVersionAliasRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    aliasName_ = "";
    aliasNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowVersionAliasRequest::~ShowVersionAliasRequest() = default;

void ShowVersionAliasRequest::validate()
{
}

web::json::value ShowVersionAliasRequest::toJson() const
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

    return val;
}
bool ShowVersionAliasRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowVersionAliasRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ShowVersionAliasRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ShowVersionAliasRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ShowVersionAliasRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ShowVersionAliasRequest::getAliasName() const
{
    return aliasName_;
}

void ShowVersionAliasRequest::setAliasName(const std::string& value)
{
    aliasName_ = value;
    aliasNameIsSet_ = true;
}

bool ShowVersionAliasRequest::aliasNameIsSet() const
{
    return aliasNameIsSet_;
}

void ShowVersionAliasRequest::unsetaliasName()
{
    aliasNameIsSet_ = false;
}

std::string ShowVersionAliasRequest::getContentType() const
{
    return contentType_;
}

void ShowVersionAliasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowVersionAliasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowVersionAliasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


