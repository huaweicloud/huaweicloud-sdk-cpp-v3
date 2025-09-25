

#include "huaweicloud/codehub/v4/model/StartRemoteMirrorSynchronizationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




StartRemoteMirrorSynchronizationResponse::StartRemoteMirrorSynchronizationResponse()
{
    jid_ = "";
    jidIsSet_ = false;
}

StartRemoteMirrorSynchronizationResponse::~StartRemoteMirrorSynchronizationResponse() = default;

void StartRemoteMirrorSynchronizationResponse::validate()
{
}

web::json::value StartRemoteMirrorSynchronizationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jidIsSet_) {
        val[utility::conversions::to_string_t("jid")] = ModelBase::toJson(jid_);
    }

    return val;
}
bool StartRemoteMirrorSynchronizationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJid(refVal);
        }
    }
    return ok;
}


std::string StartRemoteMirrorSynchronizationResponse::getJid() const
{
    return jid_;
}

void StartRemoteMirrorSynchronizationResponse::setJid(const std::string& value)
{
    jid_ = value;
    jidIsSet_ = true;
}

bool StartRemoteMirrorSynchronizationResponse::jidIsSet() const
{
    return jidIsSet_;
}

void StartRemoteMirrorSynchronizationResponse::unsetjid()
{
    jidIsSet_ = false;
}

}
}
}
}
}


