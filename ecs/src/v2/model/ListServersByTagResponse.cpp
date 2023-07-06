

#include "huaweicloud/ecs/v2/model/ListServersByTagResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServersByTagResponse::ListServersByTagResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListServersByTagResponse::~ListServersByTagResponse() = default;

void ListServersByTagResponse::validate()
{
}

web::json::value ListServersByTagResponse::toJson() const
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

bool ListServersByTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerResource> refVal;
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

std::vector<ServerResource>& ListServersByTagResponse::getResources()
{
    return resources_;
}

void ListServersByTagResponse::setResources(const std::vector<ServerResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListServersByTagResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListServersByTagResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListServersByTagResponse::getTotalCount() const
{
    return totalCount_;
}

void ListServersByTagResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListServersByTagResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListServersByTagResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


