

#include "huaweicloud/rds/v3/model/CreatePostgresqlDatabaseSchemaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePostgresqlDatabaseSchemaResponse::CreatePostgresqlDatabaseSchemaResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

CreatePostgresqlDatabaseSchemaResponse::~CreatePostgresqlDatabaseSchemaResponse() = default;

void CreatePostgresqlDatabaseSchemaResponse::validate()
{
}

web::json::value CreatePostgresqlDatabaseSchemaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool CreatePostgresqlDatabaseSchemaResponse::fromJson(const web::json::value& val)
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


std::string CreatePostgresqlDatabaseSchemaResponse::getResp() const
{
    return resp_;
}

void CreatePostgresqlDatabaseSchemaResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool CreatePostgresqlDatabaseSchemaResponse::respIsSet() const
{
    return respIsSet_;
}

void CreatePostgresqlDatabaseSchemaResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


