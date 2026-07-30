

#include "huaweicloud/modelarts/v1/model/ListInferServicesByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferServicesByTagsResponse::ListInferServicesByTagsResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInferServicesByTagsResponse::~ListInferServicesByTagsResponse() = default;

void ListInferServicesByTagsResponse::validate()
{
}

web::json::value ListInferServicesByTagsResponse::toJson() const
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
bool ListInferServicesByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsResource> refVal;
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


std::vector<TmsResource>& ListInferServicesByTagsResponse::getResources()
{
    return resources_;
}

void ListInferServicesByTagsResponse::setResources(const std::vector<TmsResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListInferServicesByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListInferServicesByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListInferServicesByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInferServicesByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInferServicesByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInferServicesByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


