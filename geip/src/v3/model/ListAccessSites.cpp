

#include "huaweicloud/geip/v3/model/ListAccessSites.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListAccessSites::ListAccessSites()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    proxyRegion_ = "";
    proxyRegionIsSet_ = false;
    iecAzCode_ = "";
    iecAzCodeIsSet_ = false;
    enName_ = "";
    enNameIsSet_ = false;
    cnName_ = "";
    cnNameIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

ListAccessSites::~ListAccessSites() = default;

void ListAccessSites::validate()
{
}

web::json::value ListAccessSites::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(proxyRegionIsSet_) {
        val[utility::conversions::to_string_t("proxy_region")] = ModelBase::toJson(proxyRegion_);
    }
    if(iecAzCodeIsSet_) {
        val[utility::conversions::to_string_t("iec_az_code")] = ModelBase::toJson(iecAzCode_);
    }
    if(enNameIsSet_) {
        val[utility::conversions::to_string_t("en_name")] = ModelBase::toJson(enName_);
    }
    if(cnNameIsSet_) {
        val[utility::conversions::to_string_t("cn_name")] = ModelBase::toJson(cnName_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ListAccessSites::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("proxy_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iec_az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iec_az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIecAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("en_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cn_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cn_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCnName(refVal);
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


std::string ListAccessSites::getId() const
{
    return id_;
}

void ListAccessSites::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAccessSites::idIsSet() const
{
    return idIsSet_;
}

void ListAccessSites::unsetid()
{
    idIsSet_ = false;
}

std::string ListAccessSites::getName() const
{
    return name_;
}

void ListAccessSites::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAccessSites::nameIsSet() const
{
    return nameIsSet_;
}

void ListAccessSites::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAccessSites::getProxyRegion() const
{
    return proxyRegion_;
}

void ListAccessSites::setProxyRegion(const std::string& value)
{
    proxyRegion_ = value;
    proxyRegionIsSet_ = true;
}

bool ListAccessSites::proxyRegionIsSet() const
{
    return proxyRegionIsSet_;
}

void ListAccessSites::unsetproxyRegion()
{
    proxyRegionIsSet_ = false;
}

std::string ListAccessSites::getIecAzCode() const
{
    return iecAzCode_;
}

void ListAccessSites::setIecAzCode(const std::string& value)
{
    iecAzCode_ = value;
    iecAzCodeIsSet_ = true;
}

bool ListAccessSites::iecAzCodeIsSet() const
{
    return iecAzCodeIsSet_;
}

void ListAccessSites::unsetiecAzCode()
{
    iecAzCodeIsSet_ = false;
}

std::string ListAccessSites::getEnName() const
{
    return enName_;
}

void ListAccessSites::setEnName(const std::string& value)
{
    enName_ = value;
    enNameIsSet_ = true;
}

bool ListAccessSites::enNameIsSet() const
{
    return enNameIsSet_;
}

void ListAccessSites::unsetenName()
{
    enNameIsSet_ = false;
}

std::string ListAccessSites::getCnName() const
{
    return cnName_;
}

void ListAccessSites::setCnName(const std::string& value)
{
    cnName_ = value;
    cnNameIsSet_ = true;
}

bool ListAccessSites::cnNameIsSet() const
{
    return cnNameIsSet_;
}

void ListAccessSites::unsetcnName()
{
    cnNameIsSet_ = false;
}

utility::datetime ListAccessSites::getCreatedAt() const
{
    return createdAt_;
}

void ListAccessSites::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListAccessSites::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListAccessSites::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ListAccessSites::getUpdatedAt() const
{
    return updatedAt_;
}

void ListAccessSites::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListAccessSites::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListAccessSites::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


