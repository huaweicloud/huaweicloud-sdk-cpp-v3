

#include "huaweicloud/codehub/v4/model/CheckGroupDeployKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CheckGroupDeployKeyResponse::CheckGroupDeployKeyResponse()
{
    exists_ = false;
    existsIsSet_ = false;
}

CheckGroupDeployKeyResponse::~CheckGroupDeployKeyResponse() = default;

void CheckGroupDeployKeyResponse::validate()
{
}

web::json::value CheckGroupDeployKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(existsIsSet_) {
        val[utility::conversions::to_string_t("exists")] = ModelBase::toJson(exists_);
    }

    return val;
}
bool CheckGroupDeployKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exists"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExists(refVal);
        }
    }
    return ok;
}


bool CheckGroupDeployKeyResponse::isExists() const
{
    return exists_;
}

void CheckGroupDeployKeyResponse::setExists(bool value)
{
    exists_ = value;
    existsIsSet_ = true;
}

bool CheckGroupDeployKeyResponse::existsIsSet() const
{
    return existsIsSet_;
}

void CheckGroupDeployKeyResponse::unsetexists()
{
    existsIsSet_ = false;
}

}
}
}
}
}


