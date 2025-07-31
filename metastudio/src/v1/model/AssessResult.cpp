

#include "huaweicloud/metastudio/v1/model/AssessResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AssessResult::AssessResult()
{
    speedIsSet_ = false;
    soundIsSet_ = false;
    snrIsSet_ = false;
    reverbIsSet_ = false;
    dnsmosOvrlIsSet_ = false;
    dnsmosBakIsSet_ = false;
    suggestion_ = "";
    suggestionIsSet_ = false;
}

AssessResult::~AssessResult() = default;

void AssessResult::validate()
{
}

web::json::value AssessResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(speedIsSet_) {
        val[utility::conversions::to_string_t("speed")] = ModelBase::toJson(speed_);
    }
    if(soundIsSet_) {
        val[utility::conversions::to_string_t("sound")] = ModelBase::toJson(sound_);
    }
    if(snrIsSet_) {
        val[utility::conversions::to_string_t("snr")] = ModelBase::toJson(snr_);
    }
    if(reverbIsSet_) {
        val[utility::conversions::to_string_t("reverb")] = ModelBase::toJson(reverb_);
    }
    if(dnsmosOvrlIsSet_) {
        val[utility::conversions::to_string_t("dnsmos_ovrl")] = ModelBase::toJson(dnsmosOvrl_);
    }
    if(dnsmosBakIsSet_) {
        val[utility::conversions::to_string_t("dnsmos_bak")] = ModelBase::toJson(dnsmosBak_);
    }
    if(suggestionIsSet_) {
        val[utility::conversions::to_string_t("suggestion")] = ModelBase::toJson(suggestion_);
    }

    return val;
}
bool AssessResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed"));
        if(!fieldValue.is_null())
        {
            AssessProperty refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sound"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sound"));
        if(!fieldValue.is_null())
        {
            AssessProperty refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSound(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snr"));
        if(!fieldValue.is_null())
        {
            AssessProperty refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reverb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reverb"));
        if(!fieldValue.is_null())
        {
            AssessProperty refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReverb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dnsmos_ovrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dnsmos_ovrl"));
        if(!fieldValue.is_null())
        {
            AssessProperty refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsmosOvrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dnsmos_bak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dnsmos_bak"));
        if(!fieldValue.is_null())
        {
            AssessProperty refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsmosBak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggestion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggestion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestion(refVal);
        }
    }
    return ok;
}


AssessProperty AssessResult::getSpeed() const
{
    return speed_;
}

void AssessResult::setSpeed(const AssessProperty& value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool AssessResult::speedIsSet() const
{
    return speedIsSet_;
}

void AssessResult::unsetspeed()
{
    speedIsSet_ = false;
}

AssessProperty AssessResult::getSound() const
{
    return sound_;
}

void AssessResult::setSound(const AssessProperty& value)
{
    sound_ = value;
    soundIsSet_ = true;
}

bool AssessResult::soundIsSet() const
{
    return soundIsSet_;
}

void AssessResult::unsetsound()
{
    soundIsSet_ = false;
}

AssessProperty AssessResult::getSnr() const
{
    return snr_;
}

void AssessResult::setSnr(const AssessProperty& value)
{
    snr_ = value;
    snrIsSet_ = true;
}

bool AssessResult::snrIsSet() const
{
    return snrIsSet_;
}

void AssessResult::unsetsnr()
{
    snrIsSet_ = false;
}

AssessProperty AssessResult::getReverb() const
{
    return reverb_;
}

void AssessResult::setReverb(const AssessProperty& value)
{
    reverb_ = value;
    reverbIsSet_ = true;
}

bool AssessResult::reverbIsSet() const
{
    return reverbIsSet_;
}

void AssessResult::unsetreverb()
{
    reverbIsSet_ = false;
}

AssessProperty AssessResult::getDnsmosOvrl() const
{
    return dnsmosOvrl_;
}

void AssessResult::setDnsmosOvrl(const AssessProperty& value)
{
    dnsmosOvrl_ = value;
    dnsmosOvrlIsSet_ = true;
}

bool AssessResult::dnsmosOvrlIsSet() const
{
    return dnsmosOvrlIsSet_;
}

void AssessResult::unsetdnsmosOvrl()
{
    dnsmosOvrlIsSet_ = false;
}

AssessProperty AssessResult::getDnsmosBak() const
{
    return dnsmosBak_;
}

void AssessResult::setDnsmosBak(const AssessProperty& value)
{
    dnsmosBak_ = value;
    dnsmosBakIsSet_ = true;
}

bool AssessResult::dnsmosBakIsSet() const
{
    return dnsmosBakIsSet_;
}

void AssessResult::unsetdnsmosBak()
{
    dnsmosBakIsSet_ = false;
}

std::string AssessResult::getSuggestion() const
{
    return suggestion_;
}

void AssessResult::setSuggestion(const std::string& value)
{
    suggestion_ = value;
    suggestionIsSet_ = true;
}

bool AssessResult::suggestionIsSet() const
{
    return suggestionIsSet_;
}

void AssessResult::unsetsuggestion()
{
    suggestionIsSet_ = false;
}

}
}
}
}
}


