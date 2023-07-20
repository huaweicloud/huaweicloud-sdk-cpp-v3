

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstancesDetailsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstancesDetailsRequest::ListInstancesDetailsRequest()
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
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    tagsIsSet_ = false;
}

ListInstancesDetailsRequest::~ListInstancesDetailsRequest() = default;

void ListInstancesDetailsRequest::validate()
{
}

web::json::value ListInstancesDetailsRequest::toJson() const
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

bool ListInstancesDetailsRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string ListInstancesDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInstancesDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInstancesDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInstancesDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListInstancesDetailsRequest::getId() const
{
    return id_;
}

void ListInstancesDetailsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInstancesDetailsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInstancesDetailsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInstancesDetailsRequest::getName() const
{
    return name_;
}

void ListInstancesDetailsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstancesDetailsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstancesDetailsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInstancesDetailsRequest::getType() const
{
    return type_;
}

void ListInstancesDetailsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInstancesDetailsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListInstancesDetailsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListInstancesDetailsRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ListInstancesDetailsRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ListInstancesDetailsRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ListInstancesDetailsRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ListInstancesDetailsRequest::getVpcId() const
{
    return vpcId_;
}

void ListInstancesDetailsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListInstancesDetailsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListInstancesDetailsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListInstancesDetailsRequest::getSubnetId() const
{
    return subnetId_;
}

void ListInstancesDetailsRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListInstancesDetailsRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListInstancesDetailsRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

int32_t ListInstancesDetailsRequest::getOffset() const
{
    return offset_;
}

void ListInstancesDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstancesDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstancesDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstancesDetailsRequest::getLimit() const
{
    return limit_;
}

void ListInstancesDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstancesDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstancesDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& ListInstancesDetailsRequest::getTags()
{
    return tags_;
}

void ListInstancesDetailsRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInstancesDetailsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInstancesDetailsRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


