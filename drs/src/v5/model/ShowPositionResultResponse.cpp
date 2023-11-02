

#include "huaweicloud/drs/v5/model/ShowPositionResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowPositionResultResponse::ShowPositionResultResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    position_ = "";
    positionIsSet_ = false;
}

ShowPositionResultResponse::~ShowPositionResultResponse() = default;

void ShowPositionResultResponse::validate()
{
}

web::json::value ShowPositionResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }

    return val;
}
bool ShowPositionResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
        }
    }
    return ok;
}


std::string ShowPositionResultResponse::getJobId() const
{
    return jobId_;
}

void ShowPositionResultResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowPositionResultResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowPositionResultResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowPositionResultResponse::getPosition() const
{
    return position_;
}

void ShowPositionResultResponse::setPosition(const std::string& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool ShowPositionResultResponse::positionIsSet() const
{
    return positionIsSet_;
}

void ShowPositionResultResponse::unsetposition()
{
    positionIsSet_ = false;
}

}
}
}
}
}


