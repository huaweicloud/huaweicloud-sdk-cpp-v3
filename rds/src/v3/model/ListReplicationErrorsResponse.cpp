

#include "huaweicloud/rds/v3/model/ListReplicationErrorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListReplicationErrorsResponse::ListReplicationErrorsResponse()
{
    errorsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListReplicationErrorsResponse::~ListReplicationErrorsResponse() = default;

void ListReplicationErrorsResponse::validate()
{
}

web::json::value ListReplicationErrorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListReplicationErrorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            std::vector<ListReplicationErrorsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
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


std::vector<ListReplicationErrorsResult>& ListReplicationErrorsResponse::getErrors()
{
    return errors_;
}

void ListReplicationErrorsResponse::setErrors(const std::vector<ListReplicationErrorsResult>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool ListReplicationErrorsResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void ListReplicationErrorsResponse::unseterrors()
{
    errorsIsSet_ = false;
}

int32_t ListReplicationErrorsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListReplicationErrorsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListReplicationErrorsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListReplicationErrorsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


