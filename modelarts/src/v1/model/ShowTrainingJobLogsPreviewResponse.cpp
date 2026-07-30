

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobLogsPreviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobLogsPreviewResponse::ShowTrainingJobLogsPreviewResponse()
{
    content_ = "";
    contentIsSet_ = false;
    currentSize_ = 0;
    currentSizeIsSet_ = false;
    fullSize_ = 0;
    fullSizeIsSet_ = false;
}

ShowTrainingJobLogsPreviewResponse::~ShowTrainingJobLogsPreviewResponse() = default;

void ShowTrainingJobLogsPreviewResponse::validate()
{
}

web::json::value ShowTrainingJobLogsPreviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(currentSizeIsSet_) {
        val[utility::conversions::to_string_t("current_size")] = ModelBase::toJson(currentSize_);
    }
    if(fullSizeIsSet_) {
        val[utility::conversions::to_string_t("full_size")] = ModelBase::toJson(fullSize_);
    }

    return val;
}
bool ShowTrainingJobLogsPreviewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullSize(refVal);
        }
    }
    return ok;
}


std::string ShowTrainingJobLogsPreviewResponse::getContent() const
{
    return content_;
}

void ShowTrainingJobLogsPreviewResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowTrainingJobLogsPreviewResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowTrainingJobLogsPreviewResponse::unsetcontent()
{
    contentIsSet_ = false;
}

int32_t ShowTrainingJobLogsPreviewResponse::getCurrentSize() const
{
    return currentSize_;
}

void ShowTrainingJobLogsPreviewResponse::setCurrentSize(int32_t value)
{
    currentSize_ = value;
    currentSizeIsSet_ = true;
}

bool ShowTrainingJobLogsPreviewResponse::currentSizeIsSet() const
{
    return currentSizeIsSet_;
}

void ShowTrainingJobLogsPreviewResponse::unsetcurrentSize()
{
    currentSizeIsSet_ = false;
}

int32_t ShowTrainingJobLogsPreviewResponse::getFullSize() const
{
    return fullSize_;
}

void ShowTrainingJobLogsPreviewResponse::setFullSize(int32_t value)
{
    fullSize_ = value;
    fullSizeIsSet_ = true;
}

bool ShowTrainingJobLogsPreviewResponse::fullSizeIsSet() const
{
    return fullSizeIsSet_;
}

void ShowTrainingJobLogsPreviewResponse::unsetfullSize()
{
    fullSizeIsSet_ = false;
}

}
}
}
}
}


