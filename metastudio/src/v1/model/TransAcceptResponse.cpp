

#include "huaweicloud/metastudio/v1/model/TransAcceptResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TransAcceptResponse::TransAcceptResponse()
{
    isNeedBilling_ = false;
    isNeedBillingIsSet_ = false;
    requiredResourcesIsSet_ = false;
}

TransAcceptResponse::~TransAcceptResponse() = default;

void TransAcceptResponse::validate()
{
}

web::json::value TransAcceptResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isNeedBillingIsSet_) {
        val[utility::conversions::to_string_t("is_need_billing")] = ModelBase::toJson(isNeedBilling_);
    }
    if(requiredResourcesIsSet_) {
        val[utility::conversions::to_string_t("required_resources")] = ModelBase::toJson(requiredResources_);
    }

    return val;
}
bool TransAcceptResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_need_billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_need_billing"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNeedBilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<BillResources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequiredResources(refVal);
        }
    }
    return ok;
}


bool TransAcceptResponse::isIsNeedBilling() const
{
    return isNeedBilling_;
}

void TransAcceptResponse::setIsNeedBilling(bool value)
{
    isNeedBilling_ = value;
    isNeedBillingIsSet_ = true;
}

bool TransAcceptResponse::isNeedBillingIsSet() const
{
    return isNeedBillingIsSet_;
}

void TransAcceptResponse::unsetisNeedBilling()
{
    isNeedBillingIsSet_ = false;
}

std::vector<BillResources>& TransAcceptResponse::getRequiredResources()
{
    return requiredResources_;
}

void TransAcceptResponse::setRequiredResources(const std::vector<BillResources>& value)
{
    requiredResources_ = value;
    requiredResourcesIsSet_ = true;
}

bool TransAcceptResponse::requiredResourcesIsSet() const
{
    return requiredResourcesIsSet_;
}

void TransAcceptResponse::unsetrequiredResources()
{
    requiredResourcesIsSet_ = false;
}

}
}
}
}
}


