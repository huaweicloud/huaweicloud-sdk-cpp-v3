

#include "huaweicloud/gaussdb/v3/model/ClickHouseNodeInfo_volume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseNodeInfo_volume::ClickHouseNodeInfo_volume()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    used_ = "";
    usedIsSet_ = false;
    iops_ = 0;
    iopsIsSet_ = false;
}

ClickHouseNodeInfo_volume::~ClickHouseNodeInfo_volume() = default;

void ClickHouseNodeInfo_volume::validate()
{
}

web::json::value ClickHouseNodeInfo_volume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }

    return val;
}
bool ClickHouseNodeInfo_volume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iops"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIops(refVal);
        }
    }
    return ok;
}


std::string ClickHouseNodeInfo_volume::getType() const
{
    return type_;
}

void ClickHouseNodeInfo_volume::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClickHouseNodeInfo_volume::typeIsSet() const
{
    return typeIsSet_;
}

void ClickHouseNodeInfo_volume::unsettype()
{
    typeIsSet_ = false;
}

std::string ClickHouseNodeInfo_volume::getSize() const
{
    return size_;
}

void ClickHouseNodeInfo_volume::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ClickHouseNodeInfo_volume::sizeIsSet() const
{
    return sizeIsSet_;
}

void ClickHouseNodeInfo_volume::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ClickHouseNodeInfo_volume::getUsed() const
{
    return used_;
}

void ClickHouseNodeInfo_volume::setUsed(const std::string& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool ClickHouseNodeInfo_volume::usedIsSet() const
{
    return usedIsSet_;
}

void ClickHouseNodeInfo_volume::unsetused()
{
    usedIsSet_ = false;
}

int32_t ClickHouseNodeInfo_volume::getIops() const
{
    return iops_;
}

void ClickHouseNodeInfo_volume::setIops(int32_t value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool ClickHouseNodeInfo_volume::iopsIsSet() const
{
    return iopsIsSet_;
}

void ClickHouseNodeInfo_volume::unsetiops()
{
    iopsIsSet_ = false;
}

}
}
}
}
}


