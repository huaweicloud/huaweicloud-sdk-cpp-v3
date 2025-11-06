

#include "huaweicloud/codeartsrepo/v4/model/DiffRefDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DiffRefDto::DiffRefDto()
{
    baseSha_ = "";
    baseShaIsSet_ = false;
    headSha_ = "";
    headShaIsSet_ = false;
    startSha_ = "";
    startShaIsSet_ = false;
}

DiffRefDto::~DiffRefDto() = default;

void DiffRefDto::validate()
{
}

web::json::value DiffRefDto::toJson() const
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
bool DiffRefDto::fromJson(const web::json::value& val)
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


std::string DiffRefDto::getBaseSha() const
{
    return baseSha_;
}

void DiffRefDto::setBaseSha(const std::string& value)
{
    baseSha_ = value;
    baseShaIsSet_ = true;
}

bool DiffRefDto::baseShaIsSet() const
{
    return baseShaIsSet_;
}

void DiffRefDto::unsetbaseSha()
{
    baseShaIsSet_ = false;
}

std::string DiffRefDto::getHeadSha() const
{
    return headSha_;
}

void DiffRefDto::setHeadSha(const std::string& value)
{
    headSha_ = value;
    headShaIsSet_ = true;
}

bool DiffRefDto::headShaIsSet() const
{
    return headShaIsSet_;
}

void DiffRefDto::unsetheadSha()
{
    headShaIsSet_ = false;
}

std::string DiffRefDto::getStartSha() const
{
    return startSha_;
}

void DiffRefDto::setStartSha(const std::string& value)
{
    startSha_ = value;
    startShaIsSet_ = true;
}

bool DiffRefDto::startShaIsSet() const
{
    return startShaIsSet_;
}

void DiffRefDto::unsetstartSha()
{
    startShaIsSet_ = false;
}

}
}
}
}
}


