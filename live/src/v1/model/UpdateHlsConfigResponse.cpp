

#include "huaweicloud/live/v1/model/UpdateHlsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateHlsConfigResponse::UpdateHlsConfigResponse()
{
    pushDomain_ = "";
    pushDomainIsSet_ = false;
    applicationIsSet_ = false;
}

UpdateHlsConfigResponse::~UpdateHlsConfigResponse() = default;

void UpdateHlsConfigResponse::validate()
{
}

web::json::value UpdateHlsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pushDomainIsSet_) {
        val[utility::conversions::to_string_t("push_domain")] = ModelBase::toJson(pushDomain_);
    }
    if(applicationIsSet_) {
        val[utility::conversions::to_string_t("application")] = ModelBase::toJson(application_);
    }

    return val;
}
bool UpdateHlsConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("push_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application"));
        if(!fieldValue.is_null())
        {
            std::vector<PushDomainApplication> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplication(refVal);
        }
    }
    return ok;
}


std::string UpdateHlsConfigResponse::getPushDomain() const
{
    return pushDomain_;
}

void UpdateHlsConfigResponse::setPushDomain(const std::string& value)
{
    pushDomain_ = value;
    pushDomainIsSet_ = true;
}

bool UpdateHlsConfigResponse::pushDomainIsSet() const
{
    return pushDomainIsSet_;
}

void UpdateHlsConfigResponse::unsetpushDomain()
{
    pushDomainIsSet_ = false;
}

std::vector<PushDomainApplication>& UpdateHlsConfigResponse::getApplication()
{
    return application_;
}

void UpdateHlsConfigResponse::setApplication(const std::vector<PushDomainApplication>& value)
{
    application_ = value;
    applicationIsSet_ = true;
}

bool UpdateHlsConfigResponse::applicationIsSet() const
{
    return applicationIsSet_;
}

void UpdateHlsConfigResponse::unsetapplication()
{
    applicationIsSet_ = false;
}

}
}
}
}
}


