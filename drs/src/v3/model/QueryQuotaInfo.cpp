

#include "huaweicloud/drs/v3/model/QueryQuotaInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryQuotaInfo::QueryQuotaInfo()
{
    resourceIsSet_ = false;
}

QueryQuotaInfo::~QueryQuotaInfo() = default;

void QueryQuotaInfo::validate()
{
}

web::json::value QueryQuotaInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }

    return val;
}
bool QueryQuotaInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            QuotaResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    return ok;
}


QuotaResource QueryQuotaInfo::getResource() const
{
    return resource_;
}

void QueryQuotaInfo::setResource(const QuotaResource& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool QueryQuotaInfo::resourceIsSet() const
{
    return resourceIsSet_;
}

void QueryQuotaInfo::unsetresource()
{
    resourceIsSet_ = false;
}

}
}
}
}
}


