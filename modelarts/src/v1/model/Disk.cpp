

#include "huaweicloud/modelarts/v1/model/Disk.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Disk::Disk()
{
    size_ = "";
    sizeIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

Disk::~Disk() = default;

void Disk::validate()
{
}

web::json::value Disk::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool Disk::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


std::string Disk::getSize() const
{
    return size_;
}

void Disk::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Disk::sizeIsSet() const
{
    return sizeIsSet_;
}

void Disk::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Disk::getUnit() const
{
    return unit_;
}

void Disk::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool Disk::unitIsSet() const
{
    return unitIsSet_;
}

void Disk::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


