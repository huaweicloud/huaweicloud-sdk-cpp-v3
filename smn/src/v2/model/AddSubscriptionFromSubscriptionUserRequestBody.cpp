

#include "huaweicloud/smn/v2/model/AddSubscriptionFromSubscriptionUserRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




AddSubscriptionFromSubscriptionUserRequestBody::AddSubscriptionFromSubscriptionUserRequestBody()
{
    idsIsSet_ = false;
}

AddSubscriptionFromSubscriptionUserRequestBody::~AddSubscriptionFromSubscriptionUserRequestBody() = default;

void AddSubscriptionFromSubscriptionUserRequestBody::validate()
{
}

web::json::value AddSubscriptionFromSubscriptionUserRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool AddSubscriptionFromSubscriptionUserRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AddSubscriptionFromSubscriptionUserRequestBody::getIds()
{
    return ids_;
}

void AddSubscriptionFromSubscriptionUserRequestBody::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserRequestBody::idsIsSet() const
{
    return idsIsSet_;
}

void AddSubscriptionFromSubscriptionUserRequestBody::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


