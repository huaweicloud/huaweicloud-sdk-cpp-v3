

#include "huaweicloud/csms/v1/model/ShowSecretFunctionTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretFunctionTemplatesRequest::ShowSecretFunctionTemplatesRequest()
{
    secretType_ = "";
    secretTypeIsSet_ = false;
    secretSubType_ = "";
    secretSubTypeIsSet_ = false;
    engine_ = "";
    engineIsSet_ = false;
}

ShowSecretFunctionTemplatesRequest::~ShowSecretFunctionTemplatesRequest() = default;

void ShowSecretFunctionTemplatesRequest::validate()
{
}

web::json::value ShowSecretFunctionTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }
    if(secretSubTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_sub_type")] = ModelBase::toJson(secretSubType_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }

    return val;
}
bool ShowSecretFunctionTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_sub_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_sub_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretSubType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    return ok;
}


std::string ShowSecretFunctionTemplatesRequest::getSecretType() const
{
    return secretType_;
}

void ShowSecretFunctionTemplatesRequest::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool ShowSecretFunctionTemplatesRequest::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void ShowSecretFunctionTemplatesRequest::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string ShowSecretFunctionTemplatesRequest::getSecretSubType() const
{
    return secretSubType_;
}

void ShowSecretFunctionTemplatesRequest::setSecretSubType(const std::string& value)
{
    secretSubType_ = value;
    secretSubTypeIsSet_ = true;
}

bool ShowSecretFunctionTemplatesRequest::secretSubTypeIsSet() const
{
    return secretSubTypeIsSet_;
}

void ShowSecretFunctionTemplatesRequest::unsetsecretSubType()
{
    secretSubTypeIsSet_ = false;
}

std::string ShowSecretFunctionTemplatesRequest::getEngine() const
{
    return engine_;
}

void ShowSecretFunctionTemplatesRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ShowSecretFunctionTemplatesRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ShowSecretFunctionTemplatesRequest::unsetengine()
{
    engineIsSet_ = false;
}

}
}
}
}
}


