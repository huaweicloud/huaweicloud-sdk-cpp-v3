

#include "huaweicloud/vpc/v2/model/ShowPrivateipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowPrivateipRequest::ShowPrivateipRequest()
{
    privateipId_ = "";
    privateipIdIsSet_ = false;
}

ShowPrivateipRequest::~ShowPrivateipRequest() = default;

void ShowPrivateipRequest::validate()
{
}

web::json::value ShowPrivateipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateipIdIsSet_) {
        val[utility::conversions::to_string_t("privateip_id")] = ModelBase::toJson(privateipId_);
    }

    return val;
}

bool ShowPrivateipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("privateip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateipId(refVal);
        }
    }
    return ok;
}

std::string ShowPrivateipRequest::getPrivateipId() const
{
    return privateipId_;
}

void ShowPrivateipRequest::setPrivateipId(const std::string& value)
{
    privateipId_ = value;
    privateipIdIsSet_ = true;
}

bool ShowPrivateipRequest::privateipIdIsSet() const
{
    return privateipIdIsSet_;
}

void ShowPrivateipRequest::unsetprivateipId()
{
    privateipIdIsSet_ = false;
}

}
}
}
}
}


