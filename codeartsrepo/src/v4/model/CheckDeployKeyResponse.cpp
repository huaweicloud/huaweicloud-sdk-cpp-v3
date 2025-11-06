

#include "huaweicloud/codeartsrepo/v4/model/CheckDeployKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CheckDeployKeyResponse::CheckDeployKeyResponse()
{
    exists_ = false;
    existsIsSet_ = false;
}

CheckDeployKeyResponse::~CheckDeployKeyResponse() = default;

void CheckDeployKeyResponse::validate()
{
}

web::json::value CheckDeployKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(existsIsSet_) {
        val[utility::conversions::to_string_t("exists")] = ModelBase::toJson(exists_);
    }

    return val;
}
bool CheckDeployKeyResponse::fromJson(const web::json::value& val)
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


bool CheckDeployKeyResponse::isExists() const
{
    return exists_;
}

void CheckDeployKeyResponse::setExists(bool value)
{
    exists_ = value;
    existsIsSet_ = true;
}

bool CheckDeployKeyResponse::existsIsSet() const
{
    return existsIsSet_;
}

void CheckDeployKeyResponse::unsetexists()
{
    existsIsSet_ = false;
}

}
}
}
}
}


