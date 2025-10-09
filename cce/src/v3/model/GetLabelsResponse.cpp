

#include "huaweicloud/cce/v3/model/GetLabelsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetLabelsResponse::GetLabelsResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    specIsSet_ = false;
}

GetLabelsResponse::~GetLabelsResponse() = default;

void GetLabelsResponse::validate()
{
}

web::json::value GetLabelsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool GetLabelsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::map<std::string, std::vector<std::string>>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string GetLabelsResponse::getKind() const
{
    return kind_;
}

void GetLabelsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool GetLabelsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void GetLabelsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string GetLabelsResponse::getApiVersion() const
{
    return apiVersion_;
}

void GetLabelsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool GetLabelsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void GetLabelsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::map<std::string, std::map<std::string, std::vector<std::string>>>& GetLabelsResponse::getSpec()
{
    return spec_;
}

void GetLabelsResponse::setSpec(const std::map<std::string, std::map<std::string, std::vector<std::string>>>& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool GetLabelsResponse::specIsSet() const
{
    return specIsSet_;
}

void GetLabelsResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


