

#include "huaweicloud/cfw/v1/model/IpRegionResponseBodyData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpRegionResponseBodyData::IpRegionResponseBodyData()
{
    regionId_ = "";
    regionIdIsSet_ = false;
    descriptionCn_ = "";
    descriptionCnIsSet_ = false;
    descriptionEn_ = "";
    descriptionEnIsSet_ = false;
    regionType_ = "";
    regionTypeIsSet_ = false;
    superiorRegionId_ = 0;
    superiorRegionIdIsSet_ = false;
}

IpRegionResponseBodyData::~IpRegionResponseBodyData() = default;

void IpRegionResponseBodyData::validate()
{
}

web::json::value IpRegionResponseBodyData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(descriptionCnIsSet_) {
        val[utility::conversions::to_string_t("description_cn")] = ModelBase::toJson(descriptionCn_);
    }
    if(descriptionEnIsSet_) {
        val[utility::conversions::to_string_t("description_en")] = ModelBase::toJson(descriptionEn_);
    }
    if(regionTypeIsSet_) {
        val[utility::conversions::to_string_t("region_type")] = ModelBase::toJson(regionType_);
    }
    if(superiorRegionIdIsSet_) {
        val[utility::conversions::to_string_t("superior_region_id")] = ModelBase::toJson(superiorRegionId_);
    }

    return val;
}
bool IpRegionResponseBodyData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescriptionCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescriptionEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("superior_region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("superior_region_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuperiorRegionId(refVal);
        }
    }
    return ok;
}


std::string IpRegionResponseBodyData::getRegionId() const
{
    return regionId_;
}

void IpRegionResponseBodyData::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool IpRegionResponseBodyData::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void IpRegionResponseBodyData::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string IpRegionResponseBodyData::getDescriptionCn() const
{
    return descriptionCn_;
}

void IpRegionResponseBodyData::setDescriptionCn(const std::string& value)
{
    descriptionCn_ = value;
    descriptionCnIsSet_ = true;
}

bool IpRegionResponseBodyData::descriptionCnIsSet() const
{
    return descriptionCnIsSet_;
}

void IpRegionResponseBodyData::unsetdescriptionCn()
{
    descriptionCnIsSet_ = false;
}

std::string IpRegionResponseBodyData::getDescriptionEn() const
{
    return descriptionEn_;
}

void IpRegionResponseBodyData::setDescriptionEn(const std::string& value)
{
    descriptionEn_ = value;
    descriptionEnIsSet_ = true;
}

bool IpRegionResponseBodyData::descriptionEnIsSet() const
{
    return descriptionEnIsSet_;
}

void IpRegionResponseBodyData::unsetdescriptionEn()
{
    descriptionEnIsSet_ = false;
}

std::string IpRegionResponseBodyData::getRegionType() const
{
    return regionType_;
}

void IpRegionResponseBodyData::setRegionType(const std::string& value)
{
    regionType_ = value;
    regionTypeIsSet_ = true;
}

bool IpRegionResponseBodyData::regionTypeIsSet() const
{
    return regionTypeIsSet_;
}

void IpRegionResponseBodyData::unsetregionType()
{
    regionTypeIsSet_ = false;
}

int32_t IpRegionResponseBodyData::getSuperiorRegionId() const
{
    return superiorRegionId_;
}

void IpRegionResponseBodyData::setSuperiorRegionId(int32_t value)
{
    superiorRegionId_ = value;
    superiorRegionIdIsSet_ = true;
}

bool IpRegionResponseBodyData::superiorRegionIdIsSet() const
{
    return superiorRegionIdIsSet_;
}

void IpRegionResponseBodyData::unsetsuperiorRegionId()
{
    superiorRegionIdIsSet_ = false;
}

}
}
}
}
}


