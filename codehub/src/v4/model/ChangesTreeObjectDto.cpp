

#include "huaweicloud/codehub/v4/model/ChangesTreeObjectDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ChangesTreeObjectDto::ChangesTreeObjectDto()
{
    title_ = "";
    titleIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    diffIsSet_ = false;
    itemsIsSet_ = false;
}

ChangesTreeObjectDto::~ChangesTreeObjectDto() = default;

void ChangesTreeObjectDto::validate()
{
}

web::json::value ChangesTreeObjectDto::toJson() const
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
    if(diffIsSet_) {
        val[utility::conversions::to_string_t("diff")] = ModelBase::toJson(diff_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(*items_);
    }

    return val;
}
bool ChangesTreeObjectDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff"));
        if(!fieldValue.is_null())
        {
            ChangesTreeObjectDiffDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiff(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<ChangesTreeObjectDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ChangesTreeObjectDto::getTitle() const
{
    return title_;
}

void ChangesTreeObjectDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ChangesTreeObjectDto::titleIsSet() const
{
    return titleIsSet_;
}

void ChangesTreeObjectDto::unsettitle()
{
    titleIsSet_ = false;
}

int32_t ChangesTreeObjectDto::getLevel() const
{
    return level_;
}

void ChangesTreeObjectDto::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ChangesTreeObjectDto::levelIsSet() const
{
    return levelIsSet_;
}

void ChangesTreeObjectDto::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ChangesTreeObjectDto::getFilePath() const
{
    return filePath_;
}

void ChangesTreeObjectDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ChangesTreeObjectDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void ChangesTreeObjectDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ChangesTreeObjectDto::getFileType() const
{
    return fileType_;
}

void ChangesTreeObjectDto::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ChangesTreeObjectDto::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ChangesTreeObjectDto::unsetfileType()
{
    fileTypeIsSet_ = false;
}

ChangesTreeObjectDiffDto ChangesTreeObjectDto::getDiff() const
{
    return diff_;
}

void ChangesTreeObjectDto::setDiff(const ChangesTreeObjectDiffDto& value)
{
    diff_ = value;
    diffIsSet_ = true;
}

bool ChangesTreeObjectDto::diffIsSet() const
{
    return diffIsSet_;
}

void ChangesTreeObjectDto::unsetdiff()
{
    diffIsSet_ = false;
}

std::vector<ChangesTreeObjectDto>& ChangesTreeObjectDto::getItems()
{
    return *items_;
}

void ChangesTreeObjectDto::setItems(const std::vector<ChangesTreeObjectDto>& value)
{
    *items_ = value;
    itemsIsSet_ = true;
}

bool ChangesTreeObjectDto::itemsIsSet() const
{
    return itemsIsSet_;
}

void ChangesTreeObjectDto::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


