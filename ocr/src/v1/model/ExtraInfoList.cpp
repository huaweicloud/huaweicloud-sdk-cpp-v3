

#include "huaweicloud/ocr/v1/model/ExtraInfoList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ExtraInfoList::ExtraInfoList()
{
    item_ = "";
    itemIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    noteIsSet_ = false;
}

ExtraInfoList::~ExtraInfoList() = default;

void ExtraInfoList::validate()
{
}

web::json::value ExtraInfoList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(noteIsSet_) {
        val[utility::conversions::to_string_t("note")] = ModelBase::toJson(note_);
    }

    return val;
}

bool ExtraInfoList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("note"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNote(refVal);
        }
    }
    return ok;
}


std::string ExtraInfoList::getItem() const
{
    return item_;
}

void ExtraInfoList::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ExtraInfoList::itemIsSet() const
{
    return itemIsSet_;
}

void ExtraInfoList::unsetitem()
{
    itemIsSet_ = false;
}

std::string ExtraInfoList::getValue() const
{
    return value_;
}

void ExtraInfoList::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ExtraInfoList::valueIsSet() const
{
    return valueIsSet_;
}

void ExtraInfoList::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<std::string>& ExtraInfoList::getNote()
{
    return note_;
}

void ExtraInfoList::setNote(const std::vector<std::string>& value)
{
    note_ = value;
    noteIsSet_ = true;
}

bool ExtraInfoList::noteIsSet() const
{
    return noteIsSet_;
}

void ExtraInfoList::unsetnote()
{
    noteIsSet_ = false;
}

}
}
}
}
}


