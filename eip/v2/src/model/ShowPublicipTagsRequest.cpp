

#include "huaweicloud/eip/model/ShowPublicipTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ShowPublicipTagsRequest::ShowPublicipTagsRequest()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

ShowPublicipTagsRequest::~ShowPublicipTagsRequest() = default;

void ShowPublicipTagsRequest::validate()
{
}

web::json::value ShowPublicipTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}

bool ShowPublicipTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowPublicipTagsRequest::getPublicipId() const
{
    return publicipId_;
}

void ShowPublicipTagsRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool ShowPublicipTagsRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void ShowPublicipTagsRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


