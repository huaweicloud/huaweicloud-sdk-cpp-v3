

#include "huaweicloud/eps/v1/model/ShowEpConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowEpConfigsResponse::ShowEpConfigsResponse()
{
    supportItemIsSet_ = false;
}

ShowEpConfigsResponse::~ShowEpConfigsResponse() = default;

void ShowEpConfigsResponse::validate()
{
}

web::json::value ShowEpConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(supportItemIsSet_) {
        val[utility::conversions::to_string_t("support_item")] = ModelBase::toJson(supportItem_);
    }

    return val;
}
bool ShowEpConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("support_item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_item"));
        if(!fieldValue.is_null())
        {
            EnterpriseProjectConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportItem(refVal);
        }
    }
    return ok;
}


EnterpriseProjectConfig ShowEpConfigsResponse::getSupportItem() const
{
    return supportItem_;
}

void ShowEpConfigsResponse::setSupportItem(const EnterpriseProjectConfig& value)
{
    supportItem_ = value;
    supportItemIsSet_ = true;
}

bool ShowEpConfigsResponse::supportItemIsSet() const
{
    return supportItemIsSet_;
}

void ShowEpConfigsResponse::unsetsupportItem()
{
    supportItemIsSet_ = false;
}

}
}
}
}
}


