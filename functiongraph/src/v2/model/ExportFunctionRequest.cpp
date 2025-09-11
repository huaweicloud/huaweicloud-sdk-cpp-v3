

#include "huaweicloud/functiongraph/v2/model/ExportFunctionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ExportFunctionRequest::ExportFunctionRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    config_ = false;
    configIsSet_ = false;
    code_ = false;
    codeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ExportFunctionRequest::~ExportFunctionRequest() = default;

void ExportFunctionRequest::validate()
{
}

web::json::value ExportFunctionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ExportFunctionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ExportFunctionRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ExportFunctionRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ExportFunctionRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ExportFunctionRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

bool ExportFunctionRequest::isConfig() const
{
    return config_;
}

void ExportFunctionRequest::setConfig(bool value)
{
    config_ = value;
    configIsSet_ = true;
}

bool ExportFunctionRequest::configIsSet() const
{
    return configIsSet_;
}

void ExportFunctionRequest::unsetconfig()
{
    configIsSet_ = false;
}

bool ExportFunctionRequest::isCode() const
{
    return code_;
}

void ExportFunctionRequest::setCode(bool value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ExportFunctionRequest::codeIsSet() const
{
    return codeIsSet_;
}

void ExportFunctionRequest::unsetcode()
{
    codeIsSet_ = false;
}

std::string ExportFunctionRequest::getType() const
{
    return type_;
}

void ExportFunctionRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExportFunctionRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ExportFunctionRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ExportFunctionRequest::getContentType() const
{
    return contentType_;
}

void ExportFunctionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ExportFunctionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ExportFunctionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


