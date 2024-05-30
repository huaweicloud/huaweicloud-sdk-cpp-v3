

#include "huaweicloud/organizations/v1/model/AccountDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




AccountDto::AccountDto()
{
    id_ = "";
    idIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    joinMethod_ = "";
    joinMethodIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    joinedAt_ = utility::datetime();
    joinedAtIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

AccountDto::~AccountDto() = default;

void AccountDto::validate()
{
}

web::json::value AccountDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(joinMethodIsSet_) {
        val[utility::conversions::to_string_t("join_method")] = ModelBase::toJson(joinMethod_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(joinedAtIsSet_) {
        val[utility::conversions::to_string_t("joined_at")] = ModelBase::toJson(joinedAt_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool AccountDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("join_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("join_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoinMethod(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("joined_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("joined_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoinedAt(refVal);
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
    return ok;
}


std::string AccountDto::getId() const
{
    return id_;
}

void AccountDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AccountDto::idIsSet() const
{
    return idIsSet_;
}

void AccountDto::unsetid()
{
    idIsSet_ = false;
}

std::string AccountDto::getUrn() const
{
    return urn_;
}

void AccountDto::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool AccountDto::urnIsSet() const
{
    return urnIsSet_;
}

void AccountDto::unseturn()
{
    urnIsSet_ = false;
}

std::string AccountDto::getJoinMethod() const
{
    return joinMethod_;
}

void AccountDto::setJoinMethod(const std::string& value)
{
    joinMethod_ = value;
    joinMethodIsSet_ = true;
}

bool AccountDto::joinMethodIsSet() const
{
    return joinMethodIsSet_;
}

void AccountDto::unsetjoinMethod()
{
    joinMethodIsSet_ = false;
}

std::string AccountDto::getStatus() const
{
    return status_;
}

void AccountDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AccountDto::statusIsSet() const
{
    return statusIsSet_;
}

void AccountDto::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime AccountDto::getJoinedAt() const
{
    return joinedAt_;
}

void AccountDto::setJoinedAt(const utility::datetime& value)
{
    joinedAt_ = value;
    joinedAtIsSet_ = true;
}

bool AccountDto::joinedAtIsSet() const
{
    return joinedAtIsSet_;
}

void AccountDto::unsetjoinedAt()
{
    joinedAtIsSet_ = false;
}

std::string AccountDto::getName() const
{
    return name_;
}

void AccountDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AccountDto::nameIsSet() const
{
    return nameIsSet_;
}

void AccountDto::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


