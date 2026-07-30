

#include "huaweicloud/modelarts/v1/model/UpdateAuthModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateAuthModeResponse::UpdateAuthModeResponse()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

UpdateAuthModeResponse::~UpdateAuthModeResponse() = default;

void UpdateAuthModeResponse::validate()
{
}

web::json::value UpdateAuthModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool UpdateAuthModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string UpdateAuthModeResponse::getDomainId() const
{
    return domainId_;
}

void UpdateAuthModeResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateAuthModeResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateAuthModeResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateAuthModeResponse::getMode() const
{
    return mode_;
}

void UpdateAuthModeResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool UpdateAuthModeResponse::modeIsSet() const
{
    return modeIsSet_;
}

void UpdateAuthModeResponse::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


