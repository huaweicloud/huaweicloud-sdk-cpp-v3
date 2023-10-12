

#include "huaweicloud/ecs/v2/model/PrePaidServerPublicip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerPublicip::PrePaidServerPublicip()
{
    id_ = "";
    idIsSet_ = false;
    eipIsSet_ = false;
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
}

PrePaidServerPublicip::~PrePaidServerPublicip() = default;

void PrePaidServerPublicip::validate()
{
}

web::json::value PrePaidServerPublicip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(deleteOnTerminationIsSet_) {
        val[utility::conversions::to_string_t("delete_on_termination")] = ModelBase::toJson(deleteOnTermination_);
    }

    return val;
}
bool PrePaidServerPublicip::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            PrePaidServerEip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_on_termination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_on_termination"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteOnTermination(refVal);
        }
    }
    return ok;
}


std::string PrePaidServerPublicip::getId() const
{
    return id_;
}

void PrePaidServerPublicip::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PrePaidServerPublicip::idIsSet() const
{
    return idIsSet_;
}

void PrePaidServerPublicip::unsetid()
{
    idIsSet_ = false;
}

PrePaidServerEip PrePaidServerPublicip::getEip() const
{
    return eip_;
}

void PrePaidServerPublicip::setEip(const PrePaidServerEip& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool PrePaidServerPublicip::eipIsSet() const
{
    return eipIsSet_;
}

void PrePaidServerPublicip::unseteip()
{
    eipIsSet_ = false;
}

bool PrePaidServerPublicip::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void PrePaidServerPublicip::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool PrePaidServerPublicip::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void PrePaidServerPublicip::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

}
}
}
}
}


