

#include "huaweicloud/drs/v5/model/SupportLinksResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SupportLinksResp::SupportLinksResp()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    supportLinksIsSet_ = false;
}

SupportLinksResp::~SupportLinksResp() = default;

void SupportLinksResp::validate()
{
}

web::json::value SupportLinksResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(supportLinksIsSet_) {
        val[utility::conversions::to_string_t("support_links")] = ModelBase::toJson(supportLinks_);
    }

    return val;
}
bool SupportLinksResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_links"));
        if(!fieldValue.is_null())
        {
            std::vector<SupportLinkInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportLinks(refVal);
        }
    }
    return ok;
}


int32_t SupportLinksResp::getTotalCount() const
{
    return totalCount_;
}

void SupportLinksResp::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool SupportLinksResp::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void SupportLinksResp::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<SupportLinkInfo>& SupportLinksResp::getSupportLinks()
{
    return supportLinks_;
}

void SupportLinksResp::setSupportLinks(const std::vector<SupportLinkInfo>& value)
{
    supportLinks_ = value;
    supportLinksIsSet_ = true;
}

bool SupportLinksResp::supportLinksIsSet() const
{
    return supportLinksIsSet_;
}

void SupportLinksResp::unsetsupportLinks()
{
    supportLinksIsSet_ = false;
}

}
}
}
}
}


