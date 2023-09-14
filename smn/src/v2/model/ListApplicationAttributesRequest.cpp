

#include "huaweicloud/smn/v2/model/ListApplicationAttributesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationAttributesRequest::ListApplicationAttributesRequest()
{
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
}

ListApplicationAttributesRequest::~ListApplicationAttributesRequest() = default;

void ListApplicationAttributesRequest::validate()
{
}

web::json::value ListApplicationAttributesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }

    return val;
}

bool ListApplicationAttributesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationUrn(refVal);
        }
    }
    return ok;
}

std::string ListApplicationAttributesRequest::getApplicationUrn() const
{
    return applicationUrn_;
}

void ListApplicationAttributesRequest::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool ListApplicationAttributesRequest::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void ListApplicationAttributesRequest::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

}
}
}
}
}


