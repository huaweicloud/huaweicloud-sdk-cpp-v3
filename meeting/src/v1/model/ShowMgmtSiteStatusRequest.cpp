

#include "huaweicloud/meeting/v1/model/ShowMgmtSiteStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowMgmtSiteStatusRequest::ShowMgmtSiteStatusRequest()
{
    xSchemaType_ = "";
    xSchemaTypeIsSet_ = false;
}

ShowMgmtSiteStatusRequest::~ShowMgmtSiteStatusRequest() = default;

void ShowMgmtSiteStatusRequest::validate()
{
}

web::json::value ShowMgmtSiteStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSchemaTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Schema-Type")] = ModelBase::toJson(xSchemaType_);
    }

    return val;
}
bool ShowMgmtSiteStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Schema-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Schema-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSchemaType(refVal);
        }
    }
    return ok;
}


std::string ShowMgmtSiteStatusRequest::getXSchemaType() const
{
    return xSchemaType_;
}

void ShowMgmtSiteStatusRequest::setXSchemaType(const std::string& value)
{
    xSchemaType_ = value;
    xSchemaTypeIsSet_ = true;
}

bool ShowMgmtSiteStatusRequest::xSchemaTypeIsSet() const
{
    return xSchemaTypeIsSet_;
}

void ShowMgmtSiteStatusRequest::unsetxSchemaType()
{
    xSchemaTypeIsSet_ = false;
}

}
}
}
}
}


