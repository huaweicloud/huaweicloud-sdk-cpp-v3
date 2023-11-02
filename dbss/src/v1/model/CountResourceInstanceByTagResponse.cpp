

#include "huaweicloud/dbss/v1/model/CountResourceInstanceByTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountResourceInstanceByTagResponse::CountResourceInstanceByTagResponse()
{
    resourcesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

CountResourceInstanceByTagResponse::~CountResourceInstanceByTagResponse() = default;

void CountResourceInstanceByTagResponse::validate()
{
}

web::json::value CountResourceInstanceByTagResponse::toJson() const
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
bool CountResourceInstanceByTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceInstanceResponse_resources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ResourceInstanceResponse_resources>& CountResourceInstanceByTagResponse::getResources()
{
    return resources_;
}

void CountResourceInstanceByTagResponse::setResources(const std::vector<ResourceInstanceResponse_resources>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool CountResourceInstanceByTagResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void CountResourceInstanceByTagResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

int32_t CountResourceInstanceByTagResponse::getTotalCount() const
{
    return totalCount_;
}

void CountResourceInstanceByTagResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool CountResourceInstanceByTagResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void CountResourceInstanceByTagResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


