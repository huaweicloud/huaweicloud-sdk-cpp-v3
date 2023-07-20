

#include "huaweicloud/dds/v3/model/AddShardingNodeVolumeOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AddShardingNodeVolumeOption::AddShardingNodeVolumeOption()
{
    size_ = "";
    sizeIsSet_ = false;
}

AddShardingNodeVolumeOption::~AddShardingNodeVolumeOption() = default;

void AddShardingNodeVolumeOption::validate()
{
}

web::json::value AddShardingNodeVolumeOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}

bool AddShardingNodeVolumeOption::fromJson(const web::json::value& val)
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
    return ok;
}

std::string AddShardingNodeVolumeOption::getSize() const
{
    return size_;
}

void AddShardingNodeVolumeOption::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool AddShardingNodeVolumeOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void AddShardingNodeVolumeOption::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


