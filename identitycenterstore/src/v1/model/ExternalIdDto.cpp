

#include "huaweicloud/identitycenterstore/v1/model/ExternalIdDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ExternalIdDto::ExternalIdDto()
{
    id_ = "";
    idIsSet_ = false;
    issuer_ = "";
    issuerIsSet_ = false;
}

ExternalIdDto::~ExternalIdDto() = default;

void ExternalIdDto::validate()
{
}

web::json::value ExternalIdDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(issuerIsSet_) {
        val[utility::conversions::to_string_t("issuer")] = ModelBase::toJson(issuer_);
    }

    return val;
}
bool ExternalIdDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issuer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuer(refVal);
        }
    }
    return ok;
}


std::string ExternalIdDto::getId() const
{
    return id_;
}

void ExternalIdDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExternalIdDto::idIsSet() const
{
    return idIsSet_;
}

void ExternalIdDto::unsetid()
{
    idIsSet_ = false;
}

std::string ExternalIdDto::getIssuer() const
{
    return issuer_;
}

void ExternalIdDto::setIssuer(const std::string& value)
{
    issuer_ = value;
    issuerIsSet_ = true;
}

bool ExternalIdDto::issuerIsSet() const
{
    return issuerIsSet_;
}

void ExternalIdDto::unsetissuer()
{
    issuerIsSet_ = false;
}

}
}
}
}
}


