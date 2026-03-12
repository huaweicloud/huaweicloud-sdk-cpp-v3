

#include "huaweicloud/gaussdbforopengauss/v3/model/CollectedWdrSnapshotInfoResult_obs_bucket.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CollectedWdrSnapshotInfoResult_obs_bucket::CollectedWdrSnapshotInfoResult_obs_bucket()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

CollectedWdrSnapshotInfoResult_obs_bucket::~CollectedWdrSnapshotInfoResult_obs_bucket() = default;

void CollectedWdrSnapshotInfoResult_obs_bucket::validate()
{
}

web::json::value CollectedWdrSnapshotInfoResult_obs_bucket::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool CollectedWdrSnapshotInfoResult_obs_bucket::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string CollectedWdrSnapshotInfoResult_obs_bucket::getName() const
{
    return name_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult_obs_bucket::nameIsSet() const
{
    return nameIsSet_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::unsetname()
{
    nameIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult_obs_bucket::getType() const
{
    return type_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult_obs_bucket::typeIsSet() const
{
    return typeIsSet_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::unsettype()
{
    typeIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult_obs_bucket::getUrl() const
{
    return url_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult_obs_bucket::urlIsSet() const
{
    return urlIsSet_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::unseturl()
{
    urlIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult_obs_bucket::getPort() const
{
    return port_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult_obs_bucket::portIsSet() const
{
    return portIsSet_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::unsetport()
{
    portIsSet_ = false;
}

std::string CollectedWdrSnapshotInfoResult_obs_bucket::getDomainId() const
{
    return domainId_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CollectedWdrSnapshotInfoResult_obs_bucket::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CollectedWdrSnapshotInfoResult_obs_bucket::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


