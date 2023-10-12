

#include "huaweicloud/evs/v2/model/CreateVolumeTransferDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateVolumeTransferDetail::CreateVolumeTransferDetail()
{
    authKey_ = "";
    authKeyIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    linksIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

CreateVolumeTransferDetail::~CreateVolumeTransferDetail() = default;

void CreateVolumeTransferDetail::validate()
{
}

web::json::value CreateVolumeTransferDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authKeyIsSet_) {
        val[utility::conversions::to_string_t("auth_key")] = ModelBase::toJson(authKey_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool CreateVolumeTransferDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auth_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<Link> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}


std::string CreateVolumeTransferDetail::getAuthKey() const
{
    return authKey_;
}

void CreateVolumeTransferDetail::setAuthKey(const std::string& value)
{
    authKey_ = value;
    authKeyIsSet_ = true;
}

bool CreateVolumeTransferDetail::authKeyIsSet() const
{
    return authKeyIsSet_;
}

void CreateVolumeTransferDetail::unsetauthKey()
{
    authKeyIsSet_ = false;
}

std::string CreateVolumeTransferDetail::getCreatedAt() const
{
    return createdAt_;
}

void CreateVolumeTransferDetail::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateVolumeTransferDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateVolumeTransferDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateVolumeTransferDetail::getId() const
{
    return id_;
}

void CreateVolumeTransferDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateVolumeTransferDetail::idIsSet() const
{
    return idIsSet_;
}

void CreateVolumeTransferDetail::unsetid()
{
    idIsSet_ = false;
}

std::vector<Link>& CreateVolumeTransferDetail::getLinks()
{
    return links_;
}

void CreateVolumeTransferDetail::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool CreateVolumeTransferDetail::linksIsSet() const
{
    return linksIsSet_;
}

void CreateVolumeTransferDetail::unsetlinks()
{
    linksIsSet_ = false;
}

std::string CreateVolumeTransferDetail::getName() const
{
    return name_;
}

void CreateVolumeTransferDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVolumeTransferDetail::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVolumeTransferDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateVolumeTransferDetail::getVolumeId() const
{
    return volumeId_;
}

void CreateVolumeTransferDetail::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CreateVolumeTransferDetail::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CreateVolumeTransferDetail::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


