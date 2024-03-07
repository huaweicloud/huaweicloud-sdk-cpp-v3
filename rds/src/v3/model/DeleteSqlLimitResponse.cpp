

#include "huaweicloud/rds/v3/model/DeleteSqlLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSqlLimitResponse::DeleteSqlLimitResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeleteSqlLimitResponse::~DeleteSqlLimitResponse() = default;

void DeleteSqlLimitResponse::validate()
{
}

web::json::value DeleteSqlLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool DeleteSqlLimitResponse::fromJson(const web::json::value& val)
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


std::string DeleteSqlLimitResponse::getResp() const
{
    return resp_;
}

void DeleteSqlLimitResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeleteSqlLimitResponse::respIsSet() const
{
    return respIsSet_;
}

void DeleteSqlLimitResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


