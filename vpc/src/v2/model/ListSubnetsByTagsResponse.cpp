

#include "huaweicloud/vpc/v2/model/ListSubnetsByTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSubnetsByTagsResponse::ListSubnetsByTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSubnetsByTagsResponse::~ListSubnetsByTagsResponse() = default;

void ListSubnetsByTagsResponse::validate()
{
}

web::json::value ListSubnetsByTagsResponse::toJson() const
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

bool ListSubnetsByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ListResourceResp> refVal;
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


std::vector<ListResourceResp>& ListSubnetsByTagsResponse::getResources()
{
    return resources_;
}

void ListSubnetsByTagsResponse::setResources(const std::vector<ListResourceResp>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListSubnetsByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListSubnetsByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListSubnetsByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSubnetsByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSubnetsByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSubnetsByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


