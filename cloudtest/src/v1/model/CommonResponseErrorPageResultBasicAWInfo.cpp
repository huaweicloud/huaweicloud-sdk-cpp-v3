

#include "huaweicloud/cloudtest/v1/model/CommonResponseErrorPageResultBasicAWInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommonResponseErrorPageResultBasicAWInfo::CommonResponseErrorPageResultBasicAWInfo()
{
    code_ = "";
    codeIsSet_ = false;
    detailIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

CommonResponseErrorPageResultBasicAWInfo::~CommonResponseErrorPageResultBasicAWInfo() = default;

void CommonResponseErrorPageResultBasicAWInfo::validate()
{
}

web::json::value CommonResponseErrorPageResultBasicAWInfo::toJson() const
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
bool CommonResponseErrorPageResultBasicAWInfo::fromJson(const web::json::value& val)
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
            PageResultBasicAWInfo refVal;
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


std::string CommonResponseErrorPageResultBasicAWInfo::getCode() const
{
    return code_;
}

void CommonResponseErrorPageResultBasicAWInfo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CommonResponseErrorPageResultBasicAWInfo::codeIsSet() const
{
    return codeIsSet_;
}

void CommonResponseErrorPageResultBasicAWInfo::unsetcode()
{
    codeIsSet_ = false;
}

PageResultBasicAWInfo CommonResponseErrorPageResultBasicAWInfo::getDetail() const
{
    return detail_;
}

void CommonResponseErrorPageResultBasicAWInfo::setDetail(const PageResultBasicAWInfo& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool CommonResponseErrorPageResultBasicAWInfo::detailIsSet() const
{
    return detailIsSet_;
}

void CommonResponseErrorPageResultBasicAWInfo::unsetdetail()
{
    detailIsSet_ = false;
}

std::string CommonResponseErrorPageResultBasicAWInfo::getReason() const
{
    return reason_;
}

void CommonResponseErrorPageResultBasicAWInfo::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool CommonResponseErrorPageResultBasicAWInfo::reasonIsSet() const
{
    return reasonIsSet_;
}

void CommonResponseErrorPageResultBasicAWInfo::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


