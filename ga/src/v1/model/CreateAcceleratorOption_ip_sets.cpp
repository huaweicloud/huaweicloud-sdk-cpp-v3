

#include "huaweicloud/ga/v1/model/CreateAcceleratorOption_ip_sets.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateAcceleratorOption_ip_sets::CreateAcceleratorOption_ip_sets()
{
    ipType_ = "";
    ipTypeIsSet_ = false;
    areaIsSet_ = false;
}

CreateAcceleratorOption_ip_sets::~CreateAcceleratorOption_ip_sets() = default;

void CreateAcceleratorOption_ip_sets::validate()
{
}

web::json::value CreateAcceleratorOption_ip_sets::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipTypeIsSet_) {
        val[utility::conversions::to_string_t("ip_type")] = ModelBase::toJson(ipType_);
    }
    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }

    return val;
}
bool CreateAcceleratorOption_ip_sets::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            Area refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
        }
    }
    return ok;
}


std::string CreateAcceleratorOption_ip_sets::getIpType() const
{
    return ipType_;
}

void CreateAcceleratorOption_ip_sets::setIpType(const std::string& value)
{
    ipType_ = value;
    ipTypeIsSet_ = true;
}

bool CreateAcceleratorOption_ip_sets::ipTypeIsSet() const
{
    return ipTypeIsSet_;
}

void CreateAcceleratorOption_ip_sets::unsetipType()
{
    ipTypeIsSet_ = false;
}

Area CreateAcceleratorOption_ip_sets::getArea() const
{
    return area_;
}

void CreateAcceleratorOption_ip_sets::setArea(const Area& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool CreateAcceleratorOption_ip_sets::areaIsSet() const
{
    return areaIsSet_;
}

void CreateAcceleratorOption_ip_sets::unsetarea()
{
    areaIsSet_ = false;
}

}
}
}
}
}


