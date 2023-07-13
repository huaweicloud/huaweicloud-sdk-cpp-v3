

#include "huaweicloud/cdn/v1/model/Follow302StatusBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




Follow302StatusBody::Follow302StatusBody()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    followStatus_ = "";
    followStatusIsSet_ = false;
}

Follow302StatusBody::~Follow302StatusBody() = default;

void Follow302StatusBody::validate()
{
}

web::json::value Follow302StatusBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(followStatusIsSet_) {
        val[utility::conversions::to_string_t("follow_status")] = ModelBase::toJson(followStatus_);
    }

    return val;
}

bool Follow302StatusBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("follow_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("follow_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFollowStatus(refVal);
        }
    }
    return ok;
}

std::string Follow302StatusBody::getDomainId() const
{
    return domainId_;
}

void Follow302StatusBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool Follow302StatusBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void Follow302StatusBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string Follow302StatusBody::getFollowStatus() const
{
    return followStatus_;
}

void Follow302StatusBody::setFollowStatus(const std::string& value)
{
    followStatus_ = value;
    followStatusIsSet_ = true;
}

bool Follow302StatusBody::followStatusIsSet() const
{
    return followStatusIsSet_;
}

void Follow302StatusBody::unsetfollowStatus()
{
    followStatusIsSet_ = false;
}

}
}
}
}
}


