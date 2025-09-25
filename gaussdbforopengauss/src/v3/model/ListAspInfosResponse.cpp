

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAspInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAspInfosResponse::ListAspInfosResponse()
{
    aspIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListAspInfosResponse::~ListAspInfosResponse() = default;

void ListAspInfosResponse::validate()
{
}

web::json::value ListAspInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aspIsSet_) {
        val[utility::conversions::to_string_t("asp")] = ModelBase::toJson(asp_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListAspInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asp"));
        if(!fieldValue.is_null())
        {
            std::vector<ListAspResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsp(refVal);
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


std::vector<ListAspResult>& ListAspInfosResponse::getAsp()
{
    return asp_;
}

void ListAspInfosResponse::setAsp(const std::vector<ListAspResult>& value)
{
    asp_ = value;
    aspIsSet_ = true;
}

bool ListAspInfosResponse::aspIsSet() const
{
    return aspIsSet_;
}

void ListAspInfosResponse::unsetasp()
{
    aspIsSet_ = false;
}

int32_t ListAspInfosResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAspInfosResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAspInfosResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAspInfosResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


