

#include "huaweicloud/rds/v3/model/CreateSubscription4InstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateSubscription4InstanceInfo::CreateSubscription4InstanceInfo()
{
    publicationId_ = "";
    publicationIdIsSet_ = false;
    publicationName_ = "";
    publicationNameIsSet_ = false;
}

CreateSubscription4InstanceInfo::~CreateSubscription4InstanceInfo() = default;

void CreateSubscription4InstanceInfo::validate()
{
}

web::json::value CreateSubscription4InstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicationIdIsSet_) {
        val[utility::conversions::to_string_t("publication_id")] = ModelBase::toJson(publicationId_);
    }
    if(publicationNameIsSet_) {
        val[utility::conversions::to_string_t("publication_name")] = ModelBase::toJson(publicationName_);
    }

    return val;
}
bool CreateSubscription4InstanceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreateSubscription4InstanceInfo::getPublicationId() const
{
    return publicationId_;
}

void CreateSubscription4InstanceInfo::setPublicationId(const std::string& value)
{
    publicationId_ = value;
    publicationIdIsSet_ = true;
}

bool CreateSubscription4InstanceInfo::publicationIdIsSet() const
{
    return publicationIdIsSet_;
}

void CreateSubscription4InstanceInfo::unsetpublicationId()
{
    publicationIdIsSet_ = false;
}

std::string CreateSubscription4InstanceInfo::getPublicationName() const
{
    return publicationName_;
}

void CreateSubscription4InstanceInfo::setPublicationName(const std::string& value)
{
    publicationName_ = value;
    publicationNameIsSet_ = true;
}

bool CreateSubscription4InstanceInfo::publicationNameIsSet() const
{
    return publicationNameIsSet_;
}

void CreateSubscription4InstanceInfo::unsetpublicationName()
{
    publicationNameIsSet_ = false;
}

}
}
}
}
}


