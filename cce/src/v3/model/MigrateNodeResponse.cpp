

#include "huaweicloud/cce/v3/model/MigrateNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateNodeResponse::MigrateNodeResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

MigrateNodeResponse::~MigrateNodeResponse() = default;

void MigrateNodeResponse::validate()
{
}

web::json::value MigrateNodeResponse::toJson() const
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
bool MigrateNodeResponse::fromJson(const web::json::value& val)
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
            MigrateNodesSpec refVal;
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


std::string MigrateNodeResponse::getApiVersion() const
{
    return apiVersion_;
}

void MigrateNodeResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool MigrateNodeResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void MigrateNodeResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string MigrateNodeResponse::getKind() const
{
    return kind_;
}

void MigrateNodeResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool MigrateNodeResponse::kindIsSet() const
{
    return kindIsSet_;
}

void MigrateNodeResponse::unsetkind()
{
    kindIsSet_ = false;
}

MigrateNodesSpec MigrateNodeResponse::getSpec() const
{
    return spec_;
}

void MigrateNodeResponse::setSpec(const MigrateNodesSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool MigrateNodeResponse::specIsSet() const
{
    return specIsSet_;
}

void MigrateNodeResponse::unsetspec()
{
    specIsSet_ = false;
}

TaskStatus MigrateNodeResponse::getStatus() const
{
    return status_;
}

void MigrateNodeResponse::setStatus(const TaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MigrateNodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void MigrateNodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


