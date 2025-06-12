

#include "huaweicloud/metastudio/v1/model/ShowTtsAuditionFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTtsAuditionFileResponse::ShowTtsAuditionFileResponse()
{
    isFileComplete_ = false;
    isFileCompleteIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    filesIsSet_ = false;
}

ShowTtsAuditionFileResponse::~ShowTtsAuditionFileResponse() = default;

void ShowTtsAuditionFileResponse::validate()
{
}

web::json::value ShowTtsAuditionFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isFileCompleteIsSet_) {
        val[utility::conversions::to_string_t("is_file_complete")] = ModelBase::toJson(isFileComplete_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool ShowTtsAuditionFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_file_complete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_file_complete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFileComplete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditionFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


bool ShowTtsAuditionFileResponse::isIsFileComplete() const
{
    return isFileComplete_;
}

void ShowTtsAuditionFileResponse::setIsFileComplete(bool value)
{
    isFileComplete_ = value;
    isFileCompleteIsSet_ = true;
}

bool ShowTtsAuditionFileResponse::isFileCompleteIsSet() const
{
    return isFileCompleteIsSet_;
}

void ShowTtsAuditionFileResponse::unsetisFileComplete()
{
    isFileCompleteIsSet_ = false;
}

std::string ShowTtsAuditionFileResponse::getMessage() const
{
    return message_;
}

void ShowTtsAuditionFileResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowTtsAuditionFileResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowTtsAuditionFileResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<AuditionFile>& ShowTtsAuditionFileResponse::getFiles()
{
    return files_;
}

void ShowTtsAuditionFileResponse::setFiles(const std::vector<AuditionFile>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool ShowTtsAuditionFileResponse::filesIsSet() const
{
    return filesIsSet_;
}

void ShowTtsAuditionFileResponse::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


