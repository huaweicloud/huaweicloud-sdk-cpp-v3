

#include "huaweicloud/rds/v3/model/CreateJobScheduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateJobScheduleResponse::CreateJobScheduleResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CreateJobScheduleResponse::~CreateJobScheduleResponse() = default;

void CreateJobScheduleResponse::validate()
{
}

web::json::value CreateJobScheduleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateJobScheduleResponse::fromJson(const web::json::value& val)
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


std::string CreateJobScheduleResponse::getId() const
{
    return id_;
}

void CreateJobScheduleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateJobScheduleResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateJobScheduleResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


