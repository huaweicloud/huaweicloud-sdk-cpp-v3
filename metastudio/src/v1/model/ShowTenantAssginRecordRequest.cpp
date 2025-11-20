

#include "huaweicloud/metastudio/v1/model/ShowTenantAssginRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantAssginRecordRequest::ShowTenantAssginRecordRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowTenantAssginRecordRequest::~ShowTenantAssginRecordRequest() = default;

void ShowTenantAssginRecordRequest::validate()
{
}

web::json::value ShowTenantAssginRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowTenantAssginRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


int32_t ShowTenantAssginRecordRequest::getLimit() const
{
    return limit_;
}

void ShowTenantAssginRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTenantAssginRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTenantAssginRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowTenantAssginRecordRequest::getOffset() const
{
    return offset_;
}

void ShowTenantAssginRecordRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTenantAssginRecordRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTenantAssginRecordRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


