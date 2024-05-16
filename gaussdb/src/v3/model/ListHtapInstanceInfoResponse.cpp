

#include "huaweicloud/gaussdb/v3/model/ListHtapInstanceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListHtapInstanceInfoResponse::ListHtapInstanceInfoResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    instancesIsSet_ = false;
    maxHtapInstanceNumOfTaurus_ = 0;
    maxHtapInstanceNumOfTaurusIsSet_ = false;
}

ListHtapInstanceInfoResponse::~ListHtapInstanceInfoResponse() = default;

void ListHtapInstanceInfoResponse::validate()
{
}

web::json::value ListHtapInstanceInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(maxHtapInstanceNumOfTaurusIsSet_) {
        val[utility::conversions::to_string_t("max_htap_instance_num_of_taurus")] = ModelBase::toJson(maxHtapInstanceNumOfTaurus_);
    }

    return val;
}
bool ListHtapInstanceInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapInstanceList_instances> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_htap_instance_num_of_taurus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_htap_instance_num_of_taurus"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxHtapInstanceNumOfTaurus(refVal);
        }
    }
    return ok;
}


int32_t ListHtapInstanceInfoResponse::getTotal() const
{
    return total_;
}

void ListHtapInstanceInfoResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHtapInstanceInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHtapInstanceInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<HtapInstanceList_instances>& ListHtapInstanceInfoResponse::getInstances()
{
    return instances_;
}

void ListHtapInstanceInfoResponse::setInstances(const std::vector<HtapInstanceList_instances>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListHtapInstanceInfoResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListHtapInstanceInfoResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListHtapInstanceInfoResponse::getMaxHtapInstanceNumOfTaurus() const
{
    return maxHtapInstanceNumOfTaurus_;
}

void ListHtapInstanceInfoResponse::setMaxHtapInstanceNumOfTaurus(int32_t value)
{
    maxHtapInstanceNumOfTaurus_ = value;
    maxHtapInstanceNumOfTaurusIsSet_ = true;
}

bool ListHtapInstanceInfoResponse::maxHtapInstanceNumOfTaurusIsSet() const
{
    return maxHtapInstanceNumOfTaurusIsSet_;
}

void ListHtapInstanceInfoResponse::unsetmaxHtapInstanceNumOfTaurus()
{
    maxHtapInstanceNumOfTaurusIsSet_ = false;
}

}
}
}
}
}


