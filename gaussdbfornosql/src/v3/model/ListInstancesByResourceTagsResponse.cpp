

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesByResourceTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesByResourceTagsResponse::ListInstancesByResourceTagsResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstancesByResourceTagsResponse::~ListInstancesByResourceTagsResponse() = default;

void ListInstancesByResourceTagsResponse::validate()
{
}

web::json::value ListInstancesByResourceTagsResponse::toJson() const
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
bool ListInstancesByResourceTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceResult> refVal;
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


std::vector<InstanceResult>& ListInstancesByResourceTagsResponse::getInstances()
{
    return instances_;
}

void ListInstancesByResourceTagsResponse::setInstances(const std::vector<InstanceResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListInstancesByResourceTagsResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListInstancesByResourceTagsResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListInstancesByResourceTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstancesByResourceTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstancesByResourceTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstancesByResourceTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


