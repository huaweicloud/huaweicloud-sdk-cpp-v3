

#include "huaweicloud/rds/v3/model/CreateDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDatabaseResponse::CreateDatabaseResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

CreateDatabaseResponse::~CreateDatabaseResponse() = default;

void CreateDatabaseResponse::validate()
{
}

web::json::value CreateDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool CreateDatabaseResponse::fromJson(const web::json::value& val)
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


std::string CreateDatabaseResponse::getResp() const
{
    return resp_;
}

void CreateDatabaseResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool CreateDatabaseResponse::respIsSet() const
{
    return respIsSet_;
}

void CreateDatabaseResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


