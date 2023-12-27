

#include "huaweicloud/rds/v3/model/SetInstancesNewDbShrinkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetInstancesNewDbShrinkResponse::SetInstancesNewDbShrinkResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

SetInstancesNewDbShrinkResponse::~SetInstancesNewDbShrinkResponse() = default;

void SetInstancesNewDbShrinkResponse::validate()
{
}

web::json::value SetInstancesNewDbShrinkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool SetInstancesNewDbShrinkResponse::fromJson(const web::json::value& val)
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


std::string SetInstancesNewDbShrinkResponse::getResp() const
{
    return resp_;
}

void SetInstancesNewDbShrinkResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool SetInstancesNewDbShrinkResponse::respIsSet() const
{
    return respIsSet_;
}

void SetInstancesNewDbShrinkResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


