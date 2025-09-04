

#include "huaweicloud/iotdm/v5/model/ListInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ListInstancesResponse::ListInstancesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    instancesIsSet_ = false;
}

ListInstancesResponse::~ListInstancesResponse() = default;

void ListInstancesResponse::validate()
{
}

web::json::value ListInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryInstanceSimplify> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


int32_t ListInstancesResponse::getCount() const
{
    return count_;
}

void ListInstancesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListInstancesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListInstancesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ListInstancesResponse::getMarker() const
{
    return marker_;
}

void ListInstancesResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListInstancesResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListInstancesResponse::unsetmarker()
{
    markerIsSet_ = false;
}

std::vector<QueryInstanceSimplify>& ListInstancesResponse::getInstances()
{
    return instances_;
}

void ListInstancesResponse::setInstances(const std::vector<QueryInstanceSimplify>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


