

#include "huaweicloud/cfw/v1/model/ShowImportStatusId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowImportStatusId::ShowImportStatusId()
{
    id_ = "";
    idIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ShowImportStatusId::~ShowImportStatusId() = default;

void ShowImportStatusId::validate()
{
}

web::json::value ShowImportStatusId::toJson() const
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
bool ShowImportStatusId::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ShowImportStatusId::getId() const
{
    return id_;
}

void ShowImportStatusId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowImportStatusId::idIsSet() const
{
    return idIsSet_;
}

void ShowImportStatusId::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowImportStatusId::getStatus() const
{
    return status_;
}

void ShowImportStatusId::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowImportStatusId::statusIsSet() const
{
    return statusIsSet_;
}

void ShowImportStatusId::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


