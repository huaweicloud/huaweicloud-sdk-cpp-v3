

#include "huaweicloud/smn/v2/model/DeleteApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteApplicationRequest::DeleteApplicationRequest()
{
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
}

DeleteApplicationRequest::~DeleteApplicationRequest() = default;

void DeleteApplicationRequest::validate()
{
}

web::json::value DeleteApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }

    return val;
}
bool DeleteApplicationRequest::fromJson(const web::json::value& val)
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


std::string DeleteApplicationRequest::getApplicationUrn() const
{
    return applicationUrn_;
}

void DeleteApplicationRequest::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool DeleteApplicationRequest::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void DeleteApplicationRequest::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

}
}
}
}
}


