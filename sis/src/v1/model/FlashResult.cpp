

#include "huaweicloud/sis/v1/model/FlashResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




FlashResult::FlashResult()
{
    channelId_ = 0;
    channelIdIsSet_ = false;
    sentencesIsSet_ = false;
}

FlashResult::~FlashResult() = default;

void FlashResult::validate()
{
}

web::json::value FlashResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(channelIdIsSet_) {
        val[utility::conversions::to_string_t("channel_id")] = ModelBase::toJson(channelId_);
    }
    if(sentencesIsSet_) {
        val[utility::conversions::to_string_t("sentences")] = ModelBase::toJson(sentences_);
    }

    return val;
}

bool FlashResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("channel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sentences"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sentences"));
        if(!fieldValue.is_null())
        {
            std::vector<Sentences> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSentences(refVal);
        }
    }
    return ok;
}

int32_t FlashResult::getChannelId() const
{
    return channelId_;
}

void FlashResult::setChannelId(int32_t value)
{
    channelId_ = value;
    channelIdIsSet_ = true;
}

bool FlashResult::channelIdIsSet() const
{
    return channelIdIsSet_;
}

void FlashResult::unsetchannelId()
{
    channelIdIsSet_ = false;
}

std::vector<Sentences>& FlashResult::getSentences()
{
    return sentences_;
}

void FlashResult::setSentences(const std::vector<Sentences>& value)
{
    sentences_ = value;
    sentencesIsSet_ = true;
}

bool FlashResult::sentencesIsSet() const
{
    return sentencesIsSet_;
}

void FlashResult::unsetsentences()
{
    sentencesIsSet_ = false;
}

}
}
}
}
}


