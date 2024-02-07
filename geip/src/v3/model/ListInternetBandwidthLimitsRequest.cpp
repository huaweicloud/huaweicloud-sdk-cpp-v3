

#include "huaweicloud/geip/v3/model/ListInternetBandwidthLimitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthLimitsRequest::ListInternetBandwidthLimitsRequest()
{
    fieldsIsSet_ = false;
    sortKeyIsSet_ = false;
    sortDirIsSet_ = false;
    chargeModeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListInternetBandwidthLimitsRequest::~ListInternetBandwidthLimitsRequest() = default;

void ListInternetBandwidthLimitsRequest::validate()
{
}

web::json::value ListInternetBandwidthLimitsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListInternetBandwidthLimitsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListInternetBandwidthLimitsRequest::getFields()
{
    return fields_;
}

void ListInternetBandwidthLimitsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListInternetBandwidthLimitsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListInternetBandwidthLimitsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthLimitsRequest::getSortKey()
{
    return sortKey_;
}

void ListInternetBandwidthLimitsRequest::setSortKey(const std::vector<std::string>& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInternetBandwidthLimitsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInternetBandwidthLimitsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthLimitsRequest::getSortDir()
{
    return sortDir_;
}

void ListInternetBandwidthLimitsRequest::setSortDir(const std::vector<std::string>& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListInternetBandwidthLimitsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListInternetBandwidthLimitsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthLimitsRequest::getChargeMode()
{
    return chargeMode_;
}

void ListInternetBandwidthLimitsRequest::setChargeMode(const std::vector<std::string>& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ListInternetBandwidthLimitsRequest::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ListInternetBandwidthLimitsRequest::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string ListInternetBandwidthLimitsRequest::getType() const
{
    return type_;
}

void ListInternetBandwidthLimitsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInternetBandwidthLimitsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListInternetBandwidthLimitsRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


