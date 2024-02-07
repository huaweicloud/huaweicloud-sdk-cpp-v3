

#include "huaweicloud/geip/v3/model/ListGeipPools.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGeipPools::ListGeipPools()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    enName_ = "";
    enNameIsSet_ = false;
    cnName_ = "";
    cnNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    allowedBandwidthTypesIsSet_ = false;
}

ListGeipPools::~ListGeipPools() = default;

void ListGeipPools::validate()
{
}

web::json::value ListGeipPools::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enNameIsSet_) {
        val[utility::conversions::to_string_t("en_name")] = ModelBase::toJson(enName_);
    }
    if(cnNameIsSet_) {
        val[utility::conversions::to_string_t("cn_name")] = ModelBase::toJson(cnName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(allowedBandwidthTypesIsSet_) {
        val[utility::conversions::to_string_t("allowed_bandwidth_types")] = ModelBase::toJson(allowedBandwidthTypes_);
    }

    return val;
}
bool ListGeipPools::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("allowed_bandwidth_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_bandwidth_types"));
        if(!fieldValue.is_null())
        {
            std::vector<AllowedBandwidthTypes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedBandwidthTypes(refVal);
        }
    }
    return ok;
}


std::string ListGeipPools::getId() const
{
    return id_;
}

void ListGeipPools::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListGeipPools::idIsSet() const
{
    return idIsSet_;
}

void ListGeipPools::unsetid()
{
    idIsSet_ = false;
}

std::string ListGeipPools::getName() const
{
    return name_;
}

void ListGeipPools::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGeipPools::nameIsSet() const
{
    return nameIsSet_;
}

void ListGeipPools::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGeipPools::getEnName() const
{
    return enName_;
}

void ListGeipPools::setEnName(const std::string& value)
{
    enName_ = value;
    enNameIsSet_ = true;
}

bool ListGeipPools::enNameIsSet() const
{
    return enNameIsSet_;
}

void ListGeipPools::unsetenName()
{
    enNameIsSet_ = false;
}

std::string ListGeipPools::getCnName() const
{
    return cnName_;
}

void ListGeipPools::setCnName(const std::string& value)
{
    cnName_ = value;
    cnNameIsSet_ = true;
}

bool ListGeipPools::cnNameIsSet() const
{
    return cnNameIsSet_;
}

void ListGeipPools::unsetcnName()
{
    cnNameIsSet_ = false;
}

std::string ListGeipPools::getStatus() const
{
    return status_;
}

void ListGeipPools::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListGeipPools::statusIsSet() const
{
    return statusIsSet_;
}

void ListGeipPools::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListGeipPools::getIsp() const
{
    return isp_;
}

void ListGeipPools::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListGeipPools::ispIsSet() const
{
    return ispIsSet_;
}

void ListGeipPools::unsetisp()
{
    ispIsSet_ = false;
}

int32_t ListGeipPools::getIpVersion() const
{
    return ipVersion_;
}

void ListGeipPools::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListGeipPools::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListGeipPools::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string ListGeipPools::getAccessSite() const
{
    return accessSite_;
}

void ListGeipPools::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListGeipPools::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListGeipPools::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::string ListGeipPools::getType() const
{
    return type_;
}

void ListGeipPools::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListGeipPools::typeIsSet() const
{
    return typeIsSet_;
}

void ListGeipPools::unsettype()
{
    typeIsSet_ = false;
}

utility::datetime ListGeipPools::getCreatedAt() const
{
    return createdAt_;
}

void ListGeipPools::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListGeipPools::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListGeipPools::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ListGeipPools::getUpdatedAt() const
{
    return updatedAt_;
}

void ListGeipPools::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListGeipPools::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListGeipPools::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::vector<AllowedBandwidthTypes>& ListGeipPools::getAllowedBandwidthTypes()
{
    return allowedBandwidthTypes_;
}

void ListGeipPools::setAllowedBandwidthTypes(const std::vector<AllowedBandwidthTypes>& value)
{
    allowedBandwidthTypes_ = value;
    allowedBandwidthTypesIsSet_ = true;
}

bool ListGeipPools::allowedBandwidthTypesIsSet() const
{
    return allowedBandwidthTypesIsSet_;
}

void ListGeipPools::unsetallowedBandwidthTypes()
{
    allowedBandwidthTypesIsSet_ = false;
}

}
}
}
}
}


