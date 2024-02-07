

#include "huaweicloud/rds/v3/model/ExecuteRevokeDatabaseUserRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExecuteRevokeDatabaseUserRoleResponse::ExecuteRevokeDatabaseUserRoleResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

ExecuteRevokeDatabaseUserRoleResponse::~ExecuteRevokeDatabaseUserRoleResponse() = default;

void ExecuteRevokeDatabaseUserRoleResponse::validate()
{
}

web::json::value ExecuteRevokeDatabaseUserRoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool ExecuteRevokeDatabaseUserRoleResponse::fromJson(const web::json::value& val)
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


std::string ExecuteRevokeDatabaseUserRoleResponse::getResp() const
{
    return resp_;
}

void ExecuteRevokeDatabaseUserRoleResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool ExecuteRevokeDatabaseUserRoleResponse::respIsSet() const
{
    return respIsSet_;
}

void ExecuteRevokeDatabaseUserRoleResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


