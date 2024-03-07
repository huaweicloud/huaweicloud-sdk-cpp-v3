

#include "huaweicloud/rds/v3/model/SwitchSqlLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchSqlLimitResponse::SwitchSqlLimitResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SwitchSqlLimitResponse::~SwitchSqlLimitResponse() = default;

void SwitchSqlLimitResponse::validate()
{
}

web::json::value SwitchSqlLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool SwitchSqlLimitResponse::fromJson(const web::json::value& val)
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


std::string SwitchSqlLimitResponse::getResp() const
{
    return resp_;
}

void SwitchSqlLimitResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SwitchSqlLimitResponse::respIsSet() const
{
    return respIsSet_;
}

void SwitchSqlLimitResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


