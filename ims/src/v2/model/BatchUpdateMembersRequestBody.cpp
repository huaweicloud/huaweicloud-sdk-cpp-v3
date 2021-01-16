

#include "huaweicloud/ims/v2/model/BatchUpdateMembersRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchUpdateMembersRequestBody::BatchUpdateMembersRequestBody()
{
    imagesIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

BatchUpdateMembersRequestBody::~BatchUpdateMembersRequestBody() = default;

void BatchUpdateMembersRequestBody::validate()
{
}

web::json::value BatchUpdateMembersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imagesIsSet_) {
        val[utility::conversions::to_string_t("images")] = ModelBase::toJson(images_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool BatchUpdateMembersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("images"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("images"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchUpdateMembersRequestBody::getImages()
{
    return images_;
}

void BatchUpdateMembersRequestBody::setImages(const std::vector<std::string>& value)
{
    images_ = value;
    imagesIsSet_ = true;
}

bool BatchUpdateMembersRequestBody::imagesIsSet() const
{
    return imagesIsSet_;
}

void BatchUpdateMembersRequestBody::unsetimages()
{
    imagesIsSet_ = false;
}

std::string BatchUpdateMembersRequestBody::getProjectId() const
{
    return projectId_;
}

void BatchUpdateMembersRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchUpdateMembersRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchUpdateMembersRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BatchUpdateMembersRequestBody::getStatus() const
{
    return status_;
}

void BatchUpdateMembersRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdateMembersRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdateMembersRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchUpdateMembersRequestBody::getVaultId() const
{
    return vaultId_;
}

void BatchUpdateMembersRequestBody::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool BatchUpdateMembersRequestBody::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void BatchUpdateMembersRequestBody::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


