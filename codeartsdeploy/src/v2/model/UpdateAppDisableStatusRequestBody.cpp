

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppDisableStatusRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppDisableStatusRequestBody::UpdateAppDisableStatusRequestBody()
{
    isDisable_ = false;
    isDisableIsSet_ = false;
}

UpdateAppDisableStatusRequestBody::~UpdateAppDisableStatusRequestBody() = default;

void UpdateAppDisableStatusRequestBody::validate()
{
}

web::json::value UpdateAppDisableStatusRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isDisableIsSet_) {
        val[utility::conversions::to_string_t("is_disable")] = ModelBase::toJson(isDisable_);
    }

    return val;
}
bool UpdateAppDisableStatusRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_disable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDisable(refVal);
        }
    }
    return ok;
}


bool UpdateAppDisableStatusRequestBody::isIsDisable() const
{
    return isDisable_;
}

void UpdateAppDisableStatusRequestBody::setIsDisable(bool value)
{
    isDisable_ = value;
    isDisableIsSet_ = true;
}

bool UpdateAppDisableStatusRequestBody::isDisableIsSet() const
{
    return isDisableIsSet_;
}

void UpdateAppDisableStatusRequestBody::unsetisDisable()
{
    isDisableIsSet_ = false;
}

}
}
}
}
}


