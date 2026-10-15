

#include "huaweicloud/drs/v5/model/ShowLinkFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowLinkFlavorsRequest::ShowLinkFlavorsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    isMultiWrite_ = false;
    isMultiWriteIsSet_ = false;
}

ShowLinkFlavorsRequest::~ShowLinkFlavorsRequest() = default;

void ShowLinkFlavorsRequest::validate()
{
}

web::json::value ShowLinkFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(isMultiWriteIsSet_) {
        val[utility::conversions::to_string_t("is_multi_write")] = ModelBase::toJson(isMultiWrite_);
    }

    return val;
}
bool ShowLinkFlavorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_write"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_write"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiWrite(refVal);
        }
    }
    return ok;
}


std::string ShowLinkFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowLinkFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowLinkFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowLinkFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowLinkFlavorsRequest::getEngineType() const
{
    return engineType_;
}

void ShowLinkFlavorsRequest::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ShowLinkFlavorsRequest::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ShowLinkFlavorsRequest::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string ShowLinkFlavorsRequest::getJobType() const
{
    return jobType_;
}

void ShowLinkFlavorsRequest::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ShowLinkFlavorsRequest::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ShowLinkFlavorsRequest::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ShowLinkFlavorsRequest::getJobDirection() const
{
    return jobDirection_;
}

void ShowLinkFlavorsRequest::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool ShowLinkFlavorsRequest::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void ShowLinkFlavorsRequest::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string ShowLinkFlavorsRequest::getNetType() const
{
    return netType_;
}

void ShowLinkFlavorsRequest::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool ShowLinkFlavorsRequest::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void ShowLinkFlavorsRequest::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::string ShowLinkFlavorsRequest::getNodeType() const
{
    return nodeType_;
}

void ShowLinkFlavorsRequest::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool ShowLinkFlavorsRequest::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void ShowLinkFlavorsRequest::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

bool ShowLinkFlavorsRequest::isIsMultiWrite() const
{
    return isMultiWrite_;
}

void ShowLinkFlavorsRequest::setIsMultiWrite(bool value)
{
    isMultiWrite_ = value;
    isMultiWriteIsSet_ = true;
}

bool ShowLinkFlavorsRequest::isMultiWriteIsSet() const
{
    return isMultiWriteIsSet_;
}

void ShowLinkFlavorsRequest::unsetisMultiWrite()
{
    isMultiWriteIsSet_ = false;
}

}
}
}
}
}


