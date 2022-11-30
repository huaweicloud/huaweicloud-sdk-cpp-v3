

#include "huaweicloud/vod/v1/model/Output.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




Output::Output()
{
    playType_ = "";
    playTypeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    encrypted_ = 0;
    encryptedIsSet_ = false;
    quality_ = "";
    qualityIsSet_ = false;
    metaDataIsSet_ = false;
}

Output::~Output() = default;

void Output::validate()
{
}

web::json::value Output::toJson() const
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
    if(qualityIsSet_) {
        val[utility::conversions::to_string_t("quality")] = ModelBase::toJson(quality_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }

    return val;
}

bool Output::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuality(refVal);
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


std::string Output::getPlayType() const
{
    return playType_;
}

void Output::setPlayType(const std::string& value)
{
    playType_ = value;
    playTypeIsSet_ = true;
}

bool Output::playTypeIsSet() const
{
    return playTypeIsSet_;
}

void Output::unsetplayType()
{
    playTypeIsSet_ = false;
}

std::string Output::getUrl() const
{
    return url_;
}

void Output::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool Output::urlIsSet() const
{
    return urlIsSet_;
}

void Output::unseturl()
{
    urlIsSet_ = false;
}

int32_t Output::getEncrypted() const
{
    return encrypted_;
}

void Output::setEncrypted(int32_t value)
{
    encrypted_ = value;
    encryptedIsSet_ = true;
}

bool Output::encryptedIsSet() const
{
    return encryptedIsSet_;
}

void Output::unsetencrypted()
{
    encryptedIsSet_ = false;
}

std::string Output::getQuality() const
{
    return quality_;
}

void Output::setQuality(const std::string& value)
{
    quality_ = value;
    qualityIsSet_ = true;
}

bool Output::qualityIsSet() const
{
    return qualityIsSet_;
}

void Output::unsetquality()
{
    qualityIsSet_ = false;
}

MetaData Output::getMetaData() const
{
    return metaData_;
}

void Output::setMetaData(const MetaData& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool Output::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void Output::unsetmetaData()
{
    metaDataIsSet_ = false;
}

}
}
}
}
}


