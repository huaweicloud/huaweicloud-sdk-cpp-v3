

#include "huaweicloud/sdrs/v1/model/UpdateProtectedInstanceNameRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateProtectedInstanceNameRequestBody::UpdateProtectedInstanceNameRequestBody()
{
    protectedInstanceIsSet_ = false;
}

UpdateProtectedInstanceNameRequestBody::~UpdateProtectedInstanceNameRequestBody() = default;

void UpdateProtectedInstanceNameRequestBody::validate()
{
}

web::json::value UpdateProtectedInstanceNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIsSet_) {
        val[utility::conversions::to_string_t("protected_instance")] = ModelBase::toJson(protectedInstance_);
    }

    return val;
}

bool UpdateProtectedInstanceNameRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance"));
        if(!fieldValue.is_null())
        {
            UpdateProtectedInstanceNameRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstance(refVal);
        }
    }
    return ok;
}

UpdateProtectedInstanceNameRequestParams UpdateProtectedInstanceNameRequestBody::getProtectedInstance() const
{
    return protectedInstance_;
}

void UpdateProtectedInstanceNameRequestBody::setProtectedInstance(const UpdateProtectedInstanceNameRequestParams& value)
{
    protectedInstance_ = value;
    protectedInstanceIsSet_ = true;
}

bool UpdateProtectedInstanceNameRequestBody::protectedInstanceIsSet() const
{
    return protectedInstanceIsSet_;
}

void UpdateProtectedInstanceNameRequestBody::unsetprotectedInstance()
{
    protectedInstanceIsSet_ = false;
}

}
}
}
}
}


