

#include "huaweicloud/geip/v3/model/ShowUserDisclaimerRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowUserDisclaimerRecord::ShowUserDisclaimerRecord()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

ShowUserDisclaimerRecord::~ShowUserDisclaimerRecord() = default;

void ShowUserDisclaimerRecord::validate()
{
}

web::json::value ShowUserDisclaimerRecord::toJson() const
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
bool ShowUserDisclaimerRecord::fromJson(const web::json::value& val)
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


std::string ShowUserDisclaimerRecord::getDomainId() const
{
    return domainId_;
}

void ShowUserDisclaimerRecord::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowUserDisclaimerRecord::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowUserDisclaimerRecord::unsetdomainId()
{
    domainIdIsSet_ = false;
}

utility::datetime ShowUserDisclaimerRecord::getCreatedAt() const
{
    return createdAt_;
}

void ShowUserDisclaimerRecord::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowUserDisclaimerRecord::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowUserDisclaimerRecord::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ShowUserDisclaimerRecord::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowUserDisclaimerRecord::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowUserDisclaimerRecord::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowUserDisclaimerRecord::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


