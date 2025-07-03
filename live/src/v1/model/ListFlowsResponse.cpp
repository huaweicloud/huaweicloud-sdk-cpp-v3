

#include "huaweicloud/live/v1/model/ListFlowsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListFlowsResponse::ListFlowsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    flowsIsSet_ = false;
}

ListFlowsResponse::~ListFlowsResponse() = default;

void ListFlowsResponse::validate()
{
}

web::json::value ListFlowsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(flowsIsSet_) {
        val[utility::conversions::to_string_t("flows")] = ModelBase::toJson(flows_);
    }

    return val;
}
bool ListFlowsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("flows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flows"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFlowRespItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlows(refVal);
        }
    }
    return ok;
}


int32_t ListFlowsResponse::getTotal() const
{
    return total_;
}

void ListFlowsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListFlowsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListFlowsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListFlowRespItem>& ListFlowsResponse::getFlows()
{
    return flows_;
}

void ListFlowsResponse::setFlows(const std::vector<ListFlowRespItem>& value)
{
    flows_ = value;
    flowsIsSet_ = true;
}

bool ListFlowsResponse::flowsIsSet() const
{
    return flowsIsSet_;
}

void ListFlowsResponse::unsetflows()
{
    flowsIsSet_ = false;
}

}
}
}
}
}


