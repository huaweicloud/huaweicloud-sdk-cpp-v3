

#include "huaweicloud/rds/v3/model/InstancePublicatiosInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstancePublicatiosInfo::InstancePublicatiosInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    publicationId_ = "";
    publicationIdIsSet_ = false;
    publicationName_ = "";
    publicationNameIsSet_ = false;
}

InstancePublicatiosInfo::~InstancePublicatiosInfo() = default;

void InstancePublicatiosInfo::validate()
{
}

web::json::value InstancePublicatiosInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(publicationIdIsSet_) {
        val[utility::conversions::to_string_t("publication_id")] = ModelBase::toJson(publicationId_);
    }
    if(publicationNameIsSet_) {
        val[utility::conversions::to_string_t("publication_name")] = ModelBase::toJson(publicationName_);
    }

    return val;
}
bool InstancePublicatiosInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationName(refVal);
        }
    }
    return ok;
}


std::string InstancePublicatiosInfo::getInstanceId() const
{
    return instanceId_;
}

void InstancePublicatiosInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstancePublicatiosInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstancePublicatiosInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstancePublicatiosInfo::getInstanceName() const
{
    return instanceName_;
}

void InstancePublicatiosInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstancePublicatiosInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstancePublicatiosInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string InstancePublicatiosInfo::getPublicationId() const
{
    return publicationId_;
}

void InstancePublicatiosInfo::setPublicationId(const std::string& value)
{
    publicationId_ = value;
    publicationIdIsSet_ = true;
}

bool InstancePublicatiosInfo::publicationIdIsSet() const
{
    return publicationIdIsSet_;
}

void InstancePublicatiosInfo::unsetpublicationId()
{
    publicationIdIsSet_ = false;
}

std::string InstancePublicatiosInfo::getPublicationName() const
{
    return publicationName_;
}

void InstancePublicatiosInfo::setPublicationName(const std::string& value)
{
    publicationName_ = value;
    publicationNameIsSet_ = true;
}

bool InstancePublicatiosInfo::publicationNameIsSet() const
{
    return publicationNameIsSet_;
}

void InstancePublicatiosInfo::unsetpublicationName()
{
    publicationNameIsSet_ = false;
}

}
}
}
}
}


