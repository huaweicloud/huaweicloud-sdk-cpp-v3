

#include "huaweicloud/cce/v3/model/NodePoolMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolMetadata::NodePoolMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    uid_ = "";
    uidIsSet_ = false;
    annotationsIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
}

NodePoolMetadata::~NodePoolMetadata() = default;

void NodePoolMetadata::validate()
{
}

web::json::value NodePoolMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }

    return val;
}
bool NodePoolMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    return ok;
}


std::string NodePoolMetadata::getName() const
{
    return name_;
}

void NodePoolMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodePoolMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void NodePoolMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string NodePoolMetadata::getUid() const
{
    return uid_;
}

void NodePoolMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool NodePoolMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void NodePoolMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::map<std::string, std::string>& NodePoolMetadata::getAnnotations()
{
    return annotations_;
}

void NodePoolMetadata::setAnnotations(const std::map<std::string, std::string>& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool NodePoolMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void NodePoolMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

std::string NodePoolMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void NodePoolMetadata::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool NodePoolMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void NodePoolMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

std::string NodePoolMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void NodePoolMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool NodePoolMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void NodePoolMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

}
}
}
}
}


