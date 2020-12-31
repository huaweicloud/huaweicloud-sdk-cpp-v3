

#include "huaweicloud/evs/model/ListVolumesByTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListVolumesByTagsResponse::ListVolumesByTagsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    resourcesIsSet_ = false;
}

ListVolumesByTagsResponse::~ListVolumesByTagsResponse() = default;

void ListVolumesByTagsResponse::validate()
{
}

web::json::value ListVolumesByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}

bool ListVolumesByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<Resource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


int32_t ListVolumesByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListVolumesByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListVolumesByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListVolumesByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<Resource>& ListVolumesByTagsResponse::getResources()
{
    return resources_;
}

void ListVolumesByTagsResponse::setResources(const std::vector<Resource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListVolumesByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListVolumesByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


