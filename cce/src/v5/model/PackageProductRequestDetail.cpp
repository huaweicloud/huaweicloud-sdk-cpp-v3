

#include "huaweicloud/cce/v5/model/PackageProductRequestDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




PackageProductRequestDetail::PackageProductRequestDetail()
{
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    subscriptionNum_ = 0;
    subscriptionNumIsSet_ = false;
}

PackageProductRequestDetail::~PackageProductRequestDetail() = default;

void PackageProductRequestDetail::validate()
{
}

web::json::value PackageProductRequestDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(subscriptionNumIsSet_) {
        val[utility::conversions::to_string_t("subscription_num")] = ModelBase::toJson(subscriptionNum_);
    }

    return val;
}
bool PackageProductRequestDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionNum(refVal);
        }
    }
    return ok;
}


std::string PackageProductRequestDetail::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void PackageProductRequestDetail::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool PackageProductRequestDetail::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void PackageProductRequestDetail::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

int32_t PackageProductRequestDetail::getSubscriptionNum() const
{
    return subscriptionNum_;
}

void PackageProductRequestDetail::setSubscriptionNum(int32_t value)
{
    subscriptionNum_ = value;
    subscriptionNumIsSet_ = true;
}

bool PackageProductRequestDetail::subscriptionNumIsSet() const
{
    return subscriptionNumIsSet_;
}

void PackageProductRequestDetail::unsetsubscriptionNum()
{
    subscriptionNumIsSet_ = false;
}

}
}
}
}
}


