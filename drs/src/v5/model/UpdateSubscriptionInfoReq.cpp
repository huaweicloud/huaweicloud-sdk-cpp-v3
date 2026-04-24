

#include "huaweicloud/drs/v5/model/UpdateSubscriptionInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateSubscriptionInfoReq::UpdateSubscriptionInfoReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    consumeTime_ = 0L;
    consumeTimeIsSet_ = false;
}

UpdateSubscriptionInfoReq::~UpdateSubscriptionInfoReq() = default;

void UpdateSubscriptionInfoReq::validate()
{
}

web::json::value UpdateSubscriptionInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(consumeTimeIsSet_) {
        val[utility::conversions::to_string_t("consume_time")] = ModelBase::toJson(consumeTime_);
    }

    return val;
}
bool UpdateSubscriptionInfoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consume_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consume_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsumeTime(refVal);
        }
    }
    return ok;
}


std::string UpdateSubscriptionInfoReq::getName() const
{
    return name_;
}

void UpdateSubscriptionInfoReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateSubscriptionInfoReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateSubscriptionInfoReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateSubscriptionInfoReq::getDescription() const
{
    return description_;
}

void UpdateSubscriptionInfoReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateSubscriptionInfoReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateSubscriptionInfoReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t UpdateSubscriptionInfoReq::getConsumeTime() const
{
    return consumeTime_;
}

void UpdateSubscriptionInfoReq::setConsumeTime(int64_t value)
{
    consumeTime_ = value;
    consumeTimeIsSet_ = true;
}

bool UpdateSubscriptionInfoReq::consumeTimeIsSet() const
{
    return consumeTimeIsSet_;
}

void UpdateSubscriptionInfoReq::unsetconsumeTime()
{
    consumeTimeIsSet_ = false;
}

}
}
}
}
}


