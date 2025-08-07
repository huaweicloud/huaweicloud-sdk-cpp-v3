

#include "huaweicloud/rds/v3/model/ListBusinessPartnersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListBusinessPartnersResponse::ListBusinessPartnersResponse()
{
    businessPartnersIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListBusinessPartnersResponse::~ListBusinessPartnersResponse() = default;

void ListBusinessPartnersResponse::validate()
{
}

web::json::value ListBusinessPartnersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(businessPartnersIsSet_) {
        val[utility::conversions::to_string_t("business_partners")] = ModelBase::toJson(businessPartners_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListBusinessPartnersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("business_partners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_partners"));
        if(!fieldValue.is_null())
        {
            std::vector<BusinessPartner> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessPartners(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<BusinessPartner>& ListBusinessPartnersResponse::getBusinessPartners()
{
    return businessPartners_;
}

void ListBusinessPartnersResponse::setBusinessPartners(const std::vector<BusinessPartner>& value)
{
    businessPartners_ = value;
    businessPartnersIsSet_ = true;
}

bool ListBusinessPartnersResponse::businessPartnersIsSet() const
{
    return businessPartnersIsSet_;
}

void ListBusinessPartnersResponse::unsetbusinessPartners()
{
    businessPartnersIsSet_ = false;
}

int32_t ListBusinessPartnersResponse::getTotalCount() const
{
    return totalCount_;
}

void ListBusinessPartnersResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListBusinessPartnersResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListBusinessPartnersResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


