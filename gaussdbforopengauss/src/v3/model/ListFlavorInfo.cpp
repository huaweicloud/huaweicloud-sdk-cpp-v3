

#include "huaweicloud/gaussdbforopengauss/v3/model/ListFlavorInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListFlavorInfo::ListFlavorInfo()
{
    vcpu_ = 0;
    vcpuIsSet_ = false;
    mem_ = 0;
    memIsSet_ = false;
}

ListFlavorInfo::~ListFlavorInfo() = default;

void ListFlavorInfo::validate()
{
}

web::json::value ListFlavorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vcpuIsSet_) {
        val[utility::conversions::to_string_t("vcpu")] = ModelBase::toJson(vcpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }

    return val;
}

bool ListFlavorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vcpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMem(refVal);
        }
    }
    return ok;
}

int32_t ListFlavorInfo::getVcpu() const
{
    return vcpu_;
}

void ListFlavorInfo::setVcpu(int32_t value)
{
    vcpu_ = value;
    vcpuIsSet_ = true;
}

bool ListFlavorInfo::vcpuIsSet() const
{
    return vcpuIsSet_;
}

void ListFlavorInfo::unsetvcpu()
{
    vcpuIsSet_ = false;
}

int32_t ListFlavorInfo::getMem() const
{
    return mem_;
}

void ListFlavorInfo::setMem(int32_t value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool ListFlavorInfo::memIsSet() const
{
    return memIsSet_;
}

void ListFlavorInfo::unsetmem()
{
    memIsSet_ = false;
}

}
}
}
}
}


