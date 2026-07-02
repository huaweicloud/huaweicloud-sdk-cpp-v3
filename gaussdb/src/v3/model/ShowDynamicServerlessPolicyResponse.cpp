

#include "huaweicloud/gaussdb/v3/model/ShowDynamicServerlessPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowDynamicServerlessPolicyResponse::ShowDynamicServerlessPolicyResponse()
{
    currentVcpus_ = "";
    currentVcpusIsSet_ = false;
    minVcpus_ = "";
    minVcpusIsSet_ = false;
    maxVcpus_ = "";
    maxVcpusIsSet_ = false;
    availableVcpusIsSet_ = false;
}

ShowDynamicServerlessPolicyResponse::~ShowDynamicServerlessPolicyResponse() = default;

void ShowDynamicServerlessPolicyResponse::validate()
{
}

web::json::value ShowDynamicServerlessPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentVcpusIsSet_) {
        val[utility::conversions::to_string_t("current_vcpus")] = ModelBase::toJson(currentVcpus_);
    }
    if(minVcpusIsSet_) {
        val[utility::conversions::to_string_t("min_vcpus")] = ModelBase::toJson(minVcpus_);
    }
    if(maxVcpusIsSet_) {
        val[utility::conversions::to_string_t("max_vcpus")] = ModelBase::toJson(maxVcpus_);
    }
    if(availableVcpusIsSet_) {
        val[utility::conversions::to_string_t("available_vcpus")] = ModelBase::toJson(availableVcpus_);
    }

    return val;
}
bool ShowDynamicServerlessPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("available_vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available_vcpus"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableVcpus(refVal);
        }
    }
    return ok;
}


std::string ShowDynamicServerlessPolicyResponse::getCurrentVcpus() const
{
    return currentVcpus_;
}

void ShowDynamicServerlessPolicyResponse::setCurrentVcpus(const std::string& value)
{
    currentVcpus_ = value;
    currentVcpusIsSet_ = true;
}

bool ShowDynamicServerlessPolicyResponse::currentVcpusIsSet() const
{
    return currentVcpusIsSet_;
}

void ShowDynamicServerlessPolicyResponse::unsetcurrentVcpus()
{
    currentVcpusIsSet_ = false;
}

std::string ShowDynamicServerlessPolicyResponse::getMinVcpus() const
{
    return minVcpus_;
}

void ShowDynamicServerlessPolicyResponse::setMinVcpus(const std::string& value)
{
    minVcpus_ = value;
    minVcpusIsSet_ = true;
}

bool ShowDynamicServerlessPolicyResponse::minVcpusIsSet() const
{
    return minVcpusIsSet_;
}

void ShowDynamicServerlessPolicyResponse::unsetminVcpus()
{
    minVcpusIsSet_ = false;
}

std::string ShowDynamicServerlessPolicyResponse::getMaxVcpus() const
{
    return maxVcpus_;
}

void ShowDynamicServerlessPolicyResponse::setMaxVcpus(const std::string& value)
{
    maxVcpus_ = value;
    maxVcpusIsSet_ = true;
}

bool ShowDynamicServerlessPolicyResponse::maxVcpusIsSet() const
{
    return maxVcpusIsSet_;
}

void ShowDynamicServerlessPolicyResponse::unsetmaxVcpus()
{
    maxVcpusIsSet_ = false;
}

std::vector<std::string>& ShowDynamicServerlessPolicyResponse::getAvailableVcpus()
{
    return availableVcpus_;
}

void ShowDynamicServerlessPolicyResponse::setAvailableVcpus(const std::vector<std::string>& value)
{
    availableVcpus_ = value;
    availableVcpusIsSet_ = true;
}

bool ShowDynamicServerlessPolicyResponse::availableVcpusIsSet() const
{
    return availableVcpusIsSet_;
}

void ShowDynamicServerlessPolicyResponse::unsetavailableVcpus()
{
    availableVcpusIsSet_ = false;
}

}
}
}
}
}


