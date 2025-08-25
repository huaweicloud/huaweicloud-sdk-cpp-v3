

#include "huaweicloud/cce/v3/model/RemoveNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RemoveNodeResponse::RemoveNodeResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

RemoveNodeResponse::~RemoveNodeResponse() = default;

void RemoveNodeResponse::validate()
{
}

web::json::value RemoveNodeResponse::toJson() const
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
bool RemoveNodeResponse::fromJson(const web::json::value& val)
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
            RemoveNodesSpec refVal;
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


std::string RemoveNodeResponse::getApiVersion() const
{
    return apiVersion_;
}

void RemoveNodeResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool RemoveNodeResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void RemoveNodeResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string RemoveNodeResponse::getKind() const
{
    return kind_;
}

void RemoveNodeResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool RemoveNodeResponse::kindIsSet() const
{
    return kindIsSet_;
}

void RemoveNodeResponse::unsetkind()
{
    kindIsSet_ = false;
}

RemoveNodesSpec RemoveNodeResponse::getSpec() const
{
    return spec_;
}

void RemoveNodeResponse::setSpec(const RemoveNodesSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool RemoveNodeResponse::specIsSet() const
{
    return specIsSet_;
}

void RemoveNodeResponse::unsetspec()
{
    specIsSet_ = false;
}

TaskStatus RemoveNodeResponse::getStatus() const
{
    return status_;
}

void RemoveNodeResponse::setStatus(const TaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RemoveNodeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RemoveNodeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


