

#include "huaweicloud/cfw/v1/model/CaptureTaskId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CaptureTaskId::CaptureTaskId()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CaptureTaskId::~CaptureTaskId() = default;

void CaptureTaskId::validate()
{
}

web::json::value CaptureTaskId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool CaptureTaskId::fromJson(const web::json::value& val)
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


std::string CaptureTaskId::getId() const
{
    return id_;
}

void CaptureTaskId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CaptureTaskId::idIsSet() const
{
    return idIsSet_;
}

void CaptureTaskId::unsetid()
{
    idIsSet_ = false;
}

std::string CaptureTaskId::getName() const
{
    return name_;
}

void CaptureTaskId::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CaptureTaskId::nameIsSet() const
{
    return nameIsSet_;
}

void CaptureTaskId::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


