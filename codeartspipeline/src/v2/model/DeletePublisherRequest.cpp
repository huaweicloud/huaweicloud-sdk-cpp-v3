

#include "huaweicloud/codeartspipeline/v2/model/DeletePublisherRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePublisherRequest::DeletePublisherRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    publisherUniqueId_ = "";
    publisherUniqueIdIsSet_ = false;
}

DeletePublisherRequest::~DeletePublisherRequest() = default;

void DeletePublisherRequest::validate()
{
}

web::json::value DeletePublisherRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(publisherUniqueIdIsSet_) {
        val[utility::conversions::to_string_t("publisher_unique_id")] = ModelBase::toJson(publisherUniqueId_);
    }

    return val;
}
bool DeletePublisherRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publisher_unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherUniqueId(refVal);
        }
    }
    return ok;
}


std::string DeletePublisherRequest::getDomainId() const
{
    return domainId_;
}

void DeletePublisherRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeletePublisherRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeletePublisherRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DeletePublisherRequest::getPublisherUniqueId() const
{
    return publisherUniqueId_;
}

void DeletePublisherRequest::setPublisherUniqueId(const std::string& value)
{
    publisherUniqueId_ = value;
    publisherUniqueIdIsSet_ = true;
}

bool DeletePublisherRequest::publisherUniqueIdIsSet() const
{
    return publisherUniqueIdIsSet_;
}

void DeletePublisherRequest::unsetpublisherUniqueId()
{
    publisherUniqueIdIsSet_ = false;
}

}
}
}
}
}


