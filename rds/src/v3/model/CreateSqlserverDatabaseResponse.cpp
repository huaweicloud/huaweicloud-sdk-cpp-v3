

#include "huaweicloud/rds/v3/model/CreateSqlserverDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSqlserverDatabaseResponse::CreateSqlserverDatabaseResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

CreateSqlserverDatabaseResponse::~CreateSqlserverDatabaseResponse() = default;

void CreateSqlserverDatabaseResponse::validate()
{
}

web::json::value CreateSqlserverDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool CreateSqlserverDatabaseResponse::fromJson(const web::json::value& val)
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


std::string CreateSqlserverDatabaseResponse::getResp() const
{
    return resp_;
}

void CreateSqlserverDatabaseResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool CreateSqlserverDatabaseResponse::respIsSet() const
{
    return respIsSet_;
}

void CreateSqlserverDatabaseResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


