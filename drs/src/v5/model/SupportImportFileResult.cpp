

#include "huaweicloud/drs/v5/model/SupportImportFileResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SupportImportFileResult::SupportImportFileResult()
{
    fileSize_ = "";
    fileSizeIsSet_ = false;
    previousSelect_ = "";
    previousSelectIsSet_ = false;
}

SupportImportFileResult::~SupportImportFileResult() = default;

void SupportImportFileResult::validate()
{
}

web::json::value SupportImportFileResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(previousSelectIsSet_) {
        val[utility::conversions::to_string_t("previous_select")] = ModelBase::toJson(previousSelect_);
    }

    return val;
}
bool SupportImportFileResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("previous_select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous_select"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousSelect(refVal);
        }
    }
    return ok;
}


std::string SupportImportFileResult::getFileSize() const
{
    return fileSize_;
}

void SupportImportFileResult::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool SupportImportFileResult::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void SupportImportFileResult::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string SupportImportFileResult::getPreviousSelect() const
{
    return previousSelect_;
}

void SupportImportFileResult::setPreviousSelect(const std::string& value)
{
    previousSelect_ = value;
    previousSelectIsSet_ = true;
}

bool SupportImportFileResult::previousSelectIsSet() const
{
    return previousSelectIsSet_;
}

void SupportImportFileResult::unsetpreviousSelect()
{
    previousSelectIsSet_ = false;
}

}
}
}
}
}


