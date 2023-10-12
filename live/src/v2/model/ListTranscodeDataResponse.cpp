

#include "huaweicloud/live/v2/model/ListTranscodeDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListTranscodeDataResponse::ListTranscodeDataResponse()
{
    transcodeDataListIsSet_ = false;
    summaryListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTranscodeDataResponse::~ListTranscodeDataResponse() = default;

void ListTranscodeDataResponse::validate()
{
}

web::json::value ListTranscodeDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transcodeDataListIsSet_) {
        val[utility::conversions::to_string_t("transcode_data_list")] = ModelBase::toJson(transcodeDataList_);
    }
    if(summaryListIsSet_) {
        val[utility::conversions::to_string_t("summary_list")] = ModelBase::toJson(summaryList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTranscodeDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transcode_data_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_data_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TranscodeData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeDataList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("summary_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TranscodeSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummaryList(refVal);
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


std::vector<TranscodeData>& ListTranscodeDataResponse::getTranscodeDataList()
{
    return transcodeDataList_;
}

void ListTranscodeDataResponse::setTranscodeDataList(const std::vector<TranscodeData>& value)
{
    transcodeDataList_ = value;
    transcodeDataListIsSet_ = true;
}

bool ListTranscodeDataResponse::transcodeDataListIsSet() const
{
    return transcodeDataListIsSet_;
}

void ListTranscodeDataResponse::unsettranscodeDataList()
{
    transcodeDataListIsSet_ = false;
}

std::vector<TranscodeSummary>& ListTranscodeDataResponse::getSummaryList()
{
    return summaryList_;
}

void ListTranscodeDataResponse::setSummaryList(const std::vector<TranscodeSummary>& value)
{
    summaryList_ = value;
    summaryListIsSet_ = true;
}

bool ListTranscodeDataResponse::summaryListIsSet() const
{
    return summaryListIsSet_;
}

void ListTranscodeDataResponse::unsetsummaryList()
{
    summaryListIsSet_ = false;
}

std::string ListTranscodeDataResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTranscodeDataResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTranscodeDataResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTranscodeDataResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


