

#include "huaweicloud/modelarts/v1/model/AIServiceInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AIServiceInstance::AIServiceInstance()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    endpoints_ = "";
    endpointsIsSet_ = false;
}

AIServiceInstance::~AIServiceInstance() = default;

void AIServiceInstance::validate()
{
}

web::json::value AIServiceInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }

    return val;
}
bool AIServiceInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    return ok;
}


std::string AIServiceInstance::getId() const
{
    return id_;
}

void AIServiceInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AIServiceInstance::idIsSet() const
{
    return idIsSet_;
}

void AIServiceInstance::unsetid()
{
    idIsSet_ = false;
}

std::string AIServiceInstance::getStatus() const
{
    return status_;
}

void AIServiceInstance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AIServiceInstance::statusIsSet() const
{
    return statusIsSet_;
}

void AIServiceInstance::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AIServiceInstance::getEndpoints() const
{
    return endpoints_;
}

void AIServiceInstance::setEndpoints(const std::string& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool AIServiceInstance::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void AIServiceInstance::unsetendpoints()
{
    endpointsIsSet_ = false;
}

}
}
}
}
}


