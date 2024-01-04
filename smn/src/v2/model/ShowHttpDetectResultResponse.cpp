

#include "huaweicloud/smn/v2/model/ShowHttpDetectResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ShowHttpDetectResultResponse::ShowHttpDetectResultResponse()
{
    detailIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowHttpDetectResultResponse::~ShowHttpDetectResultResponse() = default;

void ShowHttpDetectResultResponse::validate()
{
}

web::json::value ShowHttpDetectResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ShowHttpDetectResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            GetHttpDetectResponseBody_detail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
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


GetHttpDetectResponseBody_detail ShowHttpDetectResultResponse::getDetail() const
{
    return detail_;
}

void ShowHttpDetectResultResponse::setDetail(const GetHttpDetectResponseBody_detail& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ShowHttpDetectResultResponse::detailIsSet() const
{
    return detailIsSet_;
}

void ShowHttpDetectResultResponse::unsetdetail()
{
    detailIsSet_ = false;
}

int32_t ShowHttpDetectResultResponse::getStatus() const
{
    return status_;
}

void ShowHttpDetectResultResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHttpDetectResultResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHttpDetectResultResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowHttpDetectResultResponse::getRequestId() const
{
    return requestId_;
}

void ShowHttpDetectResultResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowHttpDetectResultResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowHttpDetectResultResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


