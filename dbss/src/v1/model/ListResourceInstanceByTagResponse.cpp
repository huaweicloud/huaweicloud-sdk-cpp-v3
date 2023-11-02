

#include "huaweicloud/dbss/v1/model/ListResourceInstanceByTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListResourceInstanceByTagResponse::ListResourceInstanceByTagResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListResourceInstanceByTagResponse::~ListResourceInstanceByTagResponse() = default;

void ListResourceInstanceByTagResponse::validate()
{
}

web::json::value ListResourceInstanceByTagResponse::toJson() const
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
bool ListResourceInstanceByTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceInstanceResponse_resources> refVal;
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


std::vector<ResourceInstanceResponse_resources>& ListResourceInstanceByTagResponse::getResources()
{
    return resources_;
}

void ListResourceInstanceByTagResponse::setResources(const std::vector<ResourceInstanceResponse_resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListResourceInstanceByTagResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListResourceInstanceByTagResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t ListResourceInstanceByTagResponse::getTotalCount() const
{
    return totalCount_;
}

void ListResourceInstanceByTagResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListResourceInstanceByTagResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListResourceInstanceByTagResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


