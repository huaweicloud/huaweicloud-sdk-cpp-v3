

#include "huaweicloud/live/v1/model/CreateUrlAuthchainReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateUrlAuthchainReq::CreateUrlAuthchainReq()
{
    domain_ = "";
    domainIsSet_ = false;
    domainType_ = "";
    domainTypeIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    checkLevel_ = 0;
    checkLevelIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
}

CreateUrlAuthchainReq::~CreateUrlAuthchainReq() = default;

void CreateUrlAuthchainReq::validate()
{
}

web::json::value CreateUrlAuthchainReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(domainTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_type")] = ModelBase::toJson(domainType_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(checkLevelIsSet_) {
        val[utility::conversions::to_string_t("check_level")] = ModelBase::toJson(checkLevel_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool CreateUrlAuthchainReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


std::string CreateUrlAuthchainReq::getDomain() const
{
    return domain_;
}

void CreateUrlAuthchainReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateUrlAuthchainReq::domainIsSet() const
{
    return domainIsSet_;
}

void CreateUrlAuthchainReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CreateUrlAuthchainReq::getDomainType() const
{
    return domainType_;
}

void CreateUrlAuthchainReq::setDomainType(const std::string& value)
{
    domainType_ = value;
    domainTypeIsSet_ = true;
}

bool CreateUrlAuthchainReq::domainTypeIsSet() const
{
    return domainTypeIsSet_;
}

void CreateUrlAuthchainReq::unsetdomainType()
{
    domainTypeIsSet_ = false;
}

std::string CreateUrlAuthchainReq::getStream() const
{
    return stream_;
}

void CreateUrlAuthchainReq::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool CreateUrlAuthchainReq::streamIsSet() const
{
    return streamIsSet_;
}

void CreateUrlAuthchainReq::unsetstream()
{
    streamIsSet_ = false;
}

std::string CreateUrlAuthchainReq::getApp() const
{
    return app_;
}

void CreateUrlAuthchainReq::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool CreateUrlAuthchainReq::appIsSet() const
{
    return appIsSet_;
}

void CreateUrlAuthchainReq::unsetapp()
{
    appIsSet_ = false;
}

int32_t CreateUrlAuthchainReq::getCheckLevel() const
{
    return checkLevel_;
}

void CreateUrlAuthchainReq::setCheckLevel(int32_t value)
{
    checkLevel_ = value;
    checkLevelIsSet_ = true;
}

bool CreateUrlAuthchainReq::checkLevelIsSet() const
{
    return checkLevelIsSet_;
}

void CreateUrlAuthchainReq::unsetcheckLevel()
{
    checkLevelIsSet_ = false;
}

std::string CreateUrlAuthchainReq::getStartTime() const
{
    return startTime_;
}

void CreateUrlAuthchainReq::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateUrlAuthchainReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateUrlAuthchainReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


