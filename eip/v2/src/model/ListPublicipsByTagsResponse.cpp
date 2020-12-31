

#include "huaweicloud/eip/model/ListPublicipsByTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListPublicipsByTagsResponse::ListPublicipsByTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListPublicipsByTagsResponse::~ListPublicipsByTagsResponse() = default;

void ListPublicipsByTagsResponse::validate()
{
}

web::json::value ListPublicipsByTagsResponse::toJson() const
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

bool ListPublicipsByTagsResponse::fromJson(const web::json::value& val)
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


std::vector<ListResourceResp>& ListPublicipsByTagsResponse::getResources()
{
    return resources_;
}

void ListPublicipsByTagsResponse::setResources(const std::vector<ListResourceResp>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListPublicipsByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListPublicipsByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListPublicipsByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPublicipsByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPublicipsByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPublicipsByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


