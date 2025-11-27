

#include "huaweicloud/evs/v2/model/ListVolumesInRecycleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListVolumesInRecycleResponse::ListVolumesInRecycleResponse()
{
    count_ = 0;
    countIsSet_ = false;
    volumesIsSet_ = false;
}

ListVolumesInRecycleResponse::~ListVolumesInRecycleResponse() = default;

void ListVolumesInRecycleResponse::validate()
{
}

web::json::value ListVolumesInRecycleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }

    return val;
}
bool ListVolumesInRecycleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<RecycleBinVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    return ok;
}


int32_t ListVolumesInRecycleResponse::getCount() const
{
    return count_;
}

void ListVolumesInRecycleResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListVolumesInRecycleResponse::countIsSet() const
{
    return countIsSet_;
}

void ListVolumesInRecycleResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<RecycleBinVolume>& ListVolumesInRecycleResponse::getVolumes()
{
    return volumes_;
}

void ListVolumesInRecycleResponse::setVolumes(const std::vector<RecycleBinVolume>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool ListVolumesInRecycleResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void ListVolumesInRecycleResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

}
}
}
}
}


