

#include "huaweicloud/codeartscheck/v2/model/ShowTaskSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskSettingsResponse::ShowTaskSettingsResponse()
{
    infoIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowTaskSettingsResponse::~ShowTaskSettingsResponse() = default;

void ShowTaskSettingsResponse::validate()
{
}

web::json::value ShowTaskSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowTaskSettingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskAdvancedSettings> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<TaskAdvancedSettings>& ShowTaskSettingsResponse::getInfo()
{
    return info_;
}

void ShowTaskSettingsResponse::setInfo(const std::vector<TaskAdvancedSettings>& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ShowTaskSettingsResponse::infoIsSet() const
{
    return infoIsSet_;
}

void ShowTaskSettingsResponse::unsetinfo()
{
    infoIsSet_ = false;
}

int32_t ShowTaskSettingsResponse::getTotal() const
{
    return total_;
}

void ShowTaskSettingsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTaskSettingsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTaskSettingsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


