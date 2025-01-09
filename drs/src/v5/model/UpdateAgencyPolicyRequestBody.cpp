

#include "huaweicloud/drs/v5/model/UpdateAgencyPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateAgencyPolicyRequestBody::UpdateAgencyPolicyRequestBody()
{
    unbindRoleNamesIsSet_ = false;
    bindRoleNamesIsSet_ = false;
}

UpdateAgencyPolicyRequestBody::~UpdateAgencyPolicyRequestBody() = default;

void UpdateAgencyPolicyRequestBody::validate()
{
}

web::json::value UpdateAgencyPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(unbindRoleNamesIsSet_) {
        val[utility::conversions::to_string_t("unbind_role_names")] = ModelBase::toJson(unbindRoleNames_);
    }
    if(bindRoleNamesIsSet_) {
        val[utility::conversions::to_string_t("bind_role_names")] = ModelBase::toJson(bindRoleNames_);
    }

    return val;
}
bool UpdateAgencyPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("unbind_role_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unbind_role_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnbindRoleNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bind_role_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bind_role_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindRoleNames(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UpdateAgencyPolicyRequestBody::getUnbindRoleNames()
{
    return unbindRoleNames_;
}

void UpdateAgencyPolicyRequestBody::setUnbindRoleNames(const std::vector<std::string>& value)
{
    unbindRoleNames_ = value;
    unbindRoleNamesIsSet_ = true;
}

bool UpdateAgencyPolicyRequestBody::unbindRoleNamesIsSet() const
{
    return unbindRoleNamesIsSet_;
}

void UpdateAgencyPolicyRequestBody::unsetunbindRoleNames()
{
    unbindRoleNamesIsSet_ = false;
}

std::vector<std::string>& UpdateAgencyPolicyRequestBody::getBindRoleNames()
{
    return bindRoleNames_;
}

void UpdateAgencyPolicyRequestBody::setBindRoleNames(const std::vector<std::string>& value)
{
    bindRoleNames_ = value;
    bindRoleNamesIsSet_ = true;
}

bool UpdateAgencyPolicyRequestBody::bindRoleNamesIsSet() const
{
    return bindRoleNamesIsSet_;
}

void UpdateAgencyPolicyRequestBody::unsetbindRoleNames()
{
    bindRoleNamesIsSet_ = false;
}

}
}
}
}
}


