

#include "huaweicloud/identitycenter/v1/model/GetCustomPolicyForPermissionSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetCustomPolicyForPermissionSetResponse::GetCustomPolicyForPermissionSetResponse()
{
    customPolicy_ = "";
    customPolicyIsSet_ = false;
}

GetCustomPolicyForPermissionSetResponse::~GetCustomPolicyForPermissionSetResponse() = default;

void GetCustomPolicyForPermissionSetResponse::validate()
{
}

web::json::value GetCustomPolicyForPermissionSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customPolicyIsSet_) {
        val[utility::conversions::to_string_t("custom_policy")] = ModelBase::toJson(customPolicy_);
    }

    return val;
}
bool GetCustomPolicyForPermissionSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomPolicy(refVal);
        }
    }
    return ok;
}


std::string GetCustomPolicyForPermissionSetResponse::getCustomPolicy() const
{
    return customPolicy_;
}

void GetCustomPolicyForPermissionSetResponse::setCustomPolicy(const std::string& value)
{
    customPolicy_ = value;
    customPolicyIsSet_ = true;
}

bool GetCustomPolicyForPermissionSetResponse::customPolicyIsSet() const
{
    return customPolicyIsSet_;
}

void GetCustomPolicyForPermissionSetResponse::unsetcustomPolicy()
{
    customPolicyIsSet_ = false;
}

}
}
}
}
}


