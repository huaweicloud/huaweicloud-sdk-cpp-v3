

#include "huaweicloud/cce/v3/model/AddonCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonCheckRequest::AddonCheckRequest()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    specIsSet_ = false;
}

AddonCheckRequest::~AddonCheckRequest() = default;

void AddonCheckRequest::validate()
{
}

web::json::value AddonCheckRequest::toJson() const
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
bool AddonCheckRequest::fromJson(const web::json::value& val)
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
            AddonCheckSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string AddonCheckRequest::getKind() const
{
    return kind_;
}

void AddonCheckRequest::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool AddonCheckRequest::kindIsSet() const
{
    return kindIsSet_;
}

void AddonCheckRequest::unsetkind()
{
    kindIsSet_ = false;
}

std::string AddonCheckRequest::getApiVersion() const
{
    return apiVersion_;
}

void AddonCheckRequest::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AddonCheckRequest::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AddonCheckRequest::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AddonCheckSpec AddonCheckRequest::getSpec() const
{
    return spec_;
}

void AddonCheckRequest::setSpec(const AddonCheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool AddonCheckRequest::specIsSet() const
{
    return specIsSet_;
}

void AddonCheckRequest::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


