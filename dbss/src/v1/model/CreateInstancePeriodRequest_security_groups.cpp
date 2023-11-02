

#include "huaweicloud/dbss/v1/model/CreateInstancePeriodRequest_security_groups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateInstancePeriodRequest_security_groups::CreateInstancePeriodRequest_security_groups()
{
    id_ = "";
    idIsSet_ = false;
}

CreateInstancePeriodRequest_security_groups::~CreateInstancePeriodRequest_security_groups() = default;

void CreateInstancePeriodRequest_security_groups::validate()
{
}

web::json::value CreateInstancePeriodRequest_security_groups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateInstancePeriodRequest_security_groups::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateInstancePeriodRequest_security_groups::getId() const
{
    return id_;
}

void CreateInstancePeriodRequest_security_groups::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateInstancePeriodRequest_security_groups::idIsSet() const
{
    return idIsSet_;
}

void CreateInstancePeriodRequest_security_groups::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


