

#include "huaweicloud/codeartsrepo/v4/model/CreateFilePushPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateFilePushPermissionResponse::CreateFilePushPermissionResponse()
{
    id_ = 0;
    idIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    actionsIsSet_ = false;
}

CreateFilePushPermissionResponse::~CreateFilePushPermissionResponse() = default;

void CreateFilePushPermissionResponse::validate()
{
}

web::json::value CreateFilePushPermissionResponse::toJson() const
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
bool CreateFilePushPermissionResponse::fromJson(const web::json::value& val)
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
            std::vector<RepositoryProtectedActionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


int32_t CreateFilePushPermissionResponse::getId() const
{
    return id_;
}

void CreateFilePushPermissionResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateFilePushPermissionResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateFilePushPermissionResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateFilePushPermissionResponse::getPath() const
{
    return path_;
}

void CreateFilePushPermissionResponse::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool CreateFilePushPermissionResponse::pathIsSet() const
{
    return pathIsSet_;
}

void CreateFilePushPermissionResponse::unsetpath()
{
    pathIsSet_ = false;
}

std::vector<RepositoryProtectedActionDto>& CreateFilePushPermissionResponse::getActions()
{
    return actions_;
}

void CreateFilePushPermissionResponse::setActions(const std::vector<RepositoryProtectedActionDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CreateFilePushPermissionResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void CreateFilePushPermissionResponse::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


