

#include "huaweicloud/cce/v3/model/InplaceMigrateNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InplaceMigrateNodeResponse::InplaceMigrateNodeResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

InplaceMigrateNodeResponse::~InplaceMigrateNodeResponse() = default;

void InplaceMigrateNodeResponse::validate()
{
}

web::json::value InplaceMigrateNodeResponse::toJson() const
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
bool InplaceMigrateNodeResponse::fromJson(const web::json::value& val)
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


std::string InplaceMigrateNodeResponse::getApiVersion() const
{
    return apiVersion_;
}

void InplaceMigrateNodeResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool InplaceMigrateNodeResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void InplaceMigrateNodeResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string InplaceMigrateNodeResponse::getKind() const
{
    return kind_;
}

void InplaceMigrateNodeResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool InplaceMigrateNodeResponse::kindIsSet() const
{
    return kindIsSet_;
}

void InplaceMigrateNodeResponse::unsetkind()
{
    kindIsSet_ = false;
}

InPlaceMigratetoNodesSpec InplaceMigrateNodeResponse::getSpec() const
{
    return spec_;
}

void InplaceMigrateNodeResponse::setSpec(const InPlaceMigratetoNodesSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool InplaceMigrateNodeResponse::specIsSet() const
{
    return specIsSet_;
}

void InplaceMigrateNodeResponse::unsetspec()
{
    specIsSet_ = false;
}

TaskStatus InplaceMigrateNodeResponse::getStatus() const
{
    return status_;
}

void InplaceMigrateNodeResponse::setStatus(const TaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InplaceMigrateNodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void InplaceMigrateNodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


