

#include "huaweicloud/cce/v3/model/InPlaceMigrate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InPlaceMigrate::InPlaceMigrate()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

InPlaceMigrate::~InPlaceMigrate() = default;

void InPlaceMigrate::validate()
{
}

web::json::value InPlaceMigrate::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool InPlaceMigrate::fromJson(const web::json::value& val)
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
            InPlaceMigratetoNodesSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            TaskStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string InPlaceMigrate::getApiVersion() const
{
    return apiVersion_;
}

void InPlaceMigrate::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool InPlaceMigrate::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void InPlaceMigrate::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string InPlaceMigrate::getKind() const
{
    return kind_;
}

void InPlaceMigrate::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool InPlaceMigrate::kindIsSet() const
{
    return kindIsSet_;
}

void InPlaceMigrate::unsetkind()
{
    kindIsSet_ = false;
}

InPlaceMigratetoNodesSpec InPlaceMigrate::getSpec() const
{
    return spec_;
}

void InPlaceMigrate::setSpec(const InPlaceMigratetoNodesSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool InPlaceMigrate::specIsSet() const
{
    return specIsSet_;
}

void InPlaceMigrate::unsetspec()
{
    specIsSet_ = false;
}

TaskStatus InPlaceMigrate::getStatus() const
{
    return status_;
}

void InPlaceMigrate::setStatus(const TaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InPlaceMigrate::statusIsSet() const
{
    return statusIsSet_;
}

void InPlaceMigrate::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


