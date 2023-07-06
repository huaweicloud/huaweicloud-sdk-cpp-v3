

#include "huaweicloud/cdn/v1/model/OriginRangeBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




OriginRangeBody::OriginRangeBody()
{
    rangeStatus_ = "";
    rangeStatusIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

OriginRangeBody::~OriginRangeBody() = default;

void OriginRangeBody::validate()
{
}

web::json::value OriginRangeBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rangeStatusIsSet_) {
        val[utility::conversions::to_string_t("range_status")] = ModelBase::toJson(rangeStatus_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}

bool OriginRangeBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("range_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRangeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}

std::string OriginRangeBody::getRangeStatus() const
{
    return rangeStatus_;
}

void OriginRangeBody::setRangeStatus(const std::string& value)
{
    rangeStatus_ = value;
    rangeStatusIsSet_ = true;
}

bool OriginRangeBody::rangeStatusIsSet() const
{
    return rangeStatusIsSet_;
}

void OriginRangeBody::unsetrangeStatus()
{
    rangeStatusIsSet_ = false;
}

std::string OriginRangeBody::getDomainId() const
{
    return domainId_;
}

void OriginRangeBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool OriginRangeBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void OriginRangeBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


