

#include "huaweicloud/modelarts/v1/model/DiskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DiskResponse::DiskResponse()
{
    size_ = 0;
    sizeIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

DiskResponse::~DiskResponse() = default;

void DiskResponse::validate()
{
}

web::json::value DiskResponse::toJson() const
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
bool DiskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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


int32_t DiskResponse::getSize() const
{
    return size_;
}

void DiskResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DiskResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void DiskResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string DiskResponse::getUnit() const
{
    return unit_;
}

void DiskResponse::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool DiskResponse::unitIsSet() const
{
    return unitIsSet_;
}

void DiskResponse::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


