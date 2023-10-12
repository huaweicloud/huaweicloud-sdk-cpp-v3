

#include "huaweicloud/rds/v3/model/UpdateDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDatabaseResponse::UpdateDatabaseResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdateDatabaseResponse::~UpdateDatabaseResponse() = default;

void UpdateDatabaseResponse::validate()
{
}

web::json::value UpdateDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UpdateDatabaseResponse::fromJson(const web::json::value& val)
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


std::string UpdateDatabaseResponse::getResp() const
{
    return resp_;
}

void UpdateDatabaseResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdateDatabaseResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdateDatabaseResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


