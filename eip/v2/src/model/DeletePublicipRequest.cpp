

#include "huaweicloud/eip/model/DeletePublicipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




DeletePublicipRequest::DeletePublicipRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

DeletePublicipRequest::~DeletePublicipRequest() = default;

void DeletePublicipRequest::validate()
{
}

web::json::value DeletePublicipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}

bool DeletePublicipRequest::fromJson(const web::json::value& val)
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


std::string DeletePublicipRequest::getPublicipId() const
{
    return publicipId_;
}

void DeletePublicipRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool DeletePublicipRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void DeletePublicipRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


