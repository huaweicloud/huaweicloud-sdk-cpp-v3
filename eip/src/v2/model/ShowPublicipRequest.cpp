

#include "huaweicloud/eip/v2/model/ShowPublicipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ShowPublicipRequest::ShowPublicipRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

ShowPublicipRequest::~ShowPublicipRequest() = default;

void ShowPublicipRequest::validate()
{
}

web::json::value ShowPublicipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}

bool ShowPublicipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    return ok;
}

std::string ShowPublicipRequest::getPublicipId() const
{
    return publicipId_;
}

void ShowPublicipRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool ShowPublicipRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void ShowPublicipRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


