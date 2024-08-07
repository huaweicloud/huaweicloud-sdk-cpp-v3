

#include "huaweicloud/codeartsdeploy/v2/model/DeleteHostClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteHostClusterResponse::DeleteHostClusterResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteHostClusterResponse::~DeleteHostClusterResponse() = default;

void DeleteHostClusterResponse::validate()
{
}

web::json::value DeleteHostClusterResponse::toJson() const
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
bool DeleteHostClusterResponse::fromJson(const web::json::value& val)
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


std::string DeleteHostClusterResponse::getStatus() const
{
    return status_;
}

void DeleteHostClusterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteHostClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteHostClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteHostClusterResponse::getId() const
{
    return id_;
}

void DeleteHostClusterResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteHostClusterResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteHostClusterResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


