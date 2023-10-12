

#include "huaweicloud/gaussdb/v3/model/DedicatedStorageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DedicatedStorageInfo::DedicatedStorageInfo()
{
    specCode_ = "";
    specCodeIsSet_ = false;
    hostNum_ = 0;
    hostNumIsSet_ = false;
}

DedicatedStorageInfo::~DedicatedStorageInfo() = default;

void DedicatedStorageInfo::validate()
{
}

web::json::value DedicatedStorageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(hostNumIsSet_) {
        val[utility::conversions::to_string_t("host_num")] = ModelBase::toJson(hostNum_);
    }

    return val;
}
bool DedicatedStorageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNum(refVal);
        }
    }
    return ok;
}


std::string DedicatedStorageInfo::getSpecCode() const
{
    return specCode_;
}

void DedicatedStorageInfo::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool DedicatedStorageInfo::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void DedicatedStorageInfo::unsetspecCode()
{
    specCodeIsSet_ = false;
}

int32_t DedicatedStorageInfo::getHostNum() const
{
    return hostNum_;
}

void DedicatedStorageInfo::setHostNum(int32_t value)
{
    hostNum_ = value;
    hostNumIsSet_ = true;
}

bool DedicatedStorageInfo::hostNumIsSet() const
{
    return hostNumIsSet_;
}

void DedicatedStorageInfo::unsethostNum()
{
    hostNumIsSet_ = false;
}

}
}
}
}
}


