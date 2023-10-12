

#include "huaweicloud/ecs/v2/model/DeleteServersRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteServersRequestBody::DeleteServersRequestBody()
{
    deletePublicip_ = false;
    deletePublicipIsSet_ = false;
    deleteVolume_ = false;
    deleteVolumeIsSet_ = false;
    serversIsSet_ = false;
}

DeleteServersRequestBody::~DeleteServersRequestBody() = default;

void DeleteServersRequestBody::validate()
{
}

web::json::value DeleteServersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deletePublicipIsSet_) {
        val[utility::conversions::to_string_t("delete_publicip")] = ModelBase::toJson(deletePublicip_);
    }
    if(deleteVolumeIsSet_) {
        val[utility::conversions::to_string_t("delete_volume")] = ModelBase::toJson(deleteVolume_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }

    return val;
}
bool DeleteServersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_publicip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletePublicip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_volume"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    return ok;
}


bool DeleteServersRequestBody::isDeletePublicip() const
{
    return deletePublicip_;
}

void DeleteServersRequestBody::setDeletePublicip(bool value)
{
    deletePublicip_ = value;
    deletePublicipIsSet_ = true;
}

bool DeleteServersRequestBody::deletePublicipIsSet() const
{
    return deletePublicipIsSet_;
}

void DeleteServersRequestBody::unsetdeletePublicip()
{
    deletePublicipIsSet_ = false;
}

bool DeleteServersRequestBody::isDeleteVolume() const
{
    return deleteVolume_;
}

void DeleteServersRequestBody::setDeleteVolume(bool value)
{
    deleteVolume_ = value;
    deleteVolumeIsSet_ = true;
}

bool DeleteServersRequestBody::deleteVolumeIsSet() const
{
    return deleteVolumeIsSet_;
}

void DeleteServersRequestBody::unsetdeleteVolume()
{
    deleteVolumeIsSet_ = false;
}

std::vector<ServerId>& DeleteServersRequestBody::getServers()
{
    return servers_;
}

void DeleteServersRequestBody::setServers(const std::vector<ServerId>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool DeleteServersRequestBody::serversIsSet() const
{
    return serversIsSet_;
}

void DeleteServersRequestBody::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}


