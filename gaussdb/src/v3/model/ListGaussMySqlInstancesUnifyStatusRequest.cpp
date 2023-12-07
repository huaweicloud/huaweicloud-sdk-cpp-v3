

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlInstancesUnifyStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlInstancesUnifyStatusRequest::ListGaussMySqlInstancesUnifyStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    privateIp_ = "";
    privateIpIsSet_ = false;
    readonlyPrivateIp_ = "";
    readonlyPrivateIpIsSet_ = false;
    proxyIp_ = "";
    proxyIpIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
}

ListGaussMySqlInstancesUnifyStatusRequest::~ListGaussMySqlInstancesUnifyStatusRequest() = default;

void ListGaussMySqlInstancesUnifyStatusRequest::validate()
{
}

web::json::value ListGaussMySqlInstancesUnifyStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(privateIpIsSet_) {
        val[utility::conversions::to_string_t("private_ip")] = ModelBase::toJson(privateIp_);
    }
    if(readonlyPrivateIpIsSet_) {
        val[utility::conversions::to_string_t("readonly_private_ip")] = ModelBase::toJson(readonlyPrivateIp_);
    }
    if(proxyIpIsSet_) {
        val[utility::conversions::to_string_t("proxy_ip")] = ModelBase::toJson(proxyIp_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListGaussMySqlInstancesUnifyStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_private_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_private_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyPrivateIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ListGaussMySqlInstancesUnifyStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getId() const
{
    return id_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::idIsSet() const
{
    return idIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getName() const
{
    return name_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getType() const
{
    return type_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getVpcId() const
{
    return vpcId_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getSubnetId() const
{
    return subnetId_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getPrivateIp() const
{
    return privateIp_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setPrivateIp(const std::string& value)
{
    privateIp_ = value;
    privateIpIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::privateIpIsSet() const
{
    return privateIpIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetprivateIp()
{
    privateIpIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getReadonlyPrivateIp() const
{
    return readonlyPrivateIp_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setReadonlyPrivateIp(const std::string& value)
{
    readonlyPrivateIp_ = value;
    readonlyPrivateIpIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::readonlyPrivateIpIsSet() const
{
    return readonlyPrivateIpIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetreadonlyPrivateIp()
{
    readonlyPrivateIpIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getProxyIp() const
{
    return proxyIp_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setProxyIp(const std::string& value)
{
    proxyIp_ = value;
    proxyIpIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::proxyIpIsSet() const
{
    return proxyIpIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetproxyIp()
{
    proxyIpIsSet_ = false;
}

int32_t ListGaussMySqlInstancesUnifyStatusRequest::getOffset() const
{
    return offset_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGaussMySqlInstancesUnifyStatusRequest::getLimit() const
{
    return limit_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGaussMySqlInstancesUnifyStatusRequest::getTags() const
{
    return tags_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListGaussMySqlInstancesUnifyStatusRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListGaussMySqlInstancesUnifyStatusRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


