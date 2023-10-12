

#include "huaweicloud/codeartsdeploy/v2/model/CreateHostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateHostResponse::CreateHostResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CreateHostResponse::~CreateHostResponse() = default;

void CreateHostResponse::validate()
{
}

web::json::value CreateHostResponse::toJson() const
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
bool CreateHostResponse::fromJson(const web::json::value& val)
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


std::string CreateHostResponse::getStatus() const
{
    return status_;
}

void CreateHostResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateHostResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateHostResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateHostResponse::getId() const
{
    return id_;
}

void CreateHostResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateHostResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateHostResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


