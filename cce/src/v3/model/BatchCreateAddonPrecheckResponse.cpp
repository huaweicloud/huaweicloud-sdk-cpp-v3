

#include "huaweicloud/cce/v3/model/BatchCreateAddonPrecheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchCreateAddonPrecheckResponse::BatchCreateAddonPrecheckResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

BatchCreateAddonPrecheckResponse::~BatchCreateAddonPrecheckResponse() = default;

void BatchCreateAddonPrecheckResponse::validate()
{
}

web::json::value BatchCreateAddonPrecheckResponse::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchCreateAddonPrecheckResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            AddonCheckStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string BatchCreateAddonPrecheckResponse::getKind() const
{
    return kind_;
}

void BatchCreateAddonPrecheckResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool BatchCreateAddonPrecheckResponse::kindIsSet() const
{
    return kindIsSet_;
}

void BatchCreateAddonPrecheckResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string BatchCreateAddonPrecheckResponse::getApiVersion() const
{
    return apiVersion_;
}

void BatchCreateAddonPrecheckResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool BatchCreateAddonPrecheckResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void BatchCreateAddonPrecheckResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

AddonCheckSpec BatchCreateAddonPrecheckResponse::getSpec() const
{
    return spec_;
}

void BatchCreateAddonPrecheckResponse::setSpec(const AddonCheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool BatchCreateAddonPrecheckResponse::specIsSet() const
{
    return specIsSet_;
}

void BatchCreateAddonPrecheckResponse::unsetspec()
{
    specIsSet_ = false;
}

AddonCheckStatus BatchCreateAddonPrecheckResponse::getStatus() const
{
    return status_;
}

void BatchCreateAddonPrecheckResponse::setStatus(const AddonCheckStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchCreateAddonPrecheckResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchCreateAddonPrecheckResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


