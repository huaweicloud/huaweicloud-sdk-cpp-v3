

#include "huaweicloud/drs/v3/model/GetDataTransformationResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




GetDataTransformationResp::GetDataTransformationResp()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    filterConditionsIsSet_ = false;
}

GetDataTransformationResp::~GetDataTransformationResp() = default;

void GetDataTransformationResp::validate()
{
}

web::json::value GetDataTransformationResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(filterConditionsIsSet_) {
        val[utility::conversions::to_string_t("filter_conditions")] = ModelBase::toJson(filterConditions_);
    }

    return val;
}
bool GetDataTransformationResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<DataTransformationInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterConditions(refVal);
        }
    }
    return ok;
}


int64_t GetDataTransformationResp::getTotalCount() const
{
    return totalCount_;
}

void GetDataTransformationResp::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool GetDataTransformationResp::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void GetDataTransformationResp::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<DataTransformationInfo>& GetDataTransformationResp::getFilterConditions()
{
    return filterConditions_;
}

void GetDataTransformationResp::setFilterConditions(const std::vector<DataTransformationInfo>& value)
{
    filterConditions_ = value;
    filterConditionsIsSet_ = true;
}

bool GetDataTransformationResp::filterConditionsIsSet() const
{
    return filterConditionsIsSet_;
}

void GetDataTransformationResp::unsetfilterConditions()
{
    filterConditionsIsSet_ = false;
}

}
}
}
}
}


