

#include "huaweicloud/codeartsrepo/v4/model/ConflictFileDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ConflictFileDto::ConflictFileDto()
{
    oldPath_ = "";
    oldPathIsSet_ = false;
    newPath_ = "";
    newPathIsSet_ = false;
}

ConflictFileDto::~ConflictFileDto() = default;

void ConflictFileDto::validate()
{
}

web::json::value ConflictFileDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldPathIsSet_) {
        val[utility::conversions::to_string_t("old_path")] = ModelBase::toJson(oldPath_);
    }
    if(newPathIsSet_) {
        val[utility::conversions::to_string_t("new_path")] = ModelBase::toJson(newPath_);
    }

    return val;
}
bool ConflictFileDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("old_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewPath(refVal);
        }
    }
    return ok;
}


std::string ConflictFileDto::getOldPath() const
{
    return oldPath_;
}

void ConflictFileDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool ConflictFileDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void ConflictFileDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string ConflictFileDto::getNewPath() const
{
    return newPath_;
}

void ConflictFileDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool ConflictFileDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void ConflictFileDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

}
}
}
}
}


