

#include "huaweicloud/projectman/v4/model/MetricRequest2_dividend.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




MetricRequest2_dividend::MetricRequest2_dividend()
{
    customField16_ = "";
    customField16IsSet_ = false;
    customField17_ = "";
    customField17IsSet_ = false;
    customField18_ = "";
    customField18IsSet_ = false;
    customField19_ = "";
    customField19IsSet_ = false;
    customField20_ = "";
    customField20IsSet_ = false;
    customField21_ = "";
    customField21IsSet_ = false;
    customField22_ = "";
    customField22IsSet_ = false;
    customField23_ = "";
    customField23IsSet_ = false;
    customField24_ = "";
    customField24IsSet_ = false;
    customField25_ = "";
    customField25IsSet_ = false;
    customField26_ = "";
    customField26IsSet_ = false;
    customField27_ = "";
    customField27IsSet_ = false;
    customField28_ = "";
    customField28IsSet_ = false;
    customField29_ = "";
    customField29IsSet_ = false;
    customField30_ = "";
    customField30IsSet_ = false;
    customField31_ = "";
    customField31IsSet_ = false;
    customField32_ = "";
    customField32IsSet_ = false;
    customField33_ = "";
    customField33IsSet_ = false;
    customField34_ = "";
    customField34IsSet_ = false;
    customField35_ = "";
    customField35IsSet_ = false;
    customField36_ = "";
    customField36IsSet_ = false;
    customField37_ = "";
    customField37IsSet_ = false;
    customField38_ = "";
    customField38IsSet_ = false;
    customField39_ = "";
    customField39IsSet_ = false;
    customField40_ = "";
    customField40IsSet_ = false;
}

MetricRequest2_dividend::~MetricRequest2_dividend() = default;

void MetricRequest2_dividend::validate()
{
}

