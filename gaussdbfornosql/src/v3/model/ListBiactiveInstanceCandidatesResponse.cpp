

#include "huaweicloud/gaussdbfornosql/v3/model/ListBiactiveInstanceCandidatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListBiactiveInstanceCandidatesResponse::ListBiactiveInstanceCandidatesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    instancesIsSet_ = false;
}

ListBiactiveInstanceCandidatesResponse::~ListBiactiveInstanceCandidatesResponse() = default;

void ListBiactiveInstanceCandidatesResponse::validate()
{
}

web::json::value ListBiactiveInstanceCandidatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListBiactiveInstanceCandidatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<BiactiveInstanceV3> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


int32_t ListBiactiveInstanceCandidatesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListBiactiveInstanceCandidatesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListBiactiveInstanceCandidatesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListBiactiveInstanceCandidatesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<BiactiveInstanceV3>& ListBiactiveInstanceCandidatesResponse::getInstances()
{
    return instances_;
}

void ListBiactiveInstanceCandidatesResponse::setInstances(const std::vector<BiactiveInstanceV3>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListBiactiveInstanceCandidatesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListBiactiveInstanceCandidatesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


