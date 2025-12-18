

#include "huaweicloud/meeting/v1/model/ShowRecordingFileDownloadUrlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRecordingFileDownloadUrlsResponse::ShowRecordingFileDownloadUrlsResponse()
{
    recordUrlsIsSet_ = false;
}

ShowRecordingFileDownloadUrlsResponse::~ShowRecordingFileDownloadUrlsResponse() = default;

void ShowRecordingFileDownloadUrlsResponse::validate()
{
}

web::json::value ShowRecordingFileDownloadUrlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordUrlsIsSet_) {
        val[utility::conversions::to_string_t("recordUrls")] = ModelBase::toJson(recordUrls_);
    }

    return val;
}
bool ShowRecordingFileDownloadUrlsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recordUrls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordUrls"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordDownloadInfoBO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordUrls(refVal);
        }
    }
    return ok;
}


std::vector<RecordDownloadInfoBO>& ShowRecordingFileDownloadUrlsResponse::getRecordUrls()
{
    return recordUrls_;
}

void ShowRecordingFileDownloadUrlsResponse::setRecordUrls(const std::vector<RecordDownloadInfoBO>& value)
{
    recordUrls_ = value;
    recordUrlsIsSet_ = true;
}

bool ShowRecordingFileDownloadUrlsResponse::recordUrlsIsSet() const
{
    return recordUrlsIsSet_;
}

void ShowRecordingFileDownloadUrlsResponse::unsetrecordUrls()
{
    recordUrlsIsSet_ = false;
}

}
}
}
}
}


