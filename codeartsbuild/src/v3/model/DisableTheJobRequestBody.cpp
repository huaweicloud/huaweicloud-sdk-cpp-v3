

#include "huaweicloud/codeartsbuild/v3/model/DisableTheJobRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DisableTheJobRequestBody::DisableTheJobRequestBody()
{
    reason_ = "";
    reasonIsSet_ = false;
    disabled_ = false;
    disabledIsSet_ = false;
}

DisableTheJobRequestBody::~DisableTheJobRequestBody() = default;

void DisableTheJobRequestBody::validate()
{
}

web::json::value DisableTheJobRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }

    return val;
}
bool DisableTheJobRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
        }
    }
    return ok;
}


std::string DisableTheJobRequestBody::getReason() const
{
    return reason_;
}

void DisableTheJobRequestBody::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool DisableTheJobRequestBody::reasonIsSet() const
{
    return reasonIsSet_;
}

void DisableTheJobRequestBody::unsetreason()
{
    reasonIsSet_ = false;
}

bool DisableTheJobRequestBody::isDisabled() const
{
    return disabled_;
}

void DisableTheJobRequestBody::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool DisableTheJobRequestBody::disabledIsSet() const
{
    return disabledIsSet_;
}

void DisableTheJobRequestBody::unsetdisabled()
{
    disabledIsSet_ = false;
}

}
}
}
}
}


