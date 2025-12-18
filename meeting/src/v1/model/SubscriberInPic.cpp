

#include "huaweicloud/meeting/v1/model/SubscriberInPic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SubscriberInPic::SubscriberInPic()
{
    index_ = 0;
    indexIsSet_ = false;
    subscriberIsSet_ = false;
    isAssistStream_ = 0;
    isAssistStreamIsSet_ = false;
}

SubscriberInPic::~SubscriberInPic() = default;

void SubscriberInPic::validate()
{
}

web::json::value SubscriberInPic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }
    if(subscriberIsSet_) {
        val[utility::conversions::to_string_t("subscriber")] = ModelBase::toJson(subscriber_);
    }
    if(isAssistStreamIsSet_) {
        val[utility::conversions::to_string_t("isAssistStream")] = ModelBase::toJson(isAssistStream_);
    }

    return val;
}
bool SubscriberInPic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriber"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAssistStream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAssistStream"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAssistStream(refVal);
        }
    }
    return ok;
}


int32_t SubscriberInPic::getIndex() const
{
    return index_;
}

void SubscriberInPic::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool SubscriberInPic::indexIsSet() const
{
    return indexIsSet_;
}

void SubscriberInPic::unsetindex()
{
    indexIsSet_ = false;
}

std::vector<std::string>& SubscriberInPic::getSubscriber()
{
    return subscriber_;
}

void SubscriberInPic::setSubscriber(const std::vector<std::string>& value)
{
    subscriber_ = value;
    subscriberIsSet_ = true;
}

bool SubscriberInPic::subscriberIsSet() const
{
    return subscriberIsSet_;
}

void SubscriberInPic::unsetsubscriber()
{
    subscriberIsSet_ = false;
}

int32_t SubscriberInPic::getIsAssistStream() const
{
    return isAssistStream_;
}

void SubscriberInPic::setIsAssistStream(int32_t value)
{
    isAssistStream_ = value;
    isAssistStreamIsSet_ = true;
}

bool SubscriberInPic::isAssistStreamIsSet() const
{
    return isAssistStreamIsSet_;
}

void SubscriberInPic::unsetisAssistStream()
{
    isAssistStreamIsSet_ = false;
}

}
}
}
}
}


