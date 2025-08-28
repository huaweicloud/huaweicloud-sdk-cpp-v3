

#include "huaweicloud/metastudio/v1/model/DocumentSegmentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DocumentSegmentInfo::DocumentSegmentInfo()
{
    textIndex_ = 0;
    textIndexIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
}

DocumentSegmentInfo::~DocumentSegmentInfo() = default;

void DocumentSegmentInfo::validate()
{
}

web::json::value DocumentSegmentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIndexIsSet_) {
        val[utility::conversions::to_string_t("text_index")] = ModelBase::toJson(textIndex_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }

    return val;
}
bool DocumentSegmentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


int32_t DocumentSegmentInfo::getTextIndex() const
{
    return textIndex_;
}

void DocumentSegmentInfo::setTextIndex(int32_t value)
{
    textIndex_ = value;
    textIndexIsSet_ = true;
}

bool DocumentSegmentInfo::textIndexIsSet() const
{
    return textIndexIsSet_;
}

void DocumentSegmentInfo::unsettextIndex()
{
    textIndexIsSet_ = false;
}

std::string DocumentSegmentInfo::getId() const
{
    return id_;
}

void DocumentSegmentInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DocumentSegmentInfo::idIsSet() const
{
    return idIsSet_;
}

void DocumentSegmentInfo::unsetid()
{
    idIsSet_ = false;
}

std::string DocumentSegmentInfo::getTitle() const
{
    return title_;
}

void DocumentSegmentInfo::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool DocumentSegmentInfo::titleIsSet() const
{
    return titleIsSet_;
}

void DocumentSegmentInfo::unsettitle()
{
    titleIsSet_ = false;
}

std::string DocumentSegmentInfo::getText() const
{
    return text_;
}

void DocumentSegmentInfo::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool DocumentSegmentInfo::textIsSet() const
{
    return textIsSet_;
}

void DocumentSegmentInfo::unsettext()
{
    textIsSet_ = false;
}

}
}
}
}
}


