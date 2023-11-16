

#include "huaweicloud/aad/v1/model/ShowUnblockRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ShowUnblockRecordResponse::ShowUnblockRecordResponse()
{
    unblockRecordIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

ShowUnblockRecordResponse::~ShowUnblockRecordResponse() = default;

void ShowUnblockRecordResponse::validate()
{
}

web::json::value ShowUnblockRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(unblockRecordIsSet_) {
        val[utility::conversions::to_string_t("unblock_record")] = ModelBase::toJson(unblockRecord_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ShowUnblockRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("unblock_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unblock_record"));
        if(!fieldValue.is_null())
        {
            std::vector<UnblockRecordResponse_unblock_record> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnblockRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::vector<UnblockRecordResponse_unblock_record>& ShowUnblockRecordResponse::getUnblockRecord()
{
    return unblockRecord_;
}

void ShowUnblockRecordResponse::setUnblockRecord(const std::vector<UnblockRecordResponse_unblock_record>& value)
{
    unblockRecord_ = value;
    unblockRecordIsSet_ = true;
}

bool ShowUnblockRecordResponse::unblockRecordIsSet() const
{
    return unblockRecordIsSet_;
}

void ShowUnblockRecordResponse::unsetunblockRecord()
{
    unblockRecordIsSet_ = false;
}

int32_t ShowUnblockRecordResponse::getTotal() const
{
    return total_;
}

void ShowUnblockRecordResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowUnblockRecordResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowUnblockRecordResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ShowUnblockRecordResponse::getDomainId() const
{
    return domainId_;
}

void ShowUnblockRecordResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowUnblockRecordResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowUnblockRecordResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


