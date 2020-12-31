

#include "huaweicloud/eip/model/UpdatePrePaidBandwidthOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePrePaidBandwidthOption::UpdatePrePaidBandwidthOption()
{
    name_ = "";
    nameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

UpdatePrePaidBandwidthOption::~UpdatePrePaidBandwidthOption() = default;

void UpdatePrePaidBandwidthOption::validate()
{
}

web::json::value UpdatePrePaidBandwidthOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool UpdatePrePaidBandwidthOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string UpdatePrePaidBandwidthOption::getName() const
{
    return name_;
}

void UpdatePrePaidBandwidthOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdatePrePaidBandwidthOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdatePrePaidBandwidthOption::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdatePrePaidBandwidthOption::getSize() const
{
    return size_;
}

void UpdatePrePaidBandwidthOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool UpdatePrePaidBandwidthOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void UpdatePrePaidBandwidthOption::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


