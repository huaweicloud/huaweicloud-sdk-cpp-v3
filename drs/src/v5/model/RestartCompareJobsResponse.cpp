

#include "huaweicloud/drs/v5/model/RestartCompareJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




RestartCompareJobsResponse::RestartCompareJobsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

RestartCompareJobsResponse::~RestartCompareJobsResponse() = default;

void RestartCompareJobsResponse::validate()
{
}

web::json::value RestartCompareJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool RestartCompareJobsResponse::fromJson(const web::json::value& val)
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


std::string RestartCompareJobsResponse::getRequestId() const
{
    return requestId_;
}

void RestartCompareJobsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool RestartCompareJobsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void RestartCompareJobsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


