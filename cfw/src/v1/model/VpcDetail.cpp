

#include "huaweicloud/cfw/v1/model/VpcDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




VpcDetail::VpcDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

VpcDetail::~VpcDetail() = default;

void VpcDetail::validate()
{
}

web::json::value VpcDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool VpcDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
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

std::string VpcDetail::getId() const
{
    return id_;
}

void VpcDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool VpcDetail::idIsSet() const
{
    return idIsSet_;
}

void VpcDetail::unsetid()
{
    idIsSet_ = false;
}

std::string VpcDetail::getName() const
{
    return name_;
}

void VpcDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VpcDetail::nameIsSet() const
{
    return nameIsSet_;
}

void VpcDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string VpcDetail::getCidr() const
{
    return cidr_;
}

void VpcDetail::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool VpcDetail::cidrIsSet() const
{
    return cidrIsSet_;
}

void VpcDetail::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string VpcDetail::getStatus() const
{
    return status_;
}

void VpcDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool VpcDetail::statusIsSet() const
{
    return statusIsSet_;
}

void VpcDetail::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


