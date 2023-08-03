

#include "huaweicloud/rds/v3/model/CreatePostgresqlDbUserResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePostgresqlDbUserResponse::CreatePostgresqlDbUserResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

CreatePostgresqlDbUserResponse::~CreatePostgresqlDbUserResponse() = default;

void CreatePostgresqlDbUserResponse::validate()
{
}

web::json::value CreatePostgresqlDbUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool CreatePostgresqlDbUserResponse::fromJson(const web::json::value& val)
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

std::string CreatePostgresqlDbUserResponse::getResp() const
{
    return resp_;
}

void CreatePostgresqlDbUserResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool CreatePostgresqlDbUserResponse::respIsSet() const
{
    return respIsSet_;
}

void CreatePostgresqlDbUserResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


