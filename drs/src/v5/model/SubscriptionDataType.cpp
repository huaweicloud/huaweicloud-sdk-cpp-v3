

#include "huaweicloud/drs/v5/model/SubscriptionDataType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SubscriptionDataType::SubscriptionDataType()
{
    isDmlSubscribed_ = false;
    isDmlSubscribedIsSet_ = false;
    isDdlSubscribed_ = false;
    isDdlSubscribedIsSet_ = false;
}

SubscriptionDataType::~SubscriptionDataType() = default;

void SubscriptionDataType::validate()
{
}

web::json::value SubscriptionDataType::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isDmlSubscribedIsSet_) {
        val[utility::conversions::to_string_t("is_dml_subscribed")] = ModelBase::toJson(isDmlSubscribed_);
    }
    if(isDdlSubscribedIsSet_) {
        val[utility::conversions::to_string_t("is_ddl_subscribed")] = ModelBase::toJson(isDdlSubscribed_);
    }

    return val;
}
bool SubscriptionDataType::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_dml_subscribed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_dml_subscribed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDmlSubscribed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ddl_subscribed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ddl_subscribed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDdlSubscribed(refVal);
        }
    }
    return ok;
}


bool SubscriptionDataType::isIsDmlSubscribed() const
{
    return isDmlSubscribed_;
}

void SubscriptionDataType::setIsDmlSubscribed(bool value)
{
    isDmlSubscribed_ = value;
    isDmlSubscribedIsSet_ = true;
}

bool SubscriptionDataType::isDmlSubscribedIsSet() const
{
    return isDmlSubscribedIsSet_;
}

void SubscriptionDataType::unsetisDmlSubscribed()
{
    isDmlSubscribedIsSet_ = false;
}

bool SubscriptionDataType::isIsDdlSubscribed() const
{
    return isDdlSubscribed_;
}

void SubscriptionDataType::setIsDdlSubscribed(bool value)
{
    isDdlSubscribed_ = value;
    isDdlSubscribedIsSet_ = true;
}

bool SubscriptionDataType::isDdlSubscribedIsSet() const
{
    return isDdlSubscribedIsSet_;
}

void SubscriptionDataType::unsetisDdlSubscribed()
{
    isDdlSubscribedIsSet_ = false;
}

}
}
}
}
}


