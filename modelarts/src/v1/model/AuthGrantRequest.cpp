

#include "huaweicloud/modelarts/v1/model/AuthGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AuthGrantRequest::AuthGrantRequest()
{
    isReset_ = false;
    isResetIsSet_ = false;
}

AuthGrantRequest::~AuthGrantRequest() = default;

void AuthGrantRequest::validate()
{
}

web::json::value AuthGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isResetIsSet_) {
        val[utility::conversions::to_string_t("is_reset")] = ModelBase::toJson(isReset_);
    }

    return val;
}
bool AuthGrantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_reset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_reset"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReset(refVal);
        }
    }
    return ok;
}


bool AuthGrantRequest::isIsReset() const
{
    return isReset_;
}

void AuthGrantRequest::setIsReset(bool value)
{
    isReset_ = value;
    isResetIsSet_ = true;
}

bool AuthGrantRequest::isResetIsSet() const
{
    return isResetIsSet_;
}

void AuthGrantRequest::unsetisReset()
{
    isResetIsSet_ = false;
}

}
}
}
}
}


