

#include "huaweicloud/cfw/v1/model/ListFirewallListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFirewallListResponse::ListFirewallListResponse()
{
    userSupportEps_ = false;
    userSupportEpsIsSet_ = false;
    hasNdr_ = false;
    hasNdrIsSet_ = false;
    isSupportPostpaid_ = false;
    isSupportPostpaidIsSet_ = false;
    isSupportBasicVersion_ = false;
    isSupportBasicVersionIsSet_ = false;
    isSupportBuyProfessional_ = false;
    isSupportBuyProfessionalIsSet_ = false;
    dataIsSet_ = false;
}

ListFirewallListResponse::~ListFirewallListResponse() = default;

void ListFirewallListResponse::validate()
{
}

web::json::value ListFirewallListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userSupportEpsIsSet_) {
        val[utility::conversions::to_string_t("user_support_eps")] = ModelBase::toJson(userSupportEps_);
    }
    if(hasNdrIsSet_) {
        val[utility::conversions::to_string_t("has_ndr")] = ModelBase::toJson(hasNdr_);
    }
    if(isSupportPostpaidIsSet_) {
        val[utility::conversions::to_string_t("is_support_postpaid")] = ModelBase::toJson(isSupportPostpaid_);
    }
    if(isSupportBasicVersionIsSet_) {
        val[utility::conversions::to_string_t("is_support_basic_version")] = ModelBase::toJson(isSupportBasicVersion_);
    }
    if(isSupportBuyProfessionalIsSet_) {
        val[utility::conversions::to_string_t("is_support_buy_professional")] = ModelBase::toJson(isSupportBuyProfessional_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListFirewallListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_support_eps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_support_eps"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserSupportEps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_ndr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_ndr"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasNdr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_postpaid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_postpaid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportPostpaid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_basic_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_basic_version"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportBasicVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_buy_professional"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_buy_professional"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportBuyProfessional(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            HttpFirewallInstanceListResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


bool ListFirewallListResponse::isUserSupportEps() const
{
    return userSupportEps_;
}

void ListFirewallListResponse::setUserSupportEps(bool value)
{
    userSupportEps_ = value;
    userSupportEpsIsSet_ = true;
}

bool ListFirewallListResponse::userSupportEpsIsSet() const
{
    return userSupportEpsIsSet_;
}

void ListFirewallListResponse::unsetuserSupportEps()
{
    userSupportEpsIsSet_ = false;
}

bool ListFirewallListResponse::isHasNdr() const
{
    return hasNdr_;
}

void ListFirewallListResponse::setHasNdr(bool value)
{
    hasNdr_ = value;
    hasNdrIsSet_ = true;
}

bool ListFirewallListResponse::hasNdrIsSet() const
{
    return hasNdrIsSet_;
}

void ListFirewallListResponse::unsethasNdr()
{
    hasNdrIsSet_ = false;
}

bool ListFirewallListResponse::isIsSupportPostpaid() const
{
    return isSupportPostpaid_;
}

void ListFirewallListResponse::setIsSupportPostpaid(bool value)
{
    isSupportPostpaid_ = value;
    isSupportPostpaidIsSet_ = true;
}

bool ListFirewallListResponse::isSupportPostpaidIsSet() const
{
    return isSupportPostpaidIsSet_;
}

void ListFirewallListResponse::unsetisSupportPostpaid()
{
    isSupportPostpaidIsSet_ = false;
}

bool ListFirewallListResponse::isIsSupportBasicVersion() const
{
    return isSupportBasicVersion_;
}

void ListFirewallListResponse::setIsSupportBasicVersion(bool value)
{
    isSupportBasicVersion_ = value;
    isSupportBasicVersionIsSet_ = true;
}

bool ListFirewallListResponse::isSupportBasicVersionIsSet() const
{
    return isSupportBasicVersionIsSet_;
}

void ListFirewallListResponse::unsetisSupportBasicVersion()
{
    isSupportBasicVersionIsSet_ = false;
}

bool ListFirewallListResponse::isIsSupportBuyProfessional() const
{
    return isSupportBuyProfessional_;
}

void ListFirewallListResponse::setIsSupportBuyProfessional(bool value)
{
    isSupportBuyProfessional_ = value;
    isSupportBuyProfessionalIsSet_ = true;
}

bool ListFirewallListResponse::isSupportBuyProfessionalIsSet() const
{
    return isSupportBuyProfessionalIsSet_;
}

void ListFirewallListResponse::unsetisSupportBuyProfessional()
{
    isSupportBuyProfessionalIsSet_ = false;
}

HttpFirewallInstanceListResponseData ListFirewallListResponse::getData() const
{
    return data_;
}

void ListFirewallListResponse::setData(const HttpFirewallInstanceListResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListFirewallListResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListFirewallListResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


