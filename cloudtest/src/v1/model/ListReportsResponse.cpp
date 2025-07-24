

#include "huaweicloud/cloudtest/v1/model/ListReportsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListReportsResponse::ListReportsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ListReportsResponse::~ListReportsResponse() = default;

void ListReportsResponse::validate()
{
}

web::json::value ListReportsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListReportsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ResultValueListCustomReportListVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListReportsResponse::getStatus() const
{
    return status_;
}

void ListReportsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListReportsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListReportsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListCustomReportListVo ListReportsResponse::getResult() const
{
    return result_;
}

void ListReportsResponse::setResult(const ResultValueListCustomReportListVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListReportsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListReportsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


