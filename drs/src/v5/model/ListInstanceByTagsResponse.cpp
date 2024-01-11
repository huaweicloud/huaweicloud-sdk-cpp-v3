

#include "huaweicloud/drs/v5/model/ListInstanceByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListInstanceByTagsResponse::ListInstanceByTagsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    resourcesIsSet_ = false;
}

ListInstanceByTagsResponse::~ListInstanceByTagsResponse() = default;

void ListInstanceByTagsResponse::validate()
{
}

web::json::value ListInstanceByTagsResponse::toJson() const
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
bool ListInstanceByTagsResponse::fromJson(const web::json::value& val)
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
            std::vector<ResourceInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


int32_t ListInstanceByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstanceByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstanceByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstanceByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ResourceInstance>& ListInstanceByTagsResponse::getResources()
{
    return resources_;
}

void ListInstanceByTagsResponse::setResources(const std::vector<ResourceInstance>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListInstanceByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListInstanceByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


