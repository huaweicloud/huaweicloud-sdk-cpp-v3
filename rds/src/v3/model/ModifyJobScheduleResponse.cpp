

#include "huaweicloud/rds/v3/model/ModifyJobScheduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyJobScheduleResponse::ModifyJobScheduleResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

ModifyJobScheduleResponse::~ModifyJobScheduleResponse() = default;

void ModifyJobScheduleResponse::validate()
{
}

web::json::value ModifyJobScheduleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool ModifyJobScheduleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResp(refVal);
        }
    }
    return ok;
}


std::string ModifyJobScheduleResponse::getResp() const
{
    return resp_;
}

void ModifyJobScheduleResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool ModifyJobScheduleResponse::respIsSet() const
{
    return respIsSet_;
}

void ModifyJobScheduleResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


