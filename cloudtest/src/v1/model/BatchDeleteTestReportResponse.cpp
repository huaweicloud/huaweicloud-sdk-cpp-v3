

#include "huaweicloud/cloudtest/v1/model/BatchDeleteTestReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteTestReportResponse::BatchDeleteTestReportResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

BatchDeleteTestReportResponse::~BatchDeleteTestReportResponse() = default;

void BatchDeleteTestReportResponse::validate()
{
}

web::json::value BatchDeleteTestReportResponse::toJson() const
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
bool BatchDeleteTestReportResponse::fromJson(const web::json::value& val)
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
            ResultValueStringForOk refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteTestReportResponse::getStatus() const
{
    return status_;
}

void BatchDeleteTestReportResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteTestReportResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteTestReportResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueStringForOk BatchDeleteTestReportResponse::getResult() const
{
    return result_;
}

void BatchDeleteTestReportResponse::setResult(const ResultValueStringForOk& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeleteTestReportResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeleteTestReportResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


