

#include "huaweicloud/gaussdbfornosql/v3/model/Volume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




Volume::Volume()
{
    size_ = "";
    sizeIsSet_ = false;
    used_ = "";
    usedIsSet_ = false;
}

Volume::~Volume() = default;

void Volume::validate()
{
}

web::json::value Volume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }

    return val;
}
bool Volume::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    return ok;
}


std::string Volume::getSize() const
{
    return size_;
}

void Volume::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Volume::sizeIsSet() const
{
    return sizeIsSet_;
}

void Volume::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Volume::getUsed() const
{
    return used_;
}

void Volume::setUsed(const std::string& value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool Volume::usedIsSet() const
{
    return usedIsSet_;
}

void Volume::unsetused()
{
    usedIsSet_ = false;
}

}
}
}
}
}


