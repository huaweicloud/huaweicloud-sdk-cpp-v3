

#include "huaweicloud/codeartsdeploy/v2/model/UpdateHostClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateHostClusterResponse::UpdateHostClusterResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

UpdateHostClusterResponse::~UpdateHostClusterResponse() = default;

void UpdateHostClusterResponse::validate()
{
}

web::json::value UpdateHostClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool UpdateHostClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string UpdateHostClusterResponse::getStatus() const
{
    return status_;
}

void UpdateHostClusterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateHostClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateHostClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateHostClusterResponse::getId() const
{
    return id_;
}

void UpdateHostClusterResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateHostClusterResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateHostClusterResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


