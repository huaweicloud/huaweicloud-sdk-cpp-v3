

#include "huaweicloud/cce/v3/model/PrecheckClusterRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PrecheckClusterRequestBody::PrecheckClusterRequestBody()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
}

PrecheckClusterRequestBody::~PrecheckClusterRequestBody() = default;

void PrecheckClusterRequestBody::validate()
{
}

web::json::value PrecheckClusterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool PrecheckClusterRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PrecheckSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string PrecheckClusterRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void PrecheckClusterRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PrecheckClusterRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PrecheckClusterRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PrecheckClusterRequestBody::getKind() const
{
    return kind_;
}

void PrecheckClusterRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PrecheckClusterRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void PrecheckClusterRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

PrecheckSpec PrecheckClusterRequestBody::getSpec() const
{
    return spec_;
}

void PrecheckClusterRequestBody::setSpec(const PrecheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PrecheckClusterRequestBody::specIsSet() const
{
    return specIsSet_;
}

void PrecheckClusterRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


