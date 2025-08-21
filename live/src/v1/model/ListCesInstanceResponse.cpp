

#include "huaweicloud/live/v1/model/ListCesInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesInstanceResponse::ListCesInstanceResponse()
{
    instancesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListCesInstanceResponse::~ListCesInstanceResponse() = default;

void ListCesInstanceResponse::validate()
{
}

web::json::value ListCesInstanceResponse::toJson() const
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
bool ListCesInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ListCesInstanceRspBody_instances> refVal;
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


std::vector<ListCesInstanceRspBody_instances>& ListCesInstanceResponse::getInstances()
{
    return instances_;
}

void ListCesInstanceResponse::setInstances(const std::vector<ListCesInstanceRspBody_instances>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListCesInstanceResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListCesInstanceResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListCesInstanceResponse::getTotal() const
{
    return total_;
}

void ListCesInstanceResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListCesInstanceResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListCesInstanceResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


