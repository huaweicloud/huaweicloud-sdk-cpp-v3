

#include "huaweicloud/functiongraph/v2/model/DeleteVersionAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




DeleteVersionAliasRequest::DeleteVersionAliasRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    aliasName_ = "";
    aliasNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteVersionAliasRequest::~DeleteVersionAliasRequest() = default;

void DeleteVersionAliasRequest::validate()
{
}

web::json::value DeleteVersionAliasRequest::toJson() const
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
bool DeleteVersionAliasRequest::fromJson(const web::json::value& val)
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


std::string DeleteVersionAliasRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void DeleteVersionAliasRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool DeleteVersionAliasRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void DeleteVersionAliasRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string DeleteVersionAliasRequest::getAliasName() const
{
    return aliasName_;
}

void DeleteVersionAliasRequest::setAliasName(const std::string& value)
{
    aliasName_ = value;
    aliasNameIsSet_ = true;
}

bool DeleteVersionAliasRequest::aliasNameIsSet() const
{
    return aliasNameIsSet_;
}

void DeleteVersionAliasRequest::unsetaliasName()
{
    aliasNameIsSet_ = false;
}

std::string DeleteVersionAliasRequest::getContentType() const
{
    return contentType_;
}

void DeleteVersionAliasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteVersionAliasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteVersionAliasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


