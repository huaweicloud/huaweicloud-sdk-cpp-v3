

#include "huaweicloud/rds/v3/model/CreateDbUserResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDbUserResponse::CreateDbUserResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

CreateDbUserResponse::~CreateDbUserResponse() = default;

void CreateDbUserResponse::validate()
{
}

web::json::value CreateDbUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool CreateDbUserResponse::fromJson(const web::json::value& val)
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

std::string CreateDbUserResponse::getResp() const
{
    return resp_;
}

void CreateDbUserResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool CreateDbUserResponse::respIsSet() const
{
    return respIsSet_;
}

void CreateDbUserResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


