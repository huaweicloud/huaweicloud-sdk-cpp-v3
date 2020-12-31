

#include "huaweicloud/evs/model/ListVolumesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListVolumesResponse::ListVolumesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    volumesLinksIsSet_ = false;
    volumesIsSet_ = false;
}

ListVolumesResponse::~ListVolumesResponse() = default;

void ListVolumesResponse::validate()
{
}

web::json::value ListVolumesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(volumesLinksIsSet_) {
        val[utility::conversions::to_string_t("volumes_links")] = ModelBase::toJson(volumesLinks_);
    }
    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }

    return val;
}

bool ListVolumesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("volumes_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes_links"));
        if(!fieldValue.is_null())
        {
            std::vector<Link> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumesLinks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    return ok;
}


int32_t ListVolumesResponse::getCount() const
{
    return count_;
}

void ListVolumesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListVolumesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListVolumesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<Link>& ListVolumesResponse::getVolumesLinks()
{
    return volumesLinks_;
}

void ListVolumesResponse::setVolumesLinks(const std::vector<Link>& value)
{
    volumesLinks_ = value;
    volumesLinksIsSet_ = true;
}

bool ListVolumesResponse::volumesLinksIsSet() const
{
    return volumesLinksIsSet_;
}

void ListVolumesResponse::unsetvolumesLinks()
{
    volumesLinksIsSet_ = false;
}

std::vector<VolumeDetail>& ListVolumesResponse::getVolumes()
{
    return volumes_;
}

void ListVolumesResponse::setVolumes(const std::vector<VolumeDetail>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool ListVolumesResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void ListVolumesResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

}
}
}
}
}


