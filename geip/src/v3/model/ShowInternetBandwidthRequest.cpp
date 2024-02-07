

#include "huaweicloud/geip/v3/model/ShowInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowInternetBandwidthRequest::ShowInternetBandwidthRequest()
{
    internetBandwidthId_ = "";
    internetBandwidthIdIsSet_ = false;
    fieldsIsSet_ = false;
}

ShowInternetBandwidthRequest::~ShowInternetBandwidthRequest() = default;

void ShowInternetBandwidthRequest::validate()
{
}

web::json::value ShowInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internetBandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_id")] = ModelBase::toJson(internetBandwidthId_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ShowInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    return ok;
}


std::string ShowInternetBandwidthRequest::getInternetBandwidthId() const
{
    return internetBandwidthId_;
}

void ShowInternetBandwidthRequest::setInternetBandwidthId(const std::string& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool ShowInternetBandwidthRequest::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void ShowInternetBandwidthRequest::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

std::vector<std::string>& ShowInternetBandwidthRequest::getFields()
{
    return fields_;
}

void ShowInternetBandwidthRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowInternetBandwidthRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowInternetBandwidthRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


