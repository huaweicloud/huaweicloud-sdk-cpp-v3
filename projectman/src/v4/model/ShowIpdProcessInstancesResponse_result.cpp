

#include "huaweicloud/projectman/v4/model/ShowIpdProcessInstancesResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdProcessInstancesResponse_result::ShowIpdProcessInstancesResponse_result()
{
    total_ = 0;
    totalIsSet_ = false;
    processInstancesIsSet_ = false;
}

ShowIpdProcessInstancesResponse_result::~ShowIpdProcessInstancesResponse_result() = default;

void ShowIpdProcessInstancesResponse_result::validate()
{
}

web::json::value ShowIpdProcessInstancesResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(processInstancesIsSet_) {
        val[utility::conversions::to_string_t("process_instances")] = ModelBase::toJson(processInstances_);
    }

    return val;
}
bool ShowIpdProcessInstancesResponse_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("process_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowIpdProcessInstancesResponse_result_process_instances> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessInstances(refVal);
        }
    }
    return ok;
}


int32_t ShowIpdProcessInstancesResponse_result::getTotal() const
{
    return total_;
}

void ShowIpdProcessInstancesResponse_result::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result::totalIsSet() const
{
    return totalIsSet_;
}

void ShowIpdProcessInstancesResponse_result::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ShowIpdProcessInstancesResponse_result_process_instances>& ShowIpdProcessInstancesResponse_result::getProcessInstances()
{
    return processInstances_;
}

void ShowIpdProcessInstancesResponse_result::setProcessInstances(const std::vector<ShowIpdProcessInstancesResponse_result_process_instances>& value)
{
    processInstances_ = value;
    processInstancesIsSet_ = true;
}

bool ShowIpdProcessInstancesResponse_result::processInstancesIsSet() const
{
    return processInstancesIsSet_;
}

void ShowIpdProcessInstancesResponse_result::unsetprocessInstances()
{
    processInstancesIsSet_ = false;
}

}
}
}
}
}


