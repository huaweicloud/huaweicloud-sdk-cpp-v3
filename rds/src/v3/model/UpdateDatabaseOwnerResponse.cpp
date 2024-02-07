

#include "huaweicloud/rds/v3/model/UpdateDatabaseOwnerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDatabaseOwnerResponse::UpdateDatabaseOwnerResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdateDatabaseOwnerResponse::~UpdateDatabaseOwnerResponse() = default;

void UpdateDatabaseOwnerResponse::validate()
{
}

web::json::value UpdateDatabaseOwnerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UpdateDatabaseOwnerResponse::fromJson(const web::json::value& val)
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


std::string UpdateDatabaseOwnerResponse::getResp() const
{
    return resp_;
}

void UpdateDatabaseOwnerResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdateDatabaseOwnerResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdateDatabaseOwnerResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


