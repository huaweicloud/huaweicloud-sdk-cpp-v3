

#include "huaweicloud/rds/v3/model/ListMarketplaceEngineProductsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListMarketplaceEngineProductsRequest::ListMarketplaceEngineProductsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bpDomainId_ = "";
    bpDomainIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    engineId_ = "";
    engineIdIsSet_ = false;
}

ListMarketplaceEngineProductsRequest::~ListMarketplaceEngineProductsRequest() = default;

void ListMarketplaceEngineProductsRequest::validate()
{
}

web::json::value ListMarketplaceEngineProductsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bpDomainIdIsSet_) {
        val[utility::conversions::to_string_t("bp_domain_id")] = ModelBase::toJson(bpDomainId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(engineIdIsSet_) {
        val[utility::conversions::to_string_t("engine_id")] = ModelBase::toJson(engineId_);
    }

    return val;
}
bool ListMarketplaceEngineProductsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bp_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bp_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBpDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineId(refVal);
        }
    }
    return ok;
}


std::string ListMarketplaceEngineProductsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListMarketplaceEngineProductsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListMarketplaceEngineProductsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListMarketplaceEngineProductsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListMarketplaceEngineProductsRequest::getBpDomainId() const
{
    return bpDomainId_;
}

void ListMarketplaceEngineProductsRequest::setBpDomainId(const std::string& value)
{
    bpDomainId_ = value;
    bpDomainIdIsSet_ = true;
}

bool ListMarketplaceEngineProductsRequest::bpDomainIdIsSet() const
{
    return bpDomainIdIsSet_;
}

void ListMarketplaceEngineProductsRequest::unsetbpDomainId()
{
    bpDomainIdIsSet_ = false;
}

int32_t ListMarketplaceEngineProductsRequest::getOffset() const
{
    return offset_;
}

void ListMarketplaceEngineProductsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMarketplaceEngineProductsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMarketplaceEngineProductsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMarketplaceEngineProductsRequest::getLimit() const
{
    return limit_;
}

void ListMarketplaceEngineProductsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMarketplaceEngineProductsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMarketplaceEngineProductsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMarketplaceEngineProductsRequest::getEngineId() const
{
    return engineId_;
}

void ListMarketplaceEngineProductsRequest::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool ListMarketplaceEngineProductsRequest::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void ListMarketplaceEngineProductsRequest::unsetengineId()
{
    engineIdIsSet_ = false;
}

}
}
}
}
}


