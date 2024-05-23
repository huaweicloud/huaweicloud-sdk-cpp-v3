

#include "huaweicloud/ram/v1/model/ListResourceSharesByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListResourceSharesByTagsResponse::ListResourceSharesByTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListResourceSharesByTagsResponse::~ListResourceSharesByTagsResponse() = default;

void ListResourceSharesByTagsResponse::validate()
{
}

web::json::value ListResourceSharesByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListResourceSharesByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ResourceDTO>& ListResourceSharesByTagsResponse::getResources()
{
    return resources_;
}

void ListResourceSharesByTagsResponse::setResources(const std::vector<ResourceDTO>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListResourceSharesByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListResourceSharesByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListResourceSharesByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListResourceSharesByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListResourceSharesByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListResourceSharesByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


