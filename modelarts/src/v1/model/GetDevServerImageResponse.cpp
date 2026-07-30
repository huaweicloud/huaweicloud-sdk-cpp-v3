

#include "huaweicloud/modelarts/v1/model/GetDevServerImageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerImageResponse::GetDevServerImageResponse()
{
    arch_ = "";
    archIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

GetDevServerImageResponse::~GetDevServerImageResponse() = default;

void GetDevServerImageResponse::validate()
{
}

web::json::value GetDevServerImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool GetDevServerImageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
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
    return ok;
}


std::string GetDevServerImageResponse::getArch() const
{
    return arch_;
}

void GetDevServerImageResponse::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool GetDevServerImageResponse::archIsSet() const
{
    return archIsSet_;
}

void GetDevServerImageResponse::unsetarch()
{
    archIsSet_ = false;
}

std::string GetDevServerImageResponse::getImageId() const
{
    return imageId_;
}

void GetDevServerImageResponse::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool GetDevServerImageResponse::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void GetDevServerImageResponse::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string GetDevServerImageResponse::getName() const
{
    return name_;
}

void GetDevServerImageResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetDevServerImageResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GetDevServerImageResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string GetDevServerImageResponse::getServerType() const
{
    return serverType_;
}

void GetDevServerImageResponse::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool GetDevServerImageResponse::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void GetDevServerImageResponse::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::string GetDevServerImageResponse::getStatus() const
{
    return status_;
}

void GetDevServerImageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetDevServerImageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetDevServerImageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


