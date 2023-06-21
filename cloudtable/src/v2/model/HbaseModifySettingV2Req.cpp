

#include "huaweicloud/cloudtable/v2/model/HbaseModifySettingV2Req.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




HbaseModifySettingV2Req::HbaseModifySettingV2Req()
{
    isReboot_ = "";
    isRebootIsSet_ = false;
    hbaseModifySettingsIsSet_ = false;
}

HbaseModifySettingV2Req::~HbaseModifySettingV2Req() = default;

void HbaseModifySettingV2Req::validate()
{
}

web::json::value HbaseModifySettingV2Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isRebootIsSet_) {
        val[utility::conversions::to_string_t("is_reboot")] = ModelBase::toJson(isReboot_);
    }
    if(hbaseModifySettingsIsSet_) {
        val[utility::conversions::to_string_t("hbase_modify_settings")] = ModelBase::toJson(hbaseModifySettings_);
    }

    return val;
}

bool HbaseModifySettingV2Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_reboot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_reboot"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReboot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hbase_modify_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hbase_modify_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<HbaseModifySettingV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHbaseModifySettings(refVal);
        }
    }
    return ok;
}


std::string HbaseModifySettingV2Req::getIsReboot() const
{
    return isReboot_;
}

void HbaseModifySettingV2Req::setIsReboot(const std::string& value)
{
    isReboot_ = value;
    isRebootIsSet_ = true;
}

bool HbaseModifySettingV2Req::isRebootIsSet() const
{
    return isRebootIsSet_;
}

void HbaseModifySettingV2Req::unsetisReboot()
{
    isRebootIsSet_ = false;
}

std::vector<HbaseModifySettingV2>& HbaseModifySettingV2Req::getHbaseModifySettings()
{
    return hbaseModifySettings_;
}

void HbaseModifySettingV2Req::setHbaseModifySettings(const std::vector<HbaseModifySettingV2>& value)
{
    hbaseModifySettings_ = value;
    hbaseModifySettingsIsSet_ = true;
}

bool HbaseModifySettingV2Req::hbaseModifySettingsIsSet() const
{
    return hbaseModifySettingsIsSet_;
}

void HbaseModifySettingV2Req::unsethbaseModifySettings()
{
    hbaseModifySettingsIsSet_ = false;
}

}
}
}
}
}


