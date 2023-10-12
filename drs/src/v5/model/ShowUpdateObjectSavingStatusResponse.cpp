

#include "huaweicloud/drs/v5/model/ShowUpdateObjectSavingStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowUpdateObjectSavingStatusResponse::ShowUpdateObjectSavingStatusResponse()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowUpdateObjectSavingStatusResponse::~ShowUpdateObjectSavingStatusResponse() = default;

void ShowUpdateObjectSavingStatusResponse::validate()
{
}

web::json::value ShowUpdateObjectSavingStatusResponse::toJson() const
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
bool ShowUpdateObjectSavingStatusResponse::fromJson(const web::json::value& val)
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


std::string ShowUpdateObjectSavingStatusResponse::getId() const
{
    return id_;
}

void ShowUpdateObjectSavingStatusResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowUpdateObjectSavingStatusResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowUpdateObjectSavingStatusResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowUpdateObjectSavingStatusResponse::getStatus() const
{
    return status_;
}

void ShowUpdateObjectSavingStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUpdateObjectSavingStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUpdateObjectSavingStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


