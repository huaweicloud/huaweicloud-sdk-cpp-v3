

#include "huaweicloud/antiddos/v1/model/ListQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListQuotaResponse::ListQuotaResponse()
{
    ddosQuotaIsSet_ = false;
}

ListQuotaResponse::~ListQuotaResponse() = default;

void ListQuotaResponse::validate()
{
}

web::json::value ListQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ddosQuotaIsSet_) {
        val[utility::conversions::to_string_t("ddos_quota")] = ModelBase::toJson(ddosQuota_);
    }

    return val;
}
bool ListQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ddos_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddos_quota"));
        if(!fieldValue.is_null())
        {
            QuotaResponse_ddos_quota refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdosQuota(refVal);
        }
    }
    return ok;
}


QuotaResponse_ddos_quota ListQuotaResponse::getDdosQuota() const
{
    return ddosQuota_;
}

void ListQuotaResponse::setDdosQuota(const QuotaResponse_ddos_quota& value)
{
    ddosQuota_ = value;
    ddosQuotaIsSet_ = true;
}

bool ListQuotaResponse::ddosQuotaIsSet() const
{
    return ddosQuotaIsSet_;
}

void ListQuotaResponse::unsetddosQuota()
{
    ddosQuotaIsSet_ = false;
}

}
}
}
}
}


