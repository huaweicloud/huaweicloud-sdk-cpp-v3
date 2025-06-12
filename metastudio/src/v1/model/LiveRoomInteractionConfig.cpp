

#include "huaweicloud/metastudio/v1/model/LiveRoomInteractionConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveRoomInteractionConfig::LiveRoomInteractionConfig()
{
    playType_ = "";
    playTypeIsSet_ = false;
    ignoreCurrentSentence_ = false;
    ignoreCurrentSentenceIsSet_ = false;
}

LiveRoomInteractionConfig::~LiveRoomInteractionConfig() = default;

void LiveRoomInteractionConfig::validate()
{
}

web::json::value LiveRoomInteractionConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playTypeIsSet_) {
        val[utility::conversions::to_string_t("play_type")] = ModelBase::toJson(playType_);
    }
    if(ignoreCurrentSentenceIsSet_) {
        val[utility::conversions::to_string_t("ignore_current_sentence")] = ModelBase::toJson(ignoreCurrentSentence_);
    }

    return val;
}
bool LiveRoomInteractionConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ignore_current_sentence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_current_sentence"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreCurrentSentence(refVal);
        }
    }
    return ok;
}


std::string LiveRoomInteractionConfig::getPlayType() const
{
    return playType_;
}

void LiveRoomInteractionConfig::setPlayType(const std::string& value)
{
    playType_ = value;
    playTypeIsSet_ = true;
}

bool LiveRoomInteractionConfig::playTypeIsSet() const
{
    return playTypeIsSet_;
}

void LiveRoomInteractionConfig::unsetplayType()
{
    playTypeIsSet_ = false;
}

bool LiveRoomInteractionConfig::isIgnoreCurrentSentence() const
{
    return ignoreCurrentSentence_;
}

void LiveRoomInteractionConfig::setIgnoreCurrentSentence(bool value)
{
    ignoreCurrentSentence_ = value;
    ignoreCurrentSentenceIsSet_ = true;
}

bool LiveRoomInteractionConfig::ignoreCurrentSentenceIsSet() const
{
    return ignoreCurrentSentenceIsSet_;
}

void LiveRoomInteractionConfig::unsetignoreCurrentSentence()
{
    ignoreCurrentSentenceIsSet_ = false;
}

}
}
}
}
}


