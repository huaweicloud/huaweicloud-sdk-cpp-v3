

#include "huaweicloud/metastudio/v1/model/FileExtraMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




FileExtraMeta::FileExtraMeta()
{
    videoTranscodingStatus_ = "";
    videoTranscodingStatusIsSet_ = false;
}

FileExtraMeta::~FileExtraMeta() = default;

void FileExtraMeta::validate()
{
}

web::json::value FileExtraMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoTranscodingStatusIsSet_) {
        val[utility::conversions::to_string_t("video_transcoding_status")] = ModelBase::toJson(videoTranscodingStatus_);
    }

    return val;
}
bool FileExtraMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_transcoding_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_transcoding_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoTranscodingStatus(refVal);
        }
    }
    return ok;
}


std::string FileExtraMeta::getVideoTranscodingStatus() const
{
    return videoTranscodingStatus_;
}

void FileExtraMeta::setVideoTranscodingStatus(const std::string& value)
{
    videoTranscodingStatus_ = value;
    videoTranscodingStatusIsSet_ = true;
}

bool FileExtraMeta::videoTranscodingStatusIsSet() const
{
    return videoTranscodingStatusIsSet_;
}

void FileExtraMeta::unsetvideoTranscodingStatus()
{
    videoTranscodingStatusIsSet_ = false;
}

}
}
}
}
}


