

#include "huaweicloud/ims/v2/model/ListImageByTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImageByTagsResponse::ListImageByTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListImageByTagsResponse::~ListImageByTagsResponse() = default;

void ListImageByTagsResponse::validate()
{
}

web::json::value ListImageByTagsResponse::toJson() const
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

bool ListImageByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowImageByTagsResource> refVal;
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

std::vector<ShowImageByTagsResource>& ListImageByTagsResponse::getResources()
{
    return resources_;
}

void ListImageByTagsResponse::setResources(const std::vector<ShowImageByTagsResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListImageByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListImageByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListImageByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListImageByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListImageByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListImageByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


