

#include "huaweicloud/codeartsbuild/v3/model/ListEndPointsResultResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListEndPointsResultResponseBody_result::ListEndPointsResultResponseBody_result()
{
    endpointsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListEndPointsResultResponseBody_result::~ListEndPointsResultResponseBody_result() = default;

void ListEndPointsResultResponseBody_result::validate()
{
}

web::json::value ListEndPointsResultResponseBody_result::toJson() const
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
bool ListEndPointsResultResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<EndPointResponse> refVal;
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


std::vector<EndPointResponse>& ListEndPointsResultResponseBody_result::getEndpoints()
{
    return endpoints_;
}

void ListEndPointsResultResponseBody_result::setEndpoints(const std::vector<EndPointResponse>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ListEndPointsResultResponseBody_result::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ListEndPointsResultResponseBody_result::unsetendpoints()
{
    endpointsIsSet_ = false;
}

int32_t ListEndPointsResultResponseBody_result::getTotal() const
{
    return total_;
}

void ListEndPointsResultResponseBody_result::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListEndPointsResultResponseBody_result::totalIsSet() const
{
    return totalIsSet_;
}

void ListEndPointsResultResponseBody_result::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


