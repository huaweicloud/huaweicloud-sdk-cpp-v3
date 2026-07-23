

#include "huaweicloud/rds/v3/model/DeleteJobScheduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteJobScheduleResponse::DeleteJobScheduleResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeleteJobScheduleResponse::~DeleteJobScheduleResponse() = default;

void DeleteJobScheduleResponse::validate()
{
}

web::json::value DeleteJobScheduleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool DeleteJobScheduleResponse::fromJson(const web::json::value& val)
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


std::string DeleteJobScheduleResponse::getResp() const
{
    return resp_;
}

void DeleteJobScheduleResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeleteJobScheduleResponse::respIsSet() const
{
    return respIsSet_;
}

void DeleteJobScheduleResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


