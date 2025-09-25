

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEnhanceFullSqlsResponse::ListEnhanceFullSqlsResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    fullSqlsIsSet_ = false;
    limitCount_ = 0L;
    limitCountIsSet_ = false;
}

ListEnhanceFullSqlsResponse::~ListEnhanceFullSqlsResponse() = default;

void ListEnhanceFullSqlsResponse::validate()
{
}

web::json::value ListEnhanceFullSqlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(fullSqlsIsSet_) {
        val[utility::conversions::to_string_t("full_sqls")] = ModelBase::toJson(fullSqls_);
    }
    if(limitCountIsSet_) {
        val[utility::conversions::to_string_t("limit_count")] = ModelBase::toJson(limitCount_);
    }

    return val;
}
bool ListEnhanceFullSqlsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("full_sqls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_sqls"));
        if(!fieldValue.is_null())
        {
            std::vector<FullSqlResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullSqls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitCount(refVal);
        }
    }
    return ok;
}


int64_t ListEnhanceFullSqlsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListEnhanceFullSqlsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListEnhanceFullSqlsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListEnhanceFullSqlsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<FullSqlResult>& ListEnhanceFullSqlsResponse::getFullSqls()
{
    return fullSqls_;
}

void ListEnhanceFullSqlsResponse::setFullSqls(const std::vector<FullSqlResult>& value)
{
    fullSqls_ = value;
    fullSqlsIsSet_ = true;
}

bool ListEnhanceFullSqlsResponse::fullSqlsIsSet() const
{
    return fullSqlsIsSet_;
}

void ListEnhanceFullSqlsResponse::unsetfullSqls()
{
    fullSqlsIsSet_ = false;
}

int64_t ListEnhanceFullSqlsResponse::getLimitCount() const
{
    return limitCount_;
}

void ListEnhanceFullSqlsResponse::setLimitCount(int64_t value)
{
    limitCount_ = value;
    limitCountIsSet_ = true;
}

bool ListEnhanceFullSqlsResponse::limitCountIsSet() const
{
    return limitCountIsSet_;
}

void ListEnhanceFullSqlsResponse::unsetlimitCount()
{
    limitCountIsSet_ = false;
}

}
}
}
}
}


