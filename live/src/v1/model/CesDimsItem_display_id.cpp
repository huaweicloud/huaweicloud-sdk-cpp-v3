

#include "huaweicloud/live/v1/model/CesDimsItem_display_id.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CesDimsItem_display_id::CesDimsItem_display_id()
{
    zhCn_ = "";
    zhCnIsSet_ = false;
    enUs_ = "";
    enUsIsSet_ = false;
}

CesDimsItem_display_id::~CesDimsItem_display_id() = default;

void CesDimsItem_display_id::validate()
{
}

web::json::value CesDimsItem_display_id::toJson() const
{
    web::json::value val = web::json::value::object();

    if(zhCnIsSet_) {
        val[utility::conversions::to_string_t("zh-cn")] = ModelBase::toJson(zhCn_);
    }
    if(enUsIsSet_) {
        val[utility::conversions::to_string_t("en-us")] = ModelBase::toJson(enUs_);
    }

    return val;
}
bool CesDimsItem_display_id::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("zh-cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zh-cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZhCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("en-us"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en-us"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnUs(refVal);
        }
    }
    return ok;
}


std::string CesDimsItem_display_id::getZhCn() const
{
    return zhCn_;
}

void CesDimsItem_display_id::setZhCn(const std::string& value)
{
    zhCn_ = value;
    zhCnIsSet_ = true;
}

bool CesDimsItem_display_id::zhCnIsSet() const
{
    return zhCnIsSet_;
}

void CesDimsItem_display_id::unsetzhCn()
{
    zhCnIsSet_ = false;
}

std::string CesDimsItem_display_id::getEnUs() const
{
    return enUs_;
}

void CesDimsItem_display_id::setEnUs(const std::string& value)
{
    enUs_ = value;
    enUsIsSet_ = true;
}

bool CesDimsItem_display_id::enUsIsSet() const
{
    return enUsIsSet_;
}

void CesDimsItem_display_id::unsetenUs()
{
    enUsIsSet_ = false;
}

}
}
}
}
}


