

#include "huaweicloud/codeartsrepo/v4/model/FilePushPermissionUpdateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




FilePushPermissionUpdateDto::FilePushPermissionUpdateDto()
{
    id_ = 0;
    idIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    actionsIsSet_ = false;
}

FilePushPermissionUpdateDto::~FilePushPermissionUpdateDto() = default;

void FilePushPermissionUpdateDto::validate()
{
}

web::json::value FilePushPermissionUpdateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool FilePushPermissionUpdateDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<FilePushPermissionActionBodyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


int32_t FilePushPermissionUpdateDto::getId() const
{
    return id_;
}

void FilePushPermissionUpdateDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FilePushPermissionUpdateDto::idIsSet() const
{
    return idIsSet_;
}

void FilePushPermissionUpdateDto::unsetid()
{
    idIsSet_ = false;
}

std::string FilePushPermissionUpdateDto::getPath() const
{
    return path_;
}

void FilePushPermissionUpdateDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool FilePushPermissionUpdateDto::pathIsSet() const
{
    return pathIsSet_;
}

void FilePushPermissionUpdateDto::unsetpath()
{
    pathIsSet_ = false;
}

std::vector<FilePushPermissionActionBodyDto>& FilePushPermissionUpdateDto::getActions()
{
    return actions_;
}

void FilePushPermissionUpdateDto::setActions(const std::vector<FilePushPermissionActionBodyDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool FilePushPermissionUpdateDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void FilePushPermissionUpdateDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


