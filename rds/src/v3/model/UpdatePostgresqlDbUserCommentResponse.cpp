

#include "huaweicloud/rds/v3/model/UpdatePostgresqlDbUserCommentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlDbUserCommentResponse::UpdatePostgresqlDbUserCommentResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdatePostgresqlDbUserCommentResponse::~UpdatePostgresqlDbUserCommentResponse() = default;

void UpdatePostgresqlDbUserCommentResponse::validate()
{
}

web::json::value UpdatePostgresqlDbUserCommentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}

bool UpdatePostgresqlDbUserCommentResponse::fromJson(const web::json::value& val)
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

std::string UpdatePostgresqlDbUserCommentResponse::getResp() const
{
    return resp_;
}

void UpdatePostgresqlDbUserCommentResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdatePostgresqlDbUserCommentResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdatePostgresqlDbUserCommentResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


