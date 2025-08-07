

#include "huaweicloud/rds/v3/model/BusinessPartner.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BusinessPartner::BusinessPartner()
{
    bpDomainId_ = "";
    bpDomainIdIsSet_ = false;
    bpName_ = "";
    bpNameIsSet_ = false;
    order_ = 0;
    orderIsSet_ = false;
    international_ = false;
    internationalIsSet_ = false;
}

BusinessPartner::~BusinessPartner() = default;

void BusinessPartner::validate()
{
}

web::json::value BusinessPartner::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bpDomainIdIsSet_) {
        val[utility::conversions::to_string_t("bp_domain_id")] = ModelBase::toJson(bpDomainId_);
    }
    if(bpNameIsSet_) {
        val[utility::conversions::to_string_t("bp_name")] = ModelBase::toJson(bpName_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(internationalIsSet_) {
        val[utility::conversions::to_string_t("international")] = ModelBase::toJson(international_);
    }

    return val;
}
bool BusinessPartner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bp_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bp_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBpDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bp_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bp_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBpName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("international"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("international"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternational(refVal);
        }
    }
    return ok;
}


std::string BusinessPartner::getBpDomainId() const
{
    return bpDomainId_;
}

void BusinessPartner::setBpDomainId(const std::string& value)
{
    bpDomainId_ = value;
    bpDomainIdIsSet_ = true;
}

bool BusinessPartner::bpDomainIdIsSet() const
{
    return bpDomainIdIsSet_;
}

void BusinessPartner::unsetbpDomainId()
{
    bpDomainIdIsSet_ = false;
}

std::string BusinessPartner::getBpName() const
{
    return bpName_;
}

void BusinessPartner::setBpName(const std::string& value)
{
    bpName_ = value;
    bpNameIsSet_ = true;
}

bool BusinessPartner::bpNameIsSet() const
{
    return bpNameIsSet_;
}

void BusinessPartner::unsetbpName()
{
    bpNameIsSet_ = false;
}

int32_t BusinessPartner::getOrder() const
{
    return order_;
}

void BusinessPartner::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool BusinessPartner::orderIsSet() const
{
    return orderIsSet_;
}

void BusinessPartner::unsetorder()
{
    orderIsSet_ = false;
}

bool BusinessPartner::isInternational() const
{
    return international_;
}

void BusinessPartner::setInternational(bool value)
{
    international_ = value;
    internationalIsSet_ = true;
}

bool BusinessPartner::internationalIsSet() const
{
    return internationalIsSet_;
}

void BusinessPartner::unsetinternational()
{
    internationalIsSet_ = false;
}

}
}
}
}
}


