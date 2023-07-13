

#include "huaweicloud/vod/v1/model/PlayInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PlayInfo::PlayInfo()
{
    playType_ = "";
    playTypeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    encrypted_ = 0;
    encryptedIsSet_ = false;
    metaDataIsSet_ = false;
}

PlayInfo::~PlayInfo() = default;

void PlayInfo::validate()
{
}

web::json::value PlayInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playTypeIsSet_) {
        val[utility::conversions::to_string_t("play_type")] = ModelBase::toJson(playType_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(encryptedIsSet_) {
        val[utility::conversions::to_string_t("encrypted")] = ModelBase::toJson(encrypted_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }

    return val;
}

bool PlayInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("meta_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_data"));
        if(!fieldValue.is_null())
        {
            MetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaData(refVal);
        }
    }
    return ok;
}

std::string PlayInfo::getPlayType() const
{
    return playType_;
}

void PlayInfo::setPlayType(const std::string& value)
{
    playType_ = value;
    playTypeIsSet_ = true;
}

bool PlayInfo::playTypeIsSet() const
{
    return playTypeIsSet_;
}

void PlayInfo::unsetplayType()
{
    playTypeIsSet_ = false;
}

std::string PlayInfo::getUrl() const
{
    return url_;
}

void PlayInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool PlayInfo::urlIsSet() const
{
    return urlIsSet_;
}

void PlayInfo::unseturl()
{
    urlIsSet_ = false;
}

int32_t PlayInfo::getEncrypted() const
{
    return encrypted_;
}

void PlayInfo::setEncrypted(int32_t value)
{
    encrypted_ = value;
    encryptedIsSet_ = true;
}

bool PlayInfo::encryptedIsSet() const
{
    return encryptedIsSet_;
}

void PlayInfo::unsetencrypted()
{
    encryptedIsSet_ = false;
}

MetaData PlayInfo::getMetaData() const
{
    return metaData_;
}

void PlayInfo::setMetaData(const MetaData& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool PlayInfo::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void PlayInfo::unsetmetaData()
{
    metaDataIsSet_ = false;
}

}
}
}
}
}


