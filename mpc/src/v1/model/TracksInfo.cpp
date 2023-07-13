

#include "huaweicloud/mpc/v1/model/TracksInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TracksInfo::TracksInfo()
{
    channelLayout_ = "";
    channelLayoutIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

TracksInfo::~TracksInfo() = default;

void TracksInfo::validate()
{
}

web::json::value TracksInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(channelLayoutIsSet_) {
        val[utility::conversions::to_string_t("channel_layout")] = ModelBase::toJson(channelLayout_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}

bool TracksInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("channel_layout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel_layout"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannelLayout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}

std::string TracksInfo::getChannelLayout() const
{
    return channelLayout_;
}

void TracksInfo::setChannelLayout(const std::string& value)
{
    channelLayout_ = value;
    channelLayoutIsSet_ = true;
}

bool TracksInfo::channelLayoutIsSet() const
{
    return channelLayoutIsSet_;
}

void TracksInfo::unsetchannelLayout()
{
    channelLayoutIsSet_ = false;
}

std::string TracksInfo::getLanguage() const
{
    return language_;
}

void TracksInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool TracksInfo::languageIsSet() const
{
    return languageIsSet_;
}

void TracksInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


