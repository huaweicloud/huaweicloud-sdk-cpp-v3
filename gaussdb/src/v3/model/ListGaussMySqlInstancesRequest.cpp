

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlInstancesRequest::ListGaussMySqlInstancesRequest()
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

ListGaussMySqlInstancesRequest::~ListGaussMySqlInstancesRequest() = default;

void ListGaussMySqlInstancesRequest::validate()
{
}

web::json::value ListGaussMySqlInstancesRequest::toJson() const
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
bool ListGaussMySqlInstancesRequest::fromJson(const web::json::value& val)
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


std::string ListGaussMySqlInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListGaussMySqlInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getId() const
{
    return id_;
}

void ListGaussMySqlInstancesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getName() const
{
    return name_;
}

void ListGaussMySqlInstancesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getType() const
{
    return type_;
}

void ListGaussMySqlInstancesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListGaussMySqlInstancesRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ListGaussMySqlInstancesRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getVpcId() const
{
    return vpcId_;
}

void ListGaussMySqlInstancesRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getSubnetId() const
{
    return subnetId_;
}

void ListGaussMySqlInstancesRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getPrivateIp() const
{
    return privateIp_;
}

void ListGaussMySqlInstancesRequest::setPrivateIp(const std::string& value)
{
    privateIp_ = value;
    privateIpIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::privateIpIsSet() const
{
    return privateIpIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetprivateIp()
{
    privateIpIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getReadonlyPrivateIp() const
{
    return readonlyPrivateIp_;
}

void ListGaussMySqlInstancesRequest::setReadonlyPrivateIp(const std::string& value)
{
    readonlyPrivateIp_ = value;
    readonlyPrivateIpIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::readonlyPrivateIpIsSet() const
{
    return readonlyPrivateIpIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetreadonlyPrivateIp()
{
    readonlyPrivateIpIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getProxyIp() const
{
    return proxyIp_;
}

void ListGaussMySqlInstancesRequest::setProxyIp(const std::string& value)
{
    proxyIp_ = value;
    proxyIpIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::proxyIpIsSet() const
{
    return proxyIpIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetproxyIp()
{
    proxyIpIsSet_ = false;
}

int32_t ListGaussMySqlInstancesRequest::getOffset() const
{
    return offset_;
}

void ListGaussMySqlInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGaussMySqlInstancesRequest::getLimit() const
{
    return limit_;
}

void ListGaussMySqlInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGaussMySqlInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGaussMySqlInstancesRequest::getTags() const
{
    return tags_;
}

void ListGaussMySqlInstancesRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListGaussMySqlInstancesRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListGaussMySqlInstancesRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