web::json::value MetricRequest2_dividend::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customField16IsSet_) {
        val[utility::conversions::to_string_t("custom_field16")] = ModelBase::toJson(customField16_);
    }
    if(customField17IsSet_) {
        val[utility::conversions::to_string_t("custom_field17")] = ModelBase::toJson(customField17_);
    }
    if(customField18IsSet_) {
        val[utility::conversions::to_string_t("custom_field18")] = ModelBase::toJson(customField18_);
    }
    if(customField19IsSet_) {
        val[utility::conversions::to_string_t("custom_field19")] = ModelBase::toJson(customField19_);
    }
    if(customField20IsSet_) {
        val[utility::conversions::to_string_t("custom_field20")] = ModelBase::toJson(customField20_);
    }
    if(customField21IsSet_) {
        val[utility::conversions::to_string_t("custom_field21")] = ModelBase::toJson(customField21_);
    }
    if(customField22IsSet_) {
        val[utility::conversions::to_string_t("custom_field22")] = ModelBase::toJson(customField22_);
    }
    if(customField23IsSet_) {
        val[utility::conversions::to_string_t("custom_field23")] = ModelBase::toJson(customField23_);
    }
    if(customField24IsSet_) {
        val[utility::conversions::to_string_t("custom_field24")] = ModelBase::toJson(customField24_);
    }
    if(customField25IsSet_) {
        val[utility::conversions::to_string_t("custom_field25")] = ModelBase::toJson(customField25_);
    }
    if(customField26IsSet_) {
        val[utility::conversions::to_string_t("custom_field26")] = ModelBase::toJson(customField26_);
    }
    if(customField27IsSet_) {
        val[utility::conversions::to_string_t("custom_field27")] = ModelBase::toJson(customField27_);
    }
    if(customField28IsSet_) {
        val[utility::conversions::to_string_t("custom_field28")] = ModelBase::toJson(customField28_);
    }
    if(customField29IsSet_) {
        val[utility::conversions::to_string_t("custom_field29")] = ModelBase::toJson(customField29_);
    }
    if(customField30IsSet_) {
        val[utility::conversions::to_string_t("custom_field30")] = ModelBase::toJson(customField30_);
    }
    if(customField31IsSet_) {
        val[utility::conversions::to_string_t("custom_field31")] = ModelBase::toJson(customField31_);
    }
    if(customField32IsSet_) {
        val[utility::conversions::to_string_t("custom_field32")] = ModelBase::toJson(customField32_);
    }
    if(customField33IsSet_) {
        val[utility::conversions::to_string_t("custom_field33")] = ModelBase::toJson(customField33_);
    }
    if(customField34IsSet_) {
        val[utility::conversions::to_string_t("custom_field34")] = ModelBase::toJson(customField34_);
    }
    if(customField35IsSet_) {
        val[utility::conversions::to_string_t("custom_field35")] = ModelBase::toJson(customField35_);
    }
    if(customField36IsSet_) {
        val[utility::conversions::to_string_t("custom_field36")] = ModelBase::toJson(customField36_);
    }
    if(customField37IsSet_) {
        val[utility::conversions::to_string_t("custom_field37")] = ModelBase::toJson(customField37_);
    }
    if(customField38IsSet_) {
        val[utility::conversions::to_string_t("custom_field38")] = ModelBase::toJson(customField38_);
    }
    if(customField39IsSet_) {
        val[utility::conversions::to_string_t("custom_field39")] = ModelBase::toJson(customField39_);
    }
    if(customField40IsSet_) {
        val[utility::conversions::to_string_t("custom_field40")] = ModelBase::toJson(customField40_);
    }

    return val;
}
bool MetricRequest2_dividend::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_field16"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field16"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField16(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field17"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field17"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField17(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field18"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field18"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField18(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field19"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field19"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField19(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field20"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field20"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField20(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field21"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field21"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField21(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field22"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field22"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField22(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field23"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field23"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField23(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field24"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field24"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField24(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field25"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field25"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField25(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field26"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field26"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField26(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field27"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field27"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField27(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field28"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field28"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField28(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field29"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field29"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField29(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field30"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field30"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField30(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field31"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field31"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField31(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field32"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field32"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField32(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field33"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field33"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField33(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field34"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field34"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField34(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field35"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field35"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField35(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field36"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field36"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField36(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field37"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field37"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField37(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field38"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field38"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField38(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field39"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field39"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField39(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_field40"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field40"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomField40(refVal);
        }
    }
    return ok;
}


std::string MetricRequest2_dividend::getCustomField16() const
{
    return customField16_;
}

void MetricRequest2_dividend::setCustomField16(const std::string& value)
{
    customField16_ = value;
    customField16IsSet_ = true;
}

bool MetricRequest2_dividend::customField16IsSet() const
{
    return customField16IsSet_;
}

void MetricRequest2_dividend::unsetcustomField16()
{
    customField16IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField17() const
{
    return customField17_;
}

void MetricRequest2_dividend::setCustomField17(const std::string& value)
{
    customField17_ = value;
    customField17IsSet_ = true;
}

bool MetricRequest2_dividend::customField17IsSet() const
{
    return customField17IsSet_;
}

void MetricRequest2_dividend::unsetcustomField17()
{
    customField17IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField18() const
{
    return customField18_;
}

void MetricRequest2_dividend::setCustomField18(const std::string& value)
{
    customField18_ = value;
    customField18IsSet_ = true;
}

bool MetricRequest2_dividend::customField18IsSet() const
{
    return customField18IsSet_;
}

void MetricRequest2_dividend::unsetcustomField18()
{
    customField18IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField19() const
{
    return customField19_;
}

void MetricRequest2_dividend::setCustomField19(const std::string& value)
{
    customField19_ = value;
    customField19IsSet_ = true;
}

bool MetricRequest2_dividend::customField19IsSet() const
{
    return customField19IsSet_;
}

void MetricRequest2_dividend::unsetcustomField19()
{
    customField19IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField20() const
{
    return customField20_;
}

void MetricRequest2_dividend::setCustomField20(const std::string& value)
{
    customField20_ = value;
    customField20IsSet_ = true;
}

bool MetricRequest2_dividend::customField20IsSet() const
{
    return customField20IsSet_;
}

void MetricRequest2_dividend::unsetcustomField20()
{
    customField20IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField21() const
{
    return customField21_;
}

void MetricRequest2_dividend::setCustomField21(const std::string& value)
{
    customField21_ = value;
    customField21IsSet_ = true;
}

bool MetricRequest2_dividend::customField21IsSet() const
{
    return customField21IsSet_;
}

void MetricRequest2_dividend::unsetcustomField21()
{
    customField21IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField22() const
{
    return customField22_;
}

void MetricRequest2_dividend::setCustomField22(const std::string& value)
{
    customField22_ = value;
    customField22IsSet_ = true;
}

bool MetricRequest2_dividend::customField22IsSet() const
{
    return customField22IsSet_;
}

void MetricRequest2_dividend::unsetcustomField22()
{
    customField22IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField23() const
{
    return customField23_;
}

void MetricRequest2_dividend::setCustomField23(const std::string& value)
{
    customField23_ = value;
    customField23IsSet_ = true;
}

bool MetricRequest2_dividend::customField23IsSet() const
{
    return customField23IsSet_;
}

void MetricRequest2_dividend::unsetcustomField23()
{
    customField23IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField24() const
{
    return customField24_;
}

void MetricRequest2_dividend::setCustomField24(const std::string& value)
{
    customField24_ = value;
    customField24IsSet_ = true;
}

bool MetricRequest2_dividend::customField24IsSet() const
{
    return customField24IsSet_;
}

void MetricRequest2_dividend::unsetcustomField24()
{
    customField24IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField25() const
{
    return customField25_;
}

void MetricRequest2_dividend::setCustomField25(const std::string& value)
{
    customField25_ = value;
    customField25IsSet_ = true;
}

bool MetricRequest2_dividend::customField25IsSet() const
{
    return customField25IsSet_;
}

void MetricRequest2_dividend::unsetcustomField25()
{
    customField25IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField26() const
{
    return customField26_;
}

void MetricRequest2_dividend::setCustomField26(const std::string& value)
{
    customField26_ = value;
    customField26IsSet_ = true;
}

bool MetricRequest2_dividend::customField26IsSet() const
{
    return customField26IsSet_;
}

void MetricRequest2_dividend::unsetcustomField26()
{
    customField26IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField27() const
{
    return customField27_;
}

void MetricRequest2_dividend::setCustomField27(const std::string& value)
{
    customField27_ = value;
    customField27IsSet_ = true;
}

bool MetricRequest2_dividend::customField27IsSet() const
{
    return customField27IsSet_;
}

void MetricRequest2_dividend::unsetcustomField27()
{
    customField27IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField28() const
{
    return customField28_;
}

void MetricRequest2_dividend::setCustomField28(const std::string& value)
{
    customField28_ = value;
    customField28IsSet_ = true;
}

bool MetricRequest2_dividend::customField28IsSet() const
{
    return customField28IsSet_;
}

void MetricRequest2_dividend::unsetcustomField28()
{
    customField28IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField29() const
{
    return customField29_;
}

void MetricRequest2_dividend::setCustomField29(const std::string& value)
{
    customField29_ = value;
    customField29IsSet_ = true;
}

bool MetricRequest2_dividend::customField29IsSet() const
{
    return customField29IsSet_;
}

void MetricRequest2_dividend::unsetcustomField29()
{
    customField29IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField30() const
{
    return customField30_;
}

void MetricRequest2_dividend::setCustomField30(const std::string& value)
{
    customField30_ = value;
    customField30IsSet_ = true;
}

bool MetricRequest2_dividend::customField30IsSet() const
{
    return customField30IsSet_;
}

void MetricRequest2_dividend::unsetcustomField30()
{
    customField30IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField31() const
{
    return customField31_;
}

void MetricRequest2_dividend::setCustomField31(const std::string& value)
{
    customField31_ = value;
    customField31IsSet_ = true;
}

bool MetricRequest2_dividend::customField31IsSet() const
{
    return customField31IsSet_;
}

void MetricRequest2_dividend::unsetcustomField31()
{
    customField31IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField32() const
{
    return customField32_;
}

void MetricRequest2_dividend::setCustomField32(const std::string& value)
{
    customField32_ = value;
    customField32IsSet_ = true;
}

bool MetricRequest2_dividend::customField32IsSet() const
{
    return customField32IsSet_;
}

void MetricRequest2_dividend::unsetcustomField32()
{
    customField32IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField33() const
{
    return customField33_;
}

void MetricRequest2_dividend::setCustomField33(const std::string& value)
{
    customField33_ = value;
    customField33IsSet_ = true;
}

bool MetricRequest2_dividend::customField33IsSet() const
{
    return customField33IsSet_;
}

void MetricRequest2_dividend::unsetcustomField33()
{
    customField33IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField34() const
{
    return customField34_;
}

void MetricRequest2_dividend::setCustomField34(const std::string& value)
{
    customField34_ = value;
    customField34IsSet_ = true;
}

bool MetricRequest2_dividend::customField34IsSet() const
{
    return customField34IsSet_;
}

void MetricRequest2_dividend::unsetcustomField34()
{
    customField34IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField35() const
{
    return customField35_;
}

void MetricRequest2_dividend::setCustomField35(const std::string& value)
{
    customField35_ = value;
    customField35IsSet_ = true;
}

bool MetricRequest2_dividend::customField35IsSet() const
{
    return customField35IsSet_;
}

void MetricRequest2_dividend::unsetcustomField35()
{
    customField35IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField36() const
{
    return customField36_;
}

void MetricRequest2_dividend::setCustomField36(const std::string& value)
{
    customField36_ = value;
    customField36IsSet_ = true;
}

bool MetricRequest2_dividend::customField36IsSet() const
{
    return customField36IsSet_;
}

void MetricRequest2_dividend::unsetcustomField36()
{
    customField36IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField37() const
{
    return customField37_;
}

void MetricRequest2_dividend::setCustomField37(const std::string& value)
{
    customField37_ = value;
    customField37IsSet_ = true;
}

bool MetricRequest2_dividend::customField37IsSet() const
{
    return customField37IsSet_;
}

void MetricRequest2_dividend::unsetcustomField37()
{
    customField37IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField38() const
{
    return customField38_;
}

void MetricRequest2_dividend::setCustomField38(const std::string& value)
{
    customField38_ = value;
    customField38IsSet_ = true;
}

bool MetricRequest2_dividend::customField38IsSet() const
{
    return customField38IsSet_;
}

void MetricRequest2_dividend::unsetcustomField38()
{
    customField38IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField39() const
{
    return customField39_;
}

void MetricRequest2_dividend::setCustomField39(const std::string& value)
{
    customField39_ = value;
    customField39IsSet_ = true;
}

bool MetricRequest2_dividend::customField39IsSet() const
{
    return customField39IsSet_;
}

void MetricRequest2_dividend::unsetcustomField39()
{
    customField39IsSet_ = false;
}

std::string MetricRequest2_dividend::getCustomField40() const
{
    return customField40_;
}

void MetricRequest2_dividend::setCustomField40(const std::string& value)
{
    customField40_ = value;
    customField40IsSet_ = true;
}

bool MetricRequest2_dividend::customField40IsSet() const
{
    return customField40IsSet_;
}

void MetricRequest2_dividend::unsetcustomField40()
{
    customField40IsSet_ = false;
}

}
}
}
}
}


