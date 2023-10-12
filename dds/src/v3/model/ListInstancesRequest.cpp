

#include "huaweicloud/dds/v3/model/ListInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListInstancesRequest::ListInstancesRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
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
    tags_ = "";
    tagsIsSet_ = false;
}

ListInstancesRequest::~ListInstancesRequest() = default;

void ListInstancesRequest::validate()
{
}

web::json::value ListInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
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
bool ListInstancesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ListInstancesRequest::getId() const
{
    return id_;
}

void ListInstancesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInstancesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInstancesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInstancesRequest::getName() const
{
    return name_;
}

void ListInstancesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstancesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstancesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInstancesRequest::getMode() const
{
    return mode_;
}

void ListInstancesRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListInstancesRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListInstancesRequest::unsetmode()
{
    modeIsSet_ = false;
}

std::string ListInstancesRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ListInstancesRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ListInstancesRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ListInstancesRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ListInstancesRequest::getVpcId() const
{
    return vpcId_;
}

void ListInstancesRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListInstancesRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListInstancesRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListInstancesRequest::getSubnetId() const
{
    return subnetId_;
}

void ListInstancesRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListInstancesRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListInstancesRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

int32_t ListInstancesRequest::getOffset() const
{
    return offset_;
}

void ListInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstancesRequest::getLimit() const
{
    return limit_;
}

void ListInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstancesRequest::getTags() const
{
    return tags_;
}

void ListInstancesRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInstancesRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInstancesRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


