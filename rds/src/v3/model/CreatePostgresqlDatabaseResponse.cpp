

#include "huaweicloud/rds/v3/model/CreatePostgresqlDatabaseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePostgresqlDatabaseResponse::CreatePostgresqlDatabaseResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

CreatePostgresqlDatabaseResponse::~CreatePostgresqlDatabaseResponse() = default;

void CreatePostgresqlDatabaseResponse::validate()
{
}

web::json::value CreatePostgresqlDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool CreatePostgresqlDatabaseResponse::fromJson(const web::json::value& val)
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

std::string CreatePostgresqlDatabaseResponse::getResp() const
{
    return resp_;
}

void CreatePostgresqlDatabaseResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool CreatePostgresqlDatabaseResponse::respIsSet() const
{
    return respIsSet_;
}

void CreatePostgresqlDatabaseResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


