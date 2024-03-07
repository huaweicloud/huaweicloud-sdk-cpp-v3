

#include "huaweicloud/rds/v3/model/CreateSqlLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSqlLimitResponse::CreateSqlLimitResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

CreateSqlLimitResponse::~CreateSqlLimitResponse() = default;

void CreateSqlLimitResponse::validate()
{
}

web::json::value CreateSqlLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool CreateSqlLimitResponse::fromJson(const web::json::value& val)
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


std::string CreateSqlLimitResponse::getResp() const
{
    return resp_;
}

void CreateSqlLimitResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool CreateSqlLimitResponse::respIsSet() const
{
    return respIsSet_;
}

void CreateSqlLimitResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


