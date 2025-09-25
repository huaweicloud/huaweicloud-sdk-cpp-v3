

#include "huaweicloud/codehub/v3/model/MergeChangesTrees.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




MergeChangesTrees::MergeChangesTrees()
{
    title_ = "";
    titleIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
}

MergeChangesTrees::~MergeChangesTrees() = default;

void MergeChangesTrees::validate()
{
}

web::json::value MergeChangesTrees::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }

    return val;
}
bool MergeChangesTrees::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    return ok;
}


std::string MergeChangesTrees::getTitle() const
{
    return title_;
}

void MergeChangesTrees::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeChangesTrees::titleIsSet() const
{
    return titleIsSet_;
}

void MergeChangesTrees::unsettitle()
{
    titleIsSet_ = false;
}

int32_t MergeChangesTrees::getLevel() const
{
    return level_;
}

void MergeChangesTrees::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool MergeChangesTrees::levelIsSet() const
{
    return levelIsSet_;
}

void MergeChangesTrees::unsetlevel()
{
    levelIsSet_ = false;
}

std::string MergeChangesTrees::getFilePath() const
{
    return filePath_;
}

void MergeChangesTrees::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool MergeChangesTrees::filePathIsSet() const
{
    return filePathIsSet_;
}

void MergeChangesTrees::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string MergeChangesTrees::getFileType() const
{
    return fileType_;
}

void MergeChangesTrees::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool MergeChangesTrees::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void MergeChangesTrees::unsetfileType()
{
    fileTypeIsSet_ = false;
}

}
}
}
}
}


