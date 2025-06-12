

#include "huaweicloud/metastudio/v1/model/LivePlayingShootScriptItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LivePlayingShootScriptItem::LivePlayingShootScriptItem()
{
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
}

LivePlayingShootScriptItem::~LivePlayingShootScriptItem() = default;

void LivePlayingShootScriptItem::validate()
{
}

web::json::value LivePlayingShootScriptItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }

    return val;
}
bool LivePlayingShootScriptItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    return ok;
}


int32_t LivePlayingShootScriptItem::getSequenceNo() const
{
    return sequenceNo_;
}

void LivePlayingShootScriptItem::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool LivePlayingShootScriptItem::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void LivePlayingShootScriptItem::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

std::string LivePlayingShootScriptItem::getTitle() const
{
    return title_;
}

void LivePlayingShootScriptItem::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool LivePlayingShootScriptItem::titleIsSet() const
{
    return titleIsSet_;
}

void LivePlayingShootScriptItem::unsettitle()
{
    titleIsSet_ = false;
}

std::string LivePlayingShootScriptItem::getText() const
{
    return text_;
}

void LivePlayingShootScriptItem::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool LivePlayingShootScriptItem::textIsSet() const
{
    return textIsSet_;
}

void LivePlayingShootScriptItem::unsettext()
{
    textIsSet_ = false;
}

}
}
}
}
}


