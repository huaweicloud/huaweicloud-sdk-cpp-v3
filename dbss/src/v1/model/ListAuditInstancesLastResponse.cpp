

#include "huaweicloud/dbss/v1/model/ListAuditInstancesLastResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstancesLastResponse::ListAuditInstancesLastResponse()
{
    instancesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAuditInstancesLastResponse::~ListAuditInstancesLastResponse() = default;

void ListAuditInstancesLastResponse::validate()
{
}

web::json::value ListAuditInstancesLastResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAuditInstancesLastResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditInstanceBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<AuditInstanceBean>& ListAuditInstancesLastResponse::getInstances()
{
    return instances_;
}

void ListAuditInstancesLastResponse::setInstances(const std::vector<AuditInstanceBean>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListAuditInstancesLastResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListAuditInstancesLastResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListAuditInstancesLastResponse::getTotal() const
{
    return total_;
}

void ListAuditInstancesLastResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditInstancesLastResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditInstancesLastResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


