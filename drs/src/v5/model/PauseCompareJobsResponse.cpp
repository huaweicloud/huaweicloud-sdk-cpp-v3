

#include "huaweicloud/drs/v5/model/PauseCompareJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




PauseCompareJobsResponse::PauseCompareJobsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

PauseCompareJobsResponse::~PauseCompareJobsResponse() = default;

void PauseCompareJobsResponse::validate()
{
}

web::json::value PauseCompareJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool PauseCompareJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string PauseCompareJobsResponse::getRequestId() const
{
    return requestId_;
}

void PauseCompareJobsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool PauseCompareJobsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void PauseCompareJobsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


