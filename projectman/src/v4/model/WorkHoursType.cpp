

#include "huaweicloud/projectman/v4/model/WorkHoursType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkHoursType::WorkHoursType()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

WorkHoursType::~WorkHoursType() = default;

void WorkHoursType::validate()
{
}

web::json::value WorkHoursType::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool WorkHoursType::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


int32_t WorkHoursType::getId() const
{
    return id_;
}

void WorkHoursType::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkHoursType::idIsSet() const
{
    return idIsSet_;
}

void WorkHoursType::unsetid()
{
    idIsSet_ = false;
}

std::string WorkHoursType::getName() const
{
    return name_;
}

void WorkHoursType::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkHoursType::nameIsSet() const
{
    return nameIsSet_;
}

void WorkHoursType::unsetname()
{
    nameIsSet_ = false;
}

int32_t WorkHoursType::getStatus() const
{
    return status_;
}

void WorkHoursType::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkHoursType::statusIsSet() const
{
    return statusIsSet_;
}

void WorkHoursType::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


