

#include "huaweicloud/dds/v3/model/ListInstancesByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListInstancesByTagsResponse::ListInstancesByTagsResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstancesByTagsResponse::~ListInstancesByTagsResponse() = default;

void ListInstancesByTagsResponse::validate()
{
}

web::json::value ListInstancesByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListInstancesByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
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


std::vector<InstanceItem>& ListInstancesByTagsResponse::getInstances()
{
    return instances_;
}

void ListInstancesByTagsResponse::setInstances(const std::vector<InstanceItem>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListInstancesByTagsResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListInstancesByTagsResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListInstancesByTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstancesByTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstancesByTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstancesByTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


