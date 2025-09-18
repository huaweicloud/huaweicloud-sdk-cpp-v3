

#include "huaweicloud/ga/v1/model/Region.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




Region::Region()
{
    regionId_ = "";
    regionIdIsSet_ = false;
    area_ = "";
    areaIsSet_ = false;
    supportedEndpointTypesIsSet_ = false;
}

Region::~Region() = default;

void Region::validate()
{
}

web::json::value Region::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }
    if(supportedEndpointTypesIsSet_) {
        val[utility::conversions::to_string_t("supported_endpoint_types")] = ModelBase::toJson(supportedEndpointTypes_);
    }

    return val;
}
bool Region::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supported_endpoint_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_endpoint_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedEndpointTypes(refVal);
        }
    }
    return ok;
}


std::string Region::getRegionId() const
{
    return regionId_;
}

void Region::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool Region::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void Region::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string Region::getArea() const
{
    return area_;
}

void Region::setArea(const std::string& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool Region::areaIsSet() const
{
    return areaIsSet_;
}

void Region::unsetarea()
{
    areaIsSet_ = false;
}

std::vector<std::string>& Region::getSupportedEndpointTypes()
{
    return supportedEndpointTypes_;
}

void Region::setSupportedEndpointTypes(const std::vector<std::string>& value)
{
    supportedEndpointTypes_ = value;
    supportedEndpointTypesIsSet_ = true;
}

bool Region::supportedEndpointTypesIsSet() const
{
    return supportedEndpointTypesIsSet_;
}

void Region::unsetsupportedEndpointTypes()
{
    supportedEndpointTypesIsSet_ = false;
}

}
}
}
}
}


