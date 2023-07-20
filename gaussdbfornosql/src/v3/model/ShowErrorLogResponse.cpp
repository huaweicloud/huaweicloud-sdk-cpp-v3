

#include "huaweicloud/gaussdbfornosql/v3/model/ShowErrorLogResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowErrorLogResponse::ShowErrorLogResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    errorLogListIsSet_ = false;
}

ShowErrorLogResponse::~ShowErrorLogResponse() = default;

void ShowErrorLogResponse::validate()
{
}

web::json::value ShowErrorLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(errorLogListIsSet_) {
        val[utility::conversions::to_string_t("error_log_list")] = ModelBase::toJson(errorLogList_);
    }

    return val;
}

bool ShowErrorLogResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorLogList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLogList(refVal);
        }
    }
    return ok;
}

int32_t ShowErrorLogResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowErrorLogResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowErrorLogResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowErrorLogResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ErrorLogList>& ShowErrorLogResponse::getErrorLogList()
{
    return errorLogList_;
}

void ShowErrorLogResponse::setErrorLogList(const std::vector<ErrorLogList>& value)
{
    errorLogList_ = value;
    errorLogListIsSet_ = true;
}

bool ShowErrorLogResponse::errorLogListIsSet() const
{
    return errorLogListIsSet_;
}

void ShowErrorLogResponse::unseterrorLogList()
{
    errorLogListIsSet_ = false;
}

}
}
}
}
}


