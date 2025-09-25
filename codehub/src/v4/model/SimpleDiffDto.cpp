

#include "huaweicloud/codehub/v4/model/SimpleDiffDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SimpleDiffDto::SimpleDiffDto()
{
    addedLine_ = 0;
    addedLineIsSet_ = false;
    deletedLine_ = 0;
    deletedLineIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
}

SimpleDiffDto::~SimpleDiffDto() = default;

void SimpleDiffDto::validate()
{
}

web::json::value SimpleDiffDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addedLineIsSet_) {
        val[utility::conversions::to_string_t("added_line")] = ModelBase::toJson(addedLine_);
    }
    if(deletedLineIsSet_) {
        val[utility::conversions::to_string_t("deleted_line")] = ModelBase::toJson(deletedLine_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }

    return val;
}
bool SimpleDiffDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("added_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddedLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletedLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    return ok;
}


int32_t SimpleDiffDto::getAddedLine() const
{
    return addedLine_;
}

void SimpleDiffDto::setAddedLine(int32_t value)
{
    addedLine_ = value;
    addedLineIsSet_ = true;
}

bool SimpleDiffDto::addedLineIsSet() const
{
    return addedLineIsSet_;
}

void SimpleDiffDto::unsetaddedLine()
{
    addedLineIsSet_ = false;
}

int32_t SimpleDiffDto::getDeletedLine() const
{
    return deletedLine_;
}

void SimpleDiffDto::setDeletedLine(int32_t value)
{
    deletedLine_ = value;
    deletedLineIsSet_ = true;
}

bool SimpleDiffDto::deletedLineIsSet() const
{
    return deletedLineIsSet_;
}

void SimpleDiffDto::unsetdeletedLine()
{
    deletedLineIsSet_ = false;
}

std::string SimpleDiffDto::getPath() const
{
    return path_;
}

void SimpleDiffDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool SimpleDiffDto::pathIsSet() const
{
    return pathIsSet_;
}

void SimpleDiffDto::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


