

#include "huaweicloud/rds/v3/model/UpdateSqlLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateSqlLimitResponse::UpdateSqlLimitResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdateSqlLimitResponse::~UpdateSqlLimitResponse() = default;

void UpdateSqlLimitResponse::validate()
{
}

web::json::value UpdateSqlLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UpdateSqlLimitResponse::fromJson(const web::json::value& val)
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


std::string UpdateSqlLimitResponse::getResp() const
{
    return resp_;
}

void UpdateSqlLimitResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdateSqlLimitResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdateSqlLimitResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


