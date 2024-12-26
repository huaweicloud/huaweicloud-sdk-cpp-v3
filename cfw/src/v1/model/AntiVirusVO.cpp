

#include "huaweicloud/cfw/v1/model/AntiVirusVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AntiVirusVO::AntiVirusVO()
{
    antiVirusStatus_ = 0;
    antiVirusStatusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AntiVirusVO::~AntiVirusVO() = default;

void AntiVirusVO::validate()
{
}

web::json::value AntiVirusVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(antiVirusStatusIsSet_) {
        val[utility::conversions::to_string_t("anti_virus_status")] = ModelBase::toJson(antiVirusStatus_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool AntiVirusVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("anti_virus_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("anti_virus_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAntiVirusStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


int32_t AntiVirusVO::getAntiVirusStatus() const
{
    return antiVirusStatus_;
}

void AntiVirusVO::setAntiVirusStatus(int32_t value)
{
    antiVirusStatus_ = value;
    antiVirusStatusIsSet_ = true;
}

bool AntiVirusVO::antiVirusStatusIsSet() const
{
    return antiVirusStatusIsSet_;
}

void AntiVirusVO::unsetantiVirusStatus()
{
    antiVirusStatusIsSet_ = false;
}

std::string AntiVirusVO::getId() const
{
    return id_;
}

void AntiVirusVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AntiVirusVO::idIsSet() const
{
    return idIsSet_;
}

void AntiVirusVO::unsetid()
{
    idIsSet_ = false;
}

std::string AntiVirusVO::getName() const
{
    return name_;
}

void AntiVirusVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AntiVirusVO::nameIsSet() const
{
    return nameIsSet_;
}

void AntiVirusVO::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


