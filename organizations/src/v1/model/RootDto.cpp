

#include "huaweicloud/organizations/v1/model/RootDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




RootDto::RootDto()
{
    id_ = "";
    idIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    policyTypesIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
}

RootDto::~RootDto() = default;

void RootDto::validate()
{
}

web::json::value RootDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(policyTypesIsSet_) {
        val[utility::conversions::to_string_t("policy_types")] = ModelBase::toJson(policyTypes_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool RootDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("policy_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_types"));
        if(!fieldValue.is_null())
        {
            std::vector<PolicyTypeSummaryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string RootDto::getId() const
{
    return id_;
}

void RootDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RootDto::idIsSet() const
{
    return idIsSet_;
}

void RootDto::unsetid()
{
    idIsSet_ = false;
}

std::string RootDto::getUrn() const
{
    return urn_;
}

void RootDto::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool RootDto::urnIsSet() const
{
    return urnIsSet_;
}

void RootDto::unseturn()
{
    urnIsSet_ = false;
}

std::string RootDto::getName() const
{
    return name_;
}

void RootDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RootDto::nameIsSet() const
{
    return nameIsSet_;
}

void RootDto::unsetname()
{
    nameIsSet_ = false;
}

std::vector<PolicyTypeSummaryDto>& RootDto::getPolicyTypes()
{
    return policyTypes_;
}

void RootDto::setPolicyTypes(const std::vector<PolicyTypeSummaryDto>& value)
{
    policyTypes_ = value;
    policyTypesIsSet_ = true;
}

bool RootDto::policyTypesIsSet() const
{
    return policyTypesIsSet_;
}

void RootDto::unsetpolicyTypes()
{
    policyTypesIsSet_ = false;
}

utility::datetime RootDto::getCreatedAt() const
{
    return createdAt_;
}

void RootDto::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RootDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RootDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


