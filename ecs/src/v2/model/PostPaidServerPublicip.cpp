

#include "huaweicloud/ecs/v2/model/PostPaidServerPublicip.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerPublicip::PostPaidServerPublicip()
{
    id_ = "";
    idIsSet_ = false;
    eipIsSet_ = false;
    deleteOnTermination_ = false;
    deleteOnTerminationIsSet_ = false;
}

PostPaidServerPublicip::~PostPaidServerPublicip() = default;

void PostPaidServerPublicip::validate()
{
}

web::json::value PostPaidServerPublicip::toJson() const
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

bool PostPaidServerPublicip::fromJson(const web::json::value& val)
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
            PostPaidServerEip refVal;
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


std::string PostPaidServerPublicip::getId() const
{
    return id_;
}

void PostPaidServerPublicip::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PostPaidServerPublicip::idIsSet() const
{
    return idIsSet_;
}

void PostPaidServerPublicip::unsetid()
{
    idIsSet_ = false;
}

PostPaidServerEip PostPaidServerPublicip::getEip() const
{
    return eip_;
}

void PostPaidServerPublicip::setEip(const PostPaidServerEip& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool PostPaidServerPublicip::eipIsSet() const
{
    return eipIsSet_;
}

void PostPaidServerPublicip::unseteip()
{
    eipIsSet_ = false;
}

bool PostPaidServerPublicip::isDeleteOnTermination() const
{
    return deleteOnTermination_;
}

void PostPaidServerPublicip::setDeleteOnTermination(bool value)
{
    deleteOnTermination_ = value;
    deleteOnTerminationIsSet_ = true;
}

bool PostPaidServerPublicip::deleteOnTerminationIsSet() const
{
    return deleteOnTerminationIsSet_;
}

void PostPaidServerPublicip::unsetdeleteOnTermination()
{
    deleteOnTerminationIsSet_ = false;
}

}
}
}
}
}


