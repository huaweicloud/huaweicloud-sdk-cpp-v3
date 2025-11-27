

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopPathRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopPathRequest::ListCdnDomainTopPathRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    userDomainId_ = "";
    userDomainIdIsSet_ = false;
}

ListCdnDomainTopPathRequest::~ListCdnDomainTopPathRequest() = default;

void ListCdnDomainTopPathRequest::validate()
{
}

web::json::value ListCdnDomainTopPathRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(userDomainIdIsSet_) {
        val[utility::conversions::to_string_t("user_domain_id")] = ModelBase::toJson(userDomainId_);
    }

    return val;
}
bool ListCdnDomainTopPathRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDomainId(refVal);
        }
    }
    return ok;
}


int64_t ListCdnDomainTopPathRequest::getStartTime() const
{
    return startTime_;
}

void ListCdnDomainTopPathRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCdnDomainTopPathRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCdnDomainTopPathRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListCdnDomainTopPathRequest::getEndTime() const
{
    return endTime_;
}

void ListCdnDomainTopPathRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCdnDomainTopPathRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCdnDomainTopPathRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListCdnDomainTopPathRequest::getDomainName() const
{
    return domainName_;
}

void ListCdnDomainTopPathRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListCdnDomainTopPathRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListCdnDomainTopPathRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListCdnDomainTopPathRequest::getStatType() const
{
    return statType_;
}

void ListCdnDomainTopPathRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ListCdnDomainTopPathRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ListCdnDomainTopPathRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ListCdnDomainTopPathRequest::getServiceArea() const
{
    return serviceArea_;
}

void ListCdnDomainTopPathRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ListCdnDomainTopPathRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ListCdnDomainTopPathRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ListCdnDomainTopPathRequest::getUserDomainId() const
{
    return userDomainId_;
}

void ListCdnDomainTopPathRequest::setUserDomainId(const std::string& value)
{
    userDomainId_ = value;
    userDomainIdIsSet_ = true;
}

bool ListCdnDomainTopPathRequest::userDomainIdIsSet() const
{
    return userDomainIdIsSet_;
}

void ListCdnDomainTopPathRequest::unsetuserDomainId()
{
    userDomainIdIsSet_ = false;
}

}
}
}
}
}


