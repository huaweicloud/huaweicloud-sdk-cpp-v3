

#include "huaweicloud/live/v2/model/ListTranscodeTaskDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListTranscodeTaskDetailResponse::ListTranscodeTaskDetailResponse()
{
    domain_ = "";
    domainIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    transcodeDetailListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTranscodeTaskDetailResponse::~ListTranscodeTaskDetailResponse() = default;

void ListTranscodeTaskDetailResponse::validate()
{
}

web::json::value ListTranscodeTaskDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(transcodeDetailListIsSet_) {
        val[utility::conversions::to_string_t("transcode_detail_list")] = ModelBase::toJson(transcodeDetailList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTranscodeTaskDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_detail_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_detail_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TranscodeDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeDetailList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ListTranscodeTaskDetailResponse::getDomain() const
{
    return domain_;
}

void ListTranscodeTaskDetailResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListTranscodeTaskDetailResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ListTranscodeTaskDetailResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListTranscodeTaskDetailResponse::getStartTime() const
{
    return startTime_;
}

void ListTranscodeTaskDetailResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTranscodeTaskDetailResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTranscodeTaskDetailResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTranscodeTaskDetailResponse::getEndTime() const
{
    return endTime_;
}

void ListTranscodeTaskDetailResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTranscodeTaskDetailResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTranscodeTaskDetailResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<TranscodeDetailInfo>& ListTranscodeTaskDetailResponse::getTranscodeDetailList()
{
    return transcodeDetailList_;
}

void ListTranscodeTaskDetailResponse::setTranscodeDetailList(const std::vector<TranscodeDetailInfo>& value)
{
    transcodeDetailList_ = value;
    transcodeDetailListIsSet_ = true;
}

bool ListTranscodeTaskDetailResponse::transcodeDetailListIsSet() const
{
    return transcodeDetailListIsSet_;
}

void ListTranscodeTaskDetailResponse::unsettranscodeDetailList()
{
    transcodeDetailListIsSet_ = false;
}

std::string ListTranscodeTaskDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTranscodeTaskDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTranscodeTaskDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTranscodeTaskDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


