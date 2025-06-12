

#include "huaweicloud/metastudio/v1/model/LiveShootScriptItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveShootScriptItem::LiveShootScriptItem()
{
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    textConfigIsSet_ = false;
    audioConfigIsSet_ = false;
    relationProductIsSet_ = false;
}

LiveShootScriptItem::~LiveShootScriptItem() = default;

void LiveShootScriptItem::validate()
{
}

web::json::value LiveShootScriptItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(textConfigIsSet_) {
        val[utility::conversions::to_string_t("text_config")] = ModelBase::toJson(textConfig_);
    }
    if(audioConfigIsSet_) {
        val[utility::conversions::to_string_t("audio_config")] = ModelBase::toJson(audioConfig_);
    }
    if(relationProductIsSet_) {
        val[utility::conversions::to_string_t("relation_product")] = ModelBase::toJson(relationProduct_);
    }

    return val;
}
bool LiveShootScriptItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sequence_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_config"));
        if(!fieldValue.is_null())
        {
            TextConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_config"));
        if(!fieldValue.is_null())
        {
            LiveAudioConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_product"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_product"));
        if(!fieldValue.is_null())
        {
            RelationProductInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationProduct(refVal);
        }
    }
    return ok;
}


int32_t LiveShootScriptItem::getSequenceNo() const
{
    return sequenceNo_;
}

void LiveShootScriptItem::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool LiveShootScriptItem::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void LiveShootScriptItem::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

std::string LiveShootScriptItem::getTitle() const
{
    return title_;
}

void LiveShootScriptItem::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool LiveShootScriptItem::titleIsSet() const
{
    return titleIsSet_;
}

void LiveShootScriptItem::unsettitle()
{
    titleIsSet_ = false;
}

TextConfig LiveShootScriptItem::getTextConfig() const
{
    return textConfig_;
}

void LiveShootScriptItem::setTextConfig(const TextConfig& value)
{
    textConfig_ = value;
    textConfigIsSet_ = true;
}

bool LiveShootScriptItem::textConfigIsSet() const
{
    return textConfigIsSet_;
}

void LiveShootScriptItem::unsettextConfig()
{
    textConfigIsSet_ = false;
}

LiveAudioConfig LiveShootScriptItem::getAudioConfig() const
{
    return audioConfig_;
}

void LiveShootScriptItem::setAudioConfig(const LiveAudioConfig& value)
{
    audioConfig_ = value;
    audioConfigIsSet_ = true;
}

bool LiveShootScriptItem::audioConfigIsSet() const
{
    return audioConfigIsSet_;
}

void LiveShootScriptItem::unsetaudioConfig()
{
    audioConfigIsSet_ = false;
}

RelationProductInfo LiveShootScriptItem::getRelationProduct() const
{
    return relationProduct_;
}

void LiveShootScriptItem::setRelationProduct(const RelationProductInfo& value)
{
    relationProduct_ = value;
    relationProductIsSet_ = true;
}

bool LiveShootScriptItem::relationProductIsSet() const
{
    return relationProductIsSet_;
}

void LiveShootScriptItem::unsetrelationProduct()
{
    relationProductIsSet_ = false;
}

}
}
}
}
}


