

#include "huaweicloud/modelarts/v1/model/LtsFiles.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LtsFiles::LtsFiles()
{
    logPath_ = "";
    logPathIsSet_ = false;
    filePattern_ = "";
    filePatternIsSet_ = false;
}

LtsFiles::~LtsFiles() = default;

void LtsFiles::validate()
{
}

web::json::value LtsFiles::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logPathIsSet_) {
        val[utility::conversions::to_string_t("log_path")] = ModelBase::toJson(logPath_);
    }
    if(filePatternIsSet_) {
        val[utility::conversions::to_string_t("file_pattern")] = ModelBase::toJson(filePattern_);
    }

    return val;
}
bool LtsFiles::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePattern(refVal);
        }
    }
    return ok;
}


std::string LtsFiles::getLogPath() const
{
    return logPath_;
}

void LtsFiles::setLogPath(const std::string& value)
{
    logPath_ = value;
    logPathIsSet_ = true;
}

bool LtsFiles::logPathIsSet() const
{
    return logPathIsSet_;
}

void LtsFiles::unsetlogPath()
{
    logPathIsSet_ = false;
}

std::string LtsFiles::getFilePattern() const
{
    return filePattern_;
}

void LtsFiles::setFilePattern(const std::string& value)
{
    filePattern_ = value;
    filePatternIsSet_ = true;
}

bool LtsFiles::filePatternIsSet() const
{
    return filePatternIsSet_;
}

void LtsFiles::unsetfilePattern()
{
    filePatternIsSet_ = false;
}

}
}
}
}
}


