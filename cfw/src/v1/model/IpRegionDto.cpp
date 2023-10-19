

#include "huaweicloud/cfw/v1/model/IpRegionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpRegionDto::IpRegionDto()
{
    regionId_ = "";
    regionIdIsSet_ = false;
    descriptionCn_ = "";
    descriptionCnIsSet_ = false;
    descriptionEn_ = "";
    descriptionEnIsSet_ = false;
    regionType_ = 0;
    regionTypeIsSet_ = false;
}

IpRegionDto::~IpRegionDto() = default;

void IpRegionDto::validate()
{
}

web::json::value IpRegionDto::toJson() const
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

    return val;
}
bool IpRegionDto::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionType(refVal);
        }
    }
    return ok;
}


std::string IpRegionDto::getRegionId() const
{
    return regionId_;
}

void IpRegionDto::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool IpRegionDto::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void IpRegionDto::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string IpRegionDto::getDescriptionCn() const
{
    return descriptionCn_;
}

void IpRegionDto::setDescriptionCn(const std::string& value)
{
    descriptionCn_ = value;
    descriptionCnIsSet_ = true;
}

bool IpRegionDto::descriptionCnIsSet() const
{
    return descriptionCnIsSet_;
}

void IpRegionDto::unsetdescriptionCn()
{
    descriptionCnIsSet_ = false;
}

std::string IpRegionDto::getDescriptionEn() const
{
    return descriptionEn_;
}

void IpRegionDto::setDescriptionEn(const std::string& value)
{
    descriptionEn_ = value;
    descriptionEnIsSet_ = true;
}

bool IpRegionDto::descriptionEnIsSet() const
{
    return descriptionEnIsSet_;
}

void IpRegionDto::unsetdescriptionEn()
{
    descriptionEnIsSet_ = false;
}

int32_t IpRegionDto::getRegionType() const
{
    return regionType_;
}

void IpRegionDto::setRegionType(int32_t value)
{
    regionType_ = value;
    regionTypeIsSet_ = true;
}

bool IpRegionDto::regionTypeIsSet() const
{
    return regionTypeIsSet_;
}

void IpRegionDto::unsetregionType()
{
    regionTypeIsSet_ = false;
}

}
}
}
}
}


