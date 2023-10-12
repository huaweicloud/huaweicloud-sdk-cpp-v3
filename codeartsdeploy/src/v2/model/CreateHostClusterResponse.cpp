

#include "huaweicloud/codeartsdeploy/v2/model/CreateHostClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateHostClusterResponse::CreateHostClusterResponse()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateHostClusterResponse::~CreateHostClusterResponse() = default;

void CreateHostClusterResponse::validate()
{
}

web::json::value CreateHostClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreateHostClusterResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateHostClusterResponse::getId() const
{
    return id_;
}

void CreateHostClusterResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateHostClusterResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateHostClusterResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateHostClusterResponse::getStatus() const
{
    return status_;
}

void CreateHostClusterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateHostClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateHostClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


