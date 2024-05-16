

#include "huaweicloud/gaussdb/v3/model/ListStarrocksInstanceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListStarrocksInstanceInfoResponse::ListStarrocksInstanceInfoResponse()
{
    instancesIsSet_ = false;
}

ListStarrocksInstanceInfoResponse::~ListStarrocksInstanceInfoResponse() = default;

void ListStarrocksInstanceInfoResponse::validate()
{
}

web::json::value ListStarrocksInstanceInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListStarrocksInstanceInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<StarRocksInstanceInfo_instances> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<StarRocksInstanceInfo_instances>& ListStarrocksInstanceInfoResponse::getInstances()
{
    return instances_;
}

void ListStarrocksInstanceInfoResponse::setInstances(const std::vector<StarRocksInstanceInfo_instances>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListStarrocksInstanceInfoResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListStarrocksInstanceInfoResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


