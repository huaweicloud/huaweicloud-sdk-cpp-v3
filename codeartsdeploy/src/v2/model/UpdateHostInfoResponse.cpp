

#include "huaweicloud/codeartsdeploy/v2/model/UpdateHostInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateHostInfoResponse::UpdateHostInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

UpdateHostInfoResponse::~UpdateHostInfoResponse() = default;

void UpdateHostInfoResponse::validate()
{
}

web::json::value UpdateHostInfoResponse::toJson() const
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
bool UpdateHostInfoResponse::fromJson(const web::json::value& val)
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


std::string UpdateHostInfoResponse::getStatus() const
{
    return status_;
}

void UpdateHostInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateHostInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateHostInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateHostInfoResponse::getId() const
{
    return id_;
}

void UpdateHostInfoResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateHostInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateHostInfoResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


