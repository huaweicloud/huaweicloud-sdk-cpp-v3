

#include "huaweicloud/cloudtest/v1/model/CommonResponseErrorAvailableConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommonResponseErrorAvailableConfig::CommonResponseErrorAvailableConfig()
{
    code_ = "";
    codeIsSet_ = false;
    detailIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

CommonResponseErrorAvailableConfig::~CommonResponseErrorAvailableConfig() = default;

void CommonResponseErrorAvailableConfig::validate()
{
}

web::json::value CommonResponseErrorAvailableConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool CommonResponseErrorAvailableConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            AvailableConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string CommonResponseErrorAvailableConfig::getCode() const
{
    return code_;
}

void CommonResponseErrorAvailableConfig::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CommonResponseErrorAvailableConfig::codeIsSet() const
{
    return codeIsSet_;
}

void CommonResponseErrorAvailableConfig::unsetcode()
{
    codeIsSet_ = false;
}

AvailableConfig CommonResponseErrorAvailableConfig::getDetail() const
{
    return detail_;
}

void CommonResponseErrorAvailableConfig::setDetail(const AvailableConfig& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool CommonResponseErrorAvailableConfig::detailIsSet() const
{
    return detailIsSet_;
}

void CommonResponseErrorAvailableConfig::unsetdetail()
{
    detailIsSet_ = false;
}

std::string CommonResponseErrorAvailableConfig::getReason() const
{
    return reason_;
}

void CommonResponseErrorAvailableConfig::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool CommonResponseErrorAvailableConfig::reasonIsSet() const
{
    return reasonIsSet_;
}

void CommonResponseErrorAvailableConfig::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


