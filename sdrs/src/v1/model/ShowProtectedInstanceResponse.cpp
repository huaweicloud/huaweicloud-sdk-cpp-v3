

#include "huaweicloud/sdrs/v1/model/ShowProtectedInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowProtectedInstanceResponse::ShowProtectedInstanceResponse()
{
    protectedInstanceIsSet_ = false;
}

ShowProtectedInstanceResponse::~ShowProtectedInstanceResponse() = default;

void ShowProtectedInstanceResponse::validate()
{
}

web::json::value ShowProtectedInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIsSet_) {
        val[utility::conversions::to_string_t("protected_instance")] = ModelBase::toJson(protectedInstance_);
    }

    return val;
}

bool ShowProtectedInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance"));
        if(!fieldValue.is_null())
        {
            ShowProtectedInstanceParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstance(refVal);
        }
    }
    return ok;
}


ShowProtectedInstanceParams ShowProtectedInstanceResponse::getProtectedInstance() const
{
    return protectedInstance_;
}

void ShowProtectedInstanceResponse::setProtectedInstance(const ShowProtectedInstanceParams& value)
{
    protectedInstance_ = value;
    protectedInstanceIsSet_ = true;
}

bool ShowProtectedInstanceResponse::protectedInstanceIsSet() const
{
    return protectedInstanceIsSet_;
}

void ShowProtectedInstanceResponse::unsetprotectedInstance()
{
    protectedInstanceIsSet_ = false;
}

}
}
}
}
}


