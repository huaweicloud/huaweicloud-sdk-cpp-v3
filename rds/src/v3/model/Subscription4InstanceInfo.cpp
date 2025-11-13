

#include "huaweicloud/rds/v3/model/Subscription4InstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Subscription4InstanceInfo::Subscription4InstanceInfo()
{
    publicationInstanceId_ = "";
    publicationInstanceIdIsSet_ = false;
    publicationInstanceName_ = "";
    publicationInstanceNameIsSet_ = false;
}

Subscription4InstanceInfo::~Subscription4InstanceInfo() = default;

void Subscription4InstanceInfo::validate()
{
}

web::json::value Subscription4InstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("publication_instance_id")] = ModelBase::toJson(publicationInstanceId_);
    }
    if(publicationInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("publication_instance_name")] = ModelBase::toJson(publicationInstanceName_);
    }

    return val;
}
bool Subscription4InstanceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publication_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publication_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationInstanceName(refVal);
        }
    }
    return ok;
}


std::string Subscription4InstanceInfo::getPublicationInstanceId() const
{
    return publicationInstanceId_;
}

void Subscription4InstanceInfo::setPublicationInstanceId(const std::string& value)
{
    publicationInstanceId_ = value;
    publicationInstanceIdIsSet_ = true;
}

bool Subscription4InstanceInfo::publicationInstanceIdIsSet() const
{
    return publicationInstanceIdIsSet_;
}

void Subscription4InstanceInfo::unsetpublicationInstanceId()
{
    publicationInstanceIdIsSet_ = false;
}

std::string Subscription4InstanceInfo::getPublicationInstanceName() const
{
    return publicationInstanceName_;
}

void Subscription4InstanceInfo::setPublicationInstanceName(const std::string& value)
{
    publicationInstanceName_ = value;
    publicationInstanceNameIsSet_ = true;
}

bool Subscription4InstanceInfo::publicationInstanceNameIsSet() const
{
    return publicationInstanceNameIsSet_;
}

void Subscription4InstanceInfo::unsetpublicationInstanceName()
{
    publicationInstanceNameIsSet_ = false;
}

}
}
}
}
}


