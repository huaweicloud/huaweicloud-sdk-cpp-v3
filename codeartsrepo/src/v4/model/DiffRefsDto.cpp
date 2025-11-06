

#include "huaweicloud/codeartsrepo/v4/model/DiffRefsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DiffRefsDto::DiffRefsDto()
{
    baseSha_ = "";
    baseShaIsSet_ = false;
    headSha_ = "";
    headShaIsSet_ = false;
    startSha_ = "";
    startShaIsSet_ = false;
}

DiffRefsDto::~DiffRefsDto() = default;

void DiffRefsDto::validate()
{
}

web::json::value DiffRefsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baseShaIsSet_) {
        val[utility::conversions::to_string_t("base_sha")] = ModelBase::toJson(baseSha_);
    }
    if(headShaIsSet_) {
        val[utility::conversions::to_string_t("head_sha")] = ModelBase::toJson(headSha_);
    }
    if(startShaIsSet_) {
        val[utility::conversions::to_string_t("start_sha")] = ModelBase::toJson(startSha_);
    }

    return val;
}
bool DiffRefsDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("head_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("head_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadSha(refVal);
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
    return ok;
}


std::string DiffRefsDto::getBaseSha() const
{
    return baseSha_;
}

void DiffRefsDto::setBaseSha(const std::string& value)
{
    baseSha_ = value;
    baseShaIsSet_ = true;
}

bool DiffRefsDto::baseShaIsSet() const
{
    return baseShaIsSet_;
}

void DiffRefsDto::unsetbaseSha()
{
    baseShaIsSet_ = false;
}

std::string DiffRefsDto::getHeadSha() const
{
    return headSha_;
}

void DiffRefsDto::setHeadSha(const std::string& value)
{
    headSha_ = value;
    headShaIsSet_ = true;
}

bool DiffRefsDto::headShaIsSet() const
{
    return headShaIsSet_;
}

void DiffRefsDto::unsetheadSha()
{
    headShaIsSet_ = false;
}

std::string DiffRefsDto::getStartSha() const
{
    return startSha_;
}

void DiffRefsDto::setStartSha(const std::string& value)
{
    startSha_ = value;
    startShaIsSet_ = true;
}

bool DiffRefsDto::startShaIsSet() const
{
    return startShaIsSet_;
}

void DiffRefsDto::unsetstartSha()
{
    startShaIsSet_ = false;
}

}
}
}
}
}


