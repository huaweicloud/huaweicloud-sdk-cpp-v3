

#include "huaweicloud/sdrs/v1/model/UpdateProtectedInstanceNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateProtectedInstanceNameResponse::UpdateProtectedInstanceNameResponse()
{
    protectedInstanceIsSet_ = false;
}

UpdateProtectedInstanceNameResponse::~UpdateProtectedInstanceNameResponse() = default;

void UpdateProtectedInstanceNameResponse::validate()
{
}

web::json::value UpdateProtectedInstanceNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIsSet_) {
        val[utility::conversions::to_string_t("protected_instance")] = ModelBase::toJson(protectedInstance_);
    }

    return val;
}
bool UpdateProtectedInstanceNameResponse::fromJson(const web::json::value& val)
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


ShowProtectedInstanceParams UpdateProtectedInstanceNameResponse::getProtectedInstance() const
{
    return protectedInstance_;
}

void UpdateProtectedInstanceNameResponse::setProtectedInstance(const ShowProtectedInstanceParams& value)
{
    protectedInstance_ = value;
    protectedInstanceIsSet_ = true;
}

bool UpdateProtectedInstanceNameResponse::protectedInstanceIsSet() const
{
    return protectedInstanceIsSet_;
}

void UpdateProtectedInstanceNameResponse::unsetprotectedInstance()
{
    protectedInstanceIsSet_ = false;
}

}
}
}
}
}


