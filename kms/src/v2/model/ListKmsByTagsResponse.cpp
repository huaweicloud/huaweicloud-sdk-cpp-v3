

#include "huaweicloud/kms/v2/model/ListKmsByTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKmsByTagsResponse::ListKmsByTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListKmsByTagsResponse::~ListKmsByTagsResponse() = default;

void ListKmsByTagsResponse::validate()
{
}

web::json::value ListKmsByTagsResponse::toJson() const
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

bool ListKmsByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionResources> refVal;
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

std::vector<ActionResources>& ListKmsByTagsResponse::getResources()
{
    return resources_;
}

void ListKmsByTagsResponse::setResources(const std::vector<ActionResources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListKmsByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListKmsByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListKmsByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListKmsByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListKmsByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListKmsByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


