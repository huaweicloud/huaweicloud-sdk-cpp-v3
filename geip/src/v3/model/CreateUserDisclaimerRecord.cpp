

#include "huaweicloud/geip/v3/model/CreateUserDisclaimerRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateUserDisclaimerRecord::CreateUserDisclaimerRecord()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

CreateUserDisclaimerRecord::~CreateUserDisclaimerRecord() = default;

void CreateUserDisclaimerRecord::validate()
{
}

web::json::value CreateUserDisclaimerRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool CreateUserDisclaimerRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string CreateUserDisclaimerRecord::getDomainId() const
{
    return domainId_;
}

void CreateUserDisclaimerRecord::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateUserDisclaimerRecord::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateUserDisclaimerRecord::unsetdomainId()
{
    domainIdIsSet_ = false;
}

utility::datetime CreateUserDisclaimerRecord::getCreatedAt() const
{
    return createdAt_;
}

void CreateUserDisclaimerRecord::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateUserDisclaimerRecord::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateUserDisclaimerRecord::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime CreateUserDisclaimerRecord::getUpdatedAt() const
{
    return updatedAt_;
}

void CreateUserDisclaimerRecord::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CreateUserDisclaimerRecord::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CreateUserDisclaimerRecord::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


