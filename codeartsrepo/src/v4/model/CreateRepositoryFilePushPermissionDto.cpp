

#include "huaweicloud/codeartsrepo/v4/model/CreateRepositoryFilePushPermissionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateRepositoryFilePushPermissionDto::CreateRepositoryFilePushPermissionDto()
{
    path_ = "";
    pathIsSet_ = false;
    actionsIsSet_ = false;
}

CreateRepositoryFilePushPermissionDto::~CreateRepositoryFilePushPermissionDto() = default;

void CreateRepositoryFilePushPermissionDto::validate()
{
}

web::json::value CreateRepositoryFilePushPermissionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool CreateRepositoryFilePushPermissionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreateRepositoryFilePushPermissionDto::getPath() const
{
    return path_;
}

void CreateRepositoryFilePushPermissionDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool CreateRepositoryFilePushPermissionDto::pathIsSet() const
{
    return pathIsSet_;
}

void CreateRepositoryFilePushPermissionDto::unsetpath()
{
    pathIsSet_ = false;
}

std::vector<FilePushPermissionActionBodyDto>& CreateRepositoryFilePushPermissionDto::getActions()
{
    return actions_;
}

void CreateRepositoryFilePushPermissionDto::setActions(const std::vector<FilePushPermissionActionBodyDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CreateRepositoryFilePushPermissionDto::actionsIsSet() const
{
    return actionsIsSet_;
}

void CreateRepositoryFilePushPermissionDto::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


