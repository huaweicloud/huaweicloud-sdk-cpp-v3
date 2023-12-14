

#include "huaweicloud/live/v1/model/ListDelayConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListDelayConfigRequest::ListDelayConfigRequest()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
}

ListDelayConfigRequest::~ListDelayConfigRequest() = default;

void ListDelayConfigRequest::validate()
{
}

web::json::value ListDelayConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }

    return val;
}
bool ListDelayConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
        }
    }
    return ok;
}


std::string ListDelayConfigRequest::getPlayDomain() const
{
    return playDomain_;
}

void ListDelayConfigRequest::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ListDelayConfigRequest::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ListDelayConfigRequest::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

}
}
}
}
}


