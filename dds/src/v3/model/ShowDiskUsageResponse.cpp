

#include "huaweicloud/dds/v3/model/ShowDiskUsageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowDiskUsageResponse::ShowDiskUsageResponse()
{
    volumesIsSet_ = false;
}

ShowDiskUsageResponse::~ShowDiskUsageResponse() = default;

void ShowDiskUsageResponse::validate()
{
}

web::json::value ShowDiskUsageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }

    return val;
}
bool ShowDiskUsageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<DiskVolumes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    return ok;
}


std::vector<DiskVolumes>& ShowDiskUsageResponse::getVolumes()
{
    return volumes_;
}

void ShowDiskUsageResponse::setVolumes(const std::vector<DiskVolumes>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool ShowDiskUsageResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void ShowDiskUsageResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

}
}
}
}
}


