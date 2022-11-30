

#include "huaweicloud/vpc/v2/model/DeletePrivateipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeletePrivateipRequest::DeletePrivateipRequest()
{
    privateipId_ = "";
    privateipIdIsSet_ = false;
}

DeletePrivateipRequest::~DeletePrivateipRequest() = default;

void DeletePrivateipRequest::validate()
{
}

web::json::value DeletePrivateipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(privateipIdIsSet_) {
        val[utility::conversions::to_string_t("privateip_id")] = ModelBase::toJson(privateipId_);
    }

    return val;
}

bool DeletePrivateipRequest::fromJson(const web::json::value& val)
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


std::string DeletePrivateipRequest::getPrivateipId() const
{
    return privateipId_;
}

void DeletePrivateipRequest::setPrivateipId(const std::string& value)
{
    privateipId_ = value;
    privateipIdIsSet_ = true;
}

bool DeletePrivateipRequest::privateipIdIsSet() const
{
    return privateipIdIsSet_;
}

void DeletePrivateipRequest::unsetprivateipId()
{
    privateipIdIsSet_ = false;
}

}
}
}
}
}


