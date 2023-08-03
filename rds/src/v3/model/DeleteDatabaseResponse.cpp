

#include "huaweicloud/rds/v3/model/DeleteDatabaseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteDatabaseResponse::DeleteDatabaseResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeleteDatabaseResponse::~DeleteDatabaseResponse() = default;

void DeleteDatabaseResponse::validate()
{
}

web::json::value DeleteDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool DeleteDatabaseResponse::fromJson(const web::json::value& val)
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

std::string DeleteDatabaseResponse::getResp() const
{
    return resp_;
}

void DeleteDatabaseResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeleteDatabaseResponse::respIsSet() const
{
    return respIsSet_;
}

void DeleteDatabaseResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


