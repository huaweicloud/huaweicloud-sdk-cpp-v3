

#include "huaweicloud/rds/v3/model/UpdateDbUserCommentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDbUserCommentResponse::UpdateDbUserCommentResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

UpdateDbUserCommentResponse::~UpdateDbUserCommentResponse() = default;

void UpdateDbUserCommentResponse::validate()
{
}

web::json::value UpdateDbUserCommentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool UpdateDbUserCommentResponse::fromJson(const web::json::value& val)
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


std::string UpdateDbUserCommentResponse::getResp() const
{
    return resp_;
}

void UpdateDbUserCommentResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool UpdateDbUserCommentResponse::respIsSet() const
{
    return respIsSet_;
}

void UpdateDbUserCommentResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


