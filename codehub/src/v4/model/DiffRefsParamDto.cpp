

#include "huaweicloud/codehub/v4/model/DiffRefsParamDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DiffRefsParamDto::DiffRefsParamDto()
{
    baseSha_ = "";
    baseShaIsSet_ = false;
    startSha_ = "";
    startShaIsSet_ = false;
    headSha_ = "";
    headShaIsSet_ = false;
}

DiffRefsParamDto::~DiffRefsParamDto() = default;

void DiffRefsParamDto::validate()
{
}

web::json::value DiffRefsParamDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baseShaIsSet_) {
        val[utility::conversions::to_string_t("base_sha")] = ModelBase::toJson(baseSha_);
    }
    if(startShaIsSet_) {
        val[utility::conversions::to_string_t("start_sha")] = ModelBase::toJson(startSha_);
    }
    if(headShaIsSet_) {
        val[utility::conversions::to_string_t("head_sha")] = ModelBase::toJson(headSha_);
    }

    return val;
}
bool DiffRefsParamDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("base_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("head_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("head_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadSha(refVal);
        }
    }
    return ok;
}


std::string DiffRefsParamDto::getBaseSha() const
{
    return baseSha_;
}

void DiffRefsParamDto::setBaseSha(const std::string& value)
{
    baseSha_ = value;
    baseShaIsSet_ = true;
}

bool DiffRefsParamDto::baseShaIsSet() const
{
    return baseShaIsSet_;
}

void DiffRefsParamDto::unsetbaseSha()
{
    baseShaIsSet_ = false;
}

std::string DiffRefsParamDto::getStartSha() const
{
    return startSha_;
}

void DiffRefsParamDto::setStartSha(const std::string& value)
{
    startSha_ = value;
    startShaIsSet_ = true;
}

bool DiffRefsParamDto::startShaIsSet() const
{
    return startShaIsSet_;
}

void DiffRefsParamDto::unsetstartSha()
{
    startShaIsSet_ = false;
}

std::string DiffRefsParamDto::getHeadSha() const
{
    return headSha_;
}

void DiffRefsParamDto::setHeadSha(const std::string& value)
{
    headSha_ = value;
    headShaIsSet_ = true;
}

bool DiffRefsParamDto::headShaIsSet() const
{
    return headShaIsSet_;
}

void DiffRefsParamDto::unsetheadSha()
{
    headShaIsSet_ = false;
}

}
}
}
}
}


