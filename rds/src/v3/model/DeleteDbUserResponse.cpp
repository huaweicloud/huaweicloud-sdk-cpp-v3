

#include "huaweicloud/rds/v3/model/DeleteDbUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteDbUserResponse::DeleteDbUserResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeleteDbUserResponse::~DeleteDbUserResponse() = default;

void DeleteDbUserResponse::validate()
{
}

web::json::value DeleteDbUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool DeleteDbUserResponse::fromJson(const web::json::value& val)
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


std::string DeleteDbUserResponse::getResp() const
{
    return resp_;
}

void DeleteDbUserResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeleteDbUserResponse::respIsSet() const
{
    return respIsSet_;
}

void DeleteDbUserResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


