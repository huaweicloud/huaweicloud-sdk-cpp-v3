

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstanceDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstanceDetailsRequest::ListInstanceDetailsRequest()
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
    chargeMode_ = "";
    chargeModeIsSet_ = false;
}

ListInstanceDetailsRequest::~ListInstanceDetailsRequest() = default;

void ListInstanceDetailsRequest::validate()
{
}

web::json::value ListInstanceDetailsRequest::toJson() const
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
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }

    return val;
}
bool ListInstanceDetailsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    return ok;
}


std::string ListInstanceDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInstanceDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInstanceDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInstanceDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListInstanceDetailsRequest::getId() const
{
    return id_;
}

void ListInstanceDetailsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInstanceDetailsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInstanceDetailsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInstanceDetailsRequest::getName() const
{
    return name_;
}

void ListInstanceDetailsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstanceDetailsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstanceDetailsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInstanceDetailsRequest::getType() const
{
    return type_;
}

void ListInstanceDetailsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInstanceDetailsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListInstanceDetailsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListInstanceDetailsRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ListInstanceDetailsRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ListInstanceDetailsRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ListInstanceDetailsRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ListInstanceDetailsRequest::getVpcId() const
{
    return vpcId_;
}

void ListInstanceDetailsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListInstanceDetailsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListInstanceDetailsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListInstanceDetailsRequest::getSubnetId() const
{
    return subnetId_;
}

void ListInstanceDetailsRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListInstanceDetailsRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListInstanceDetailsRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

int32_t ListInstanceDetailsRequest::getOffset() const
{
    return offset_;
}

void ListInstanceDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstanceDetailsRequest::getLimit() const
{
    return limit_;
}

void ListInstanceDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& ListInstanceDetailsRequest::getTags()
{
    return tags_;
}

void ListInstanceDetailsRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInstanceDetailsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInstanceDetailsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListInstanceDetailsRequest::getChargeMode() const
{
    return chargeMode_;
}

void ListInstanceDetailsRequest::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ListInstanceDetailsRequest::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ListInstanceDetailsRequest::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

}
}
}
}
}


