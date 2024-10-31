

#include "huaweicloud/gaussdbforopengauss/v3/model/ListNodeLimitSqlModelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListNodeLimitSqlModelResponse::ListNodeLimitSqlModelResponse()
{
    nodeLimitSqlModelListIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListNodeLimitSqlModelResponse::~ListNodeLimitSqlModelResponse() = default;

void ListNodeLimitSqlModelResponse::validate()
{
}

web::json::value ListNodeLimitSqlModelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeLimitSqlModelListIsSet_) {
        val[utility::conversions::to_string_t("node_limit_sql_model_list")] = ModelBase::toJson(nodeLimitSqlModelList_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListNodeLimitSqlModelResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_limit_sql_model_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_limit_sql_model_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListNodeLimitSqlModelResponseResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeLimitSqlModelList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


std::vector<ListNodeLimitSqlModelResponseResult>& ListNodeLimitSqlModelResponse::getNodeLimitSqlModelList()
{
    return nodeLimitSqlModelList_;
}

void ListNodeLimitSqlModelResponse::setNodeLimitSqlModelList(const std::vector<ListNodeLimitSqlModelResponseResult>& value)
{
    nodeLimitSqlModelList_ = value;
    nodeLimitSqlModelListIsSet_ = true;
}

bool ListNodeLimitSqlModelResponse::nodeLimitSqlModelListIsSet() const
{
    return nodeLimitSqlModelListIsSet_;
}

void ListNodeLimitSqlModelResponse::unsetnodeLimitSqlModelList()
{
    nodeLimitSqlModelListIsSet_ = false;
}

int32_t ListNodeLimitSqlModelResponse::getLimit() const
{
    return limit_;
}

void ListNodeLimitSqlModelResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNodeLimitSqlModelResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListNodeLimitSqlModelResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListNodeLimitSqlModelResponse::getOffset() const
{
    return offset_;
}

void ListNodeLimitSqlModelResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListNodeLimitSqlModelResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListNodeLimitSqlModelResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListNodeLimitSqlModelResponse::getTotalCount() const
{
    return totalCount_;
}

void ListNodeLimitSqlModelResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListNodeLimitSqlModelResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListNodeLimitSqlModelResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


