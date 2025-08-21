

#include "huaweicloud/cfw/v1/model/ShowFirewallReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowFirewallReportResponse::ShowFirewallReportResponse()
{
    dataIsSet_ = false;
}

ShowFirewallReportResponse::~ShowFirewallReportResponse() = default;

void ShowFirewallReportResponse::validate()
{
}

web::json::value ShowFirewallReportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowFirewallReportResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            FirewallReport refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


FirewallReport ShowFirewallReportResponse::getData() const
{
    return data_;
}

void ShowFirewallReportResponse::setData(const FirewallReport& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowFirewallReportResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowFirewallReportResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


