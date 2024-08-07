

#include "huaweicloud/codeartsdeploy/v2/model/DeleteHostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteHostResponse::DeleteHostResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteHostResponse::~DeleteHostResponse() = default;

void DeleteHostResponse::validate()
{
}

web::json::value DeleteHostResponse::toJson() const
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
bool DeleteHostResponse::fromJson(const web::json::value& val)
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


std::string DeleteHostResponse::getStatus() const
{
    return status_;
}

void DeleteHostResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteHostResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteHostResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteHostResponse::getId() const
{
    return id_;
}

void DeleteHostResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteHostResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteHostResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


