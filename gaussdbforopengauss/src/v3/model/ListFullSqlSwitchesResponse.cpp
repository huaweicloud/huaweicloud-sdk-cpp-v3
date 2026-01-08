

#include "huaweicloud/gaussdbforopengauss/v3/model/ListFullSqlSwitchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListFullSqlSwitchesResponse::ListFullSqlSwitchesResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    fullSqlSwitchesIsSet_ = false;
    allowedSqlTypesIsSet_ = false;
}

ListFullSqlSwitchesResponse::~ListFullSqlSwitchesResponse() = default;

void ListFullSqlSwitchesResponse::validate()
{
}

web::json::value ListFullSqlSwitchesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(fullSqlSwitchesIsSet_) {
        val[utility::conversions::to_string_t("full_sql_switches")] = ModelBase::toJson(fullSqlSwitches_);
    }
    if(allowedSqlTypesIsSet_) {
        val[utility::conversions::to_string_t("allowed_sql_types")] = ModelBase::toJson(allowedSqlTypes_);
    }

    return val;
}
bool ListFullSqlSwitchesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("full_sql_switches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_sql_switches"));
        if(!fieldValue.is_null())
        {
            std::vector<FullSqlSwitchResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullSqlSwitches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_sql_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_sql_types"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlTypeRangeConfigResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedSqlTypes(refVal);
        }
    }
    return ok;
}


int64_t ListFullSqlSwitchesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListFullSqlSwitchesResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListFullSqlSwitchesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListFullSqlSwitchesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<FullSqlSwitchResult>& ListFullSqlSwitchesResponse::getFullSqlSwitches()
{
    return fullSqlSwitches_;
}

void ListFullSqlSwitchesResponse::setFullSqlSwitches(const std::vector<FullSqlSwitchResult>& value)
{
    fullSqlSwitches_ = value;
    fullSqlSwitchesIsSet_ = true;
}

bool ListFullSqlSwitchesResponse::fullSqlSwitchesIsSet() const
{
    return fullSqlSwitchesIsSet_;
}

void ListFullSqlSwitchesResponse::unsetfullSqlSwitches()
{
    fullSqlSwitchesIsSet_ = false;
}

std::vector<SqlTypeRangeConfigResult>& ListFullSqlSwitchesResponse::getAllowedSqlTypes()
{
    return allowedSqlTypes_;
}

void ListFullSqlSwitchesResponse::setAllowedSqlTypes(const std::vector<SqlTypeRangeConfigResult>& value)
{
    allowedSqlTypes_ = value;
    allowedSqlTypesIsSet_ = true;
}

bool ListFullSqlSwitchesResponse::allowedSqlTypesIsSet() const
{
    return allowedSqlTypesIsSet_;
}

void ListFullSqlSwitchesResponse::unsetallowedSqlTypes()
{
    allowedSqlTypesIsSet_ = false;
}

}
}
}
}
}


