

#include "huaweicloud/dbss/v1/model/CountOperationStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountOperationStatisticsResponse::CountOperationStatisticsResponse()
{
    generateTime_ = "";
    generateTimeIsSet_ = false;
    operationStatisticsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CountOperationStatisticsResponse::~CountOperationStatisticsResponse() = default;

void CountOperationStatisticsResponse::validate()
{
}

web::json::value CountOperationStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(generateTimeIsSet_) {
        val[utility::conversions::to_string_t("generate_time")] = ModelBase::toJson(generateTime_);
    }
    if(operationStatisticsIsSet_) {
        val[utility::conversions::to_string_t("operation_statistics")] = ModelBase::toJson(operationStatistics_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CountOperationStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("generate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenerateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<OperationStatisticsBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CountOperationStatisticsResponse::getGenerateTime() const
{
    return generateTime_;
}

void CountOperationStatisticsResponse::setGenerateTime(const std::string& value)
{
    generateTime_ = value;
    generateTimeIsSet_ = true;
}

bool CountOperationStatisticsResponse::generateTimeIsSet() const
{
    return generateTimeIsSet_;
}

void CountOperationStatisticsResponse::unsetgenerateTime()
{
    generateTimeIsSet_ = false;
}

std::vector<OperationStatisticsBean>& CountOperationStatisticsResponse::getOperationStatistics()
{
    return operationStatistics_;
}

void CountOperationStatisticsResponse::setOperationStatistics(const std::vector<OperationStatisticsBean>& value)
{
    operationStatistics_ = value;
    operationStatisticsIsSet_ = true;
}

bool CountOperationStatisticsResponse::operationStatisticsIsSet() const
{
    return operationStatisticsIsSet_;
}

void CountOperationStatisticsResponse::unsetoperationStatistics()
{
    operationStatisticsIsSet_ = false;
}

std::string CountOperationStatisticsResponse::getStatus() const
{
    return status_;
}

void CountOperationStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountOperationStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CountOperationStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


