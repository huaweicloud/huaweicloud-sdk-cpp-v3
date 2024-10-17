

#include "huaweicloud/dbss/v1/model/DeleteInstanceDemandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteInstanceDemandRequest::DeleteInstanceDemandRequest()
{
    id_ = "";
    idIsSet_ = false;
    deletePublicip_ = false;
    deletePublicipIsSet_ = false;
    deleteVolume_ = false;
    deleteVolumeIsSet_ = false;
}

DeleteInstanceDemandRequest::~DeleteInstanceDemandRequest() = default;

void DeleteInstanceDemandRequest::validate()
{
}

web::json::value DeleteInstanceDemandRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(deletePublicipIsSet_) {
        val[utility::conversions::to_string_t("delete_publicip")] = ModelBase::toJson(deletePublicip_);
    }
    if(deleteVolumeIsSet_) {
        val[utility::conversions::to_string_t("delete_volume")] = ModelBase::toJson(deleteVolume_);
    }

    return val;
}
bool DeleteInstanceDemandRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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
    return ok;
}


std::string DeleteInstanceDemandRequest::getId() const
{
    return id_;
}

void DeleteInstanceDemandRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteInstanceDemandRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteInstanceDemandRequest::unsetid()
{
    idIsSet_ = false;
}

bool DeleteInstanceDemandRequest::isDeletePublicip() const
{
    return deletePublicip_;
}

void DeleteInstanceDemandRequest::setDeletePublicip(bool value)
{
    deletePublicip_ = value;
    deletePublicipIsSet_ = true;
}

bool DeleteInstanceDemandRequest::deletePublicipIsSet() const
{
    return deletePublicipIsSet_;
}

void DeleteInstanceDemandRequest::unsetdeletePublicip()
{
    deletePublicipIsSet_ = false;
}

bool DeleteInstanceDemandRequest::isDeleteVolume() const
{
    return deleteVolume_;
}

void DeleteInstanceDemandRequest::setDeleteVolume(bool value)
{
    deleteVolume_ = value;
    deleteVolumeIsSet_ = true;
}

bool DeleteInstanceDemandRequest::deleteVolumeIsSet() const
{
    return deleteVolumeIsSet_;
}

void DeleteInstanceDemandRequest::unsetdeleteVolume()
{
    deleteVolumeIsSet_ = false;
}

}
}
}
}
}


