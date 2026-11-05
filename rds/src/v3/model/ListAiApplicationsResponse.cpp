

#include "huaweicloud/rds/v3/model/ListAiApplicationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAiApplicationsResponse::ListAiApplicationsResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    dataIsSet_ = false;
}

ListAiApplicationsResponse::~ListAiApplicationsResponse() = default;

void ListAiApplicationsResponse::validate()
{
}

web::json::value ListAiApplicationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListAiApplicationsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<AIApplicationListItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int64_t ListAiApplicationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAiApplicationsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAiApplicationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAiApplicationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AIApplicationListItem>& ListAiApplicationsResponse::getData()
{
    return data_;
}

void ListAiApplicationsResponse::setData(const std::vector<AIApplicationListItem>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAiApplicationsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAiApplicationsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


