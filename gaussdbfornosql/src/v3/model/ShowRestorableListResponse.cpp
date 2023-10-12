

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRestorableListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRestorableListResponse::ShowRestorableListResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    restorableInstancesIsSet_ = false;
}

ShowRestorableListResponse::~ShowRestorableListResponse() = default;

void ShowRestorableListResponse::validate()
{
}

web::json::value ShowRestorableListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(restorableInstancesIsSet_) {
        val[utility::conversions::to_string_t("restorable_instances")] = ModelBase::toJson(restorableInstances_);
    }

    return val;
}
bool ShowRestorableListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("restorable_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restorable_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryRestoreList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestorableInstances(refVal);
        }
    }
    return ok;
}


int32_t ShowRestorableListResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowRestorableListResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowRestorableListResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowRestorableListResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<QueryRestoreList>& ShowRestorableListResponse::getRestorableInstances()
{
    return restorableInstances_;
}

void ShowRestorableListResponse::setRestorableInstances(const std::vector<QueryRestoreList>& value)
{
    restorableInstances_ = value;
    restorableInstancesIsSet_ = true;
}

bool ShowRestorableListResponse::restorableInstancesIsSet() const
{
    return restorableInstancesIsSet_;
}

void ShowRestorableListResponse::unsetrestorableInstances()
{
    restorableInstancesIsSet_ = false;
}

}
}
}
}
}


