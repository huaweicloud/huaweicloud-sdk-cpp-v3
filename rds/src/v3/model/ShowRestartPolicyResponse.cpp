

#include "huaweicloud/rds/v3/model/ShowRestartPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRestartPolicyResponse::ShowRestartPolicyResponse()
{
    restartServer_ = false;
    restartServerIsSet_ = false;
    restartPolicyIsSet_ = false;
}

ShowRestartPolicyResponse::~ShowRestartPolicyResponse() = default;

void ShowRestartPolicyResponse::validate()
{
}

web::json::value ShowRestartPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restartServerIsSet_) {
        val[utility::conversions::to_string_t("restart_server")] = ModelBase::toJson(restartServer_);
    }
    if(restartPolicyIsSet_) {
        val[utility::conversions::to_string_t("restart_policy")] = ModelBase::toJson(restartPolicy_);
    }

    return val;
}
bool ShowRestartPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restart_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_server"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restart_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_policy"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartPolicy(refVal);
        }
    }
    return ok;
}


bool ShowRestartPolicyResponse::isRestartServer() const
{
    return restartServer_;
}

void ShowRestartPolicyResponse::setRestartServer(bool value)
{
    restartServer_ = value;
    restartServerIsSet_ = true;
}

bool ShowRestartPolicyResponse::restartServerIsSet() const
{
    return restartServerIsSet_;
}

void ShowRestartPolicyResponse::unsetrestartServer()
{
    restartServerIsSet_ = false;
}

Object ShowRestartPolicyResponse::getRestartPolicy() const
{
    return restartPolicy_;
}

void ShowRestartPolicyResponse::setRestartPolicy(const Object& value)
{
    restartPolicy_ = value;
    restartPolicyIsSet_ = true;
}

bool ShowRestartPolicyResponse::restartPolicyIsSet() const
{
    return restartPolicyIsSet_;
}

void ShowRestartPolicyResponse::unsetrestartPolicy()
{
    restartPolicyIsSet_ = false;
}

}
}
}
}
}


