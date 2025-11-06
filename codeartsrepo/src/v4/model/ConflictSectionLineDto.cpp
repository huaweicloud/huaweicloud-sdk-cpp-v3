

#include "huaweicloud/codeartsrepo/v4/model/ConflictSectionLineDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ConflictSectionLineDto::ConflictSectionLineDto()
{
    lineCode_ = "";
    lineCodeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    oldLine_ = 0;
    oldLineIsSet_ = false;
    newLine_ = 0;
    newLineIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
    metaDataIsSet_ = false;
    richText_ = "";
    richTextIsSet_ = false;
    canReceiveSuggestion_ = false;
    canReceiveSuggestionIsSet_ = false;
}

ConflictSectionLineDto::~ConflictSectionLineDto() = default;

void ConflictSectionLineDto::validate()
{
}

web::json::value ConflictSectionLineDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lineCodeIsSet_) {
        val[utility::conversions::to_string_t("line_code")] = ModelBase::toJson(lineCode_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(oldLineIsSet_) {
        val[utility::conversions::to_string_t("old_line")] = ModelBase::toJson(oldLine_);
    }
    if(newLineIsSet_) {
        val[utility::conversions::to_string_t("new_line")] = ModelBase::toJson(newLine_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }
    if(richTextIsSet_) {
        val[utility::conversions::to_string_t("rich_text")] = ModelBase::toJson(richText_);
    }
    if(canReceiveSuggestionIsSet_) {
        val[utility::conversions::to_string_t("can_receive_suggestion")] = ModelBase::toJson(canReceiveSuggestion_);
    }

    return val;
}
bool ConflictSectionLineDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("line_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewLine(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("meta_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_data"));
        if(!fieldValue.is_null())
        {
            ConflictSectionLineMetaDataDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rich_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rich_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRichText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_receive_suggestion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_receive_suggestion"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanReceiveSuggestion(refVal);
        }
    }
    return ok;
}


std::string ConflictSectionLineDto::getLineCode() const
{
    return lineCode_;
}

void ConflictSectionLineDto::setLineCode(const std::string& value)
{
    lineCode_ = value;
    lineCodeIsSet_ = true;
}

bool ConflictSectionLineDto::lineCodeIsSet() const
{
    return lineCodeIsSet_;
}

void ConflictSectionLineDto::unsetlineCode()
{
    lineCodeIsSet_ = false;
}

std::string ConflictSectionLineDto::getType() const
{
    return type_;
}

void ConflictSectionLineDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ConflictSectionLineDto::typeIsSet() const
{
    return typeIsSet_;
}

void ConflictSectionLineDto::unsettype()
{
    typeIsSet_ = false;
}

int32_t ConflictSectionLineDto::getOldLine() const
{
    return oldLine_;
}

void ConflictSectionLineDto::setOldLine(int32_t value)
{
    oldLine_ = value;
    oldLineIsSet_ = true;
}

bool ConflictSectionLineDto::oldLineIsSet() const
{
    return oldLineIsSet_;
}

void ConflictSectionLineDto::unsetoldLine()
{
    oldLineIsSet_ = false;
}

int32_t ConflictSectionLineDto::getNewLine() const
{
    return newLine_;
}

void ConflictSectionLineDto::setNewLine(int32_t value)
{
    newLine_ = value;
    newLineIsSet_ = true;
}

bool ConflictSectionLineDto::newLineIsSet() const
{
    return newLineIsSet_;
}

void ConflictSectionLineDto::unsetnewLine()
{
    newLineIsSet_ = false;
}

std::string ConflictSectionLineDto::getText() const
{
    return text_;
}

void ConflictSectionLineDto::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool ConflictSectionLineDto::textIsSet() const
{
    return textIsSet_;
}

void ConflictSectionLineDto::unsettext()
{
    textIsSet_ = false;
}

ConflictSectionLineMetaDataDto ConflictSectionLineDto::getMetaData() const
{
    return metaData_;
}

void ConflictSectionLineDto::setMetaData(const ConflictSectionLineMetaDataDto& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool ConflictSectionLineDto::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void ConflictSectionLineDto::unsetmetaData()
{
    metaDataIsSet_ = false;
}

std::string ConflictSectionLineDto::getRichText() const
{
    return richText_;
}

void ConflictSectionLineDto::setRichText(const std::string& value)
{
    richText_ = value;
    richTextIsSet_ = true;
}

bool ConflictSectionLineDto::richTextIsSet() const
{
    return richTextIsSet_;
}

void ConflictSectionLineDto::unsetrichText()
{
    richTextIsSet_ = false;
}

bool ConflictSectionLineDto::isCanReceiveSuggestion() const
{
    return canReceiveSuggestion_;
}

void ConflictSectionLineDto::setCanReceiveSuggestion(bool value)
{
    canReceiveSuggestion_ = value;
    canReceiveSuggestionIsSet_ = true;
}

bool ConflictSectionLineDto::canReceiveSuggestionIsSet() const
{
    return canReceiveSuggestionIsSet_;
}

void ConflictSectionLineDto::unsetcanReceiveSuggestion()
{
    canReceiveSuggestionIsSet_ = false;
}

}
}
}
}
}


