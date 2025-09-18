

#include "huaweicloud/codeartscheck/v2/model/IgnorePathSettingItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




IgnorePathSettingItem::IgnorePathSettingItem()
{
    filePath_ = "";
    filePathIsSet_ = false;
    checkboxStatus_ = "";
    checkboxStatusIsSet_ = false;
}

IgnorePathSettingItem::~IgnorePathSettingItem() = default;

void IgnorePathSettingItem::validate()
{
}

web::json::value IgnorePathSettingItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(checkboxStatusIsSet_) {
        val[utility::conversions::to_string_t("checkbox_status")] = ModelBase::toJson(checkboxStatus_);
    }

    return val;
}
bool IgnorePathSettingItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkbox_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkbox_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckboxStatus(refVal);
        }
    }
    return ok;
}


std::string IgnorePathSettingItem::getFilePath() const
{
    return filePath_;
}

void IgnorePathSettingItem::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool IgnorePathSettingItem::filePathIsSet() const
{
    return filePathIsSet_;
}

void IgnorePathSettingItem::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string IgnorePathSettingItem::getCheckboxStatus() const
{
    return checkboxStatus_;
}

void IgnorePathSettingItem::setCheckboxStatus(const std::string& value)
{
    checkboxStatus_ = value;
    checkboxStatusIsSet_ = true;
}

bool IgnorePathSettingItem::checkboxStatusIsSet() const
{
    return checkboxStatusIsSet_;
}

void IgnorePathSettingItem::unsetcheckboxStatus()
{
    checkboxStatusIsSet_ = false;
}

}
}
}
}
}


