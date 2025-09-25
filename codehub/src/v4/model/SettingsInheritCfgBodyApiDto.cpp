

#include "huaweicloud/codehub/v4/model/SettingsInheritCfgBodyApiDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SettingsInheritCfgBodyApiDto::SettingsInheritCfgBodyApiDto()
{
    dataIsSet_ = false;
}

SettingsInheritCfgBodyApiDto::~SettingsInheritCfgBodyApiDto() = default;

void SettingsInheritCfgBodyApiDto::validate()
{
}

web::json::value SettingsInheritCfgBodyApiDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool SettingsInheritCfgBodyApiDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectSettingsInheritCfgDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<ProjectSettingsInheritCfgDto>& SettingsInheritCfgBodyApiDto::getData()
{
    return data_;
}

void SettingsInheritCfgBodyApiDto::setData(const std::vector<ProjectSettingsInheritCfgDto>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SettingsInheritCfgBodyApiDto::dataIsSet() const
{
    return dataIsSet_;
}

void SettingsInheritCfgBodyApiDto::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


