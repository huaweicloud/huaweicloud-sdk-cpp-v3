

#include "huaweicloud/codeartspipeline/v2/model/EndpointList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




EndpointList::EndpointList()
{
    endpointsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

EndpointList::~EndpointList() = default;

void EndpointList::validate()
{
}

web::json::value EndpointList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool EndpointList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<Endpoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
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


std::vector<Endpoint>& EndpointList::getEndpoints()
{
    return endpoints_;
}

void EndpointList::setEndpoints(const std::vector<Endpoint>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool EndpointList::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void EndpointList::unsetendpoints()
{
    endpointsIsSet_ = false;
}

int32_t EndpointList::getTotal() const
{
    return total_;
}

void EndpointList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool EndpointList::totalIsSet() const
{
    return totalIsSet_;
}

void EndpointList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


