

#include "huaweicloud/modelarts/v1/model/WorkloadStatistics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkloadStatistics::WorkloadStatistics()
{
    type_ = "";
    typeIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    statusIsSet_ = false;
}

WorkloadStatistics::~WorkloadStatistics() = default;

void WorkloadStatistics::validate()
{
}

web::json::value WorkloadStatistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool WorkloadStatistics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            WorkloadStatistics_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string WorkloadStatistics::getType() const
{
    return type_;
}

void WorkloadStatistics::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkloadStatistics::typeIsSet() const
{
    return typeIsSet_;
}

void WorkloadStatistics::unsettype()
{
    typeIsSet_ = false;
}

int32_t WorkloadStatistics::getTotal() const
{
    return total_;
}

void WorkloadStatistics::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool WorkloadStatistics::totalIsSet() const
{
    return totalIsSet_;
}

void WorkloadStatistics::unsettotal()
{
    totalIsSet_ = false;
}

WorkloadStatistics_status WorkloadStatistics::getStatus() const
{
    return status_;
}

void WorkloadStatistics::setStatus(const WorkloadStatistics_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkloadStatistics::statusIsSet() const
{
    return statusIsSet_;
}

void WorkloadStatistics::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


