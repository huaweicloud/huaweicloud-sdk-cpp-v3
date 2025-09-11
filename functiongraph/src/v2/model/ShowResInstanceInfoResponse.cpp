

#include "huaweicloud/functiongraph/v2/model/ShowResInstanceInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowResInstanceInfoResponse::ShowResInstanceInfoResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ShowResInstanceInfoResponse::~ShowResInstanceInfoResponse() = default;

void ShowResInstanceInfoResponse::validate()
{
}

web::json::value ShowResInstanceInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowResInstanceInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ListEnterpriseResourceResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ListEnterpriseResourceResult>& ShowResInstanceInfoResponse::getResources()
{
    return resources_;
}

void ShowResInstanceInfoResponse::setResources(const std::vector<ListEnterpriseResourceResult>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ShowResInstanceInfoResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ShowResInstanceInfoResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int64_t ShowResInstanceInfoResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowResInstanceInfoResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowResInstanceInfoResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowResInstanceInfoResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


