

#include "huaweicloud/rds/v3/model/DeleteSqlserverDbUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSqlserverDbUserResponse::DeleteSqlserverDbUserResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeleteSqlserverDbUserResponse::~DeleteSqlserverDbUserResponse() = default;

void DeleteSqlserverDbUserResponse::validate()
{
}

web::json::value DeleteSqlserverDbUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool DeleteSqlserverDbUserResponse::fromJson(const web::json::value& val)
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


std::string DeleteSqlserverDbUserResponse::getResp() const
{
    return resp_;
}

void DeleteSqlserverDbUserResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeleteSqlserverDbUserResponse::respIsSet() const
{
    return respIsSet_;
}

void DeleteSqlserverDbUserResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


