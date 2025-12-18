

#include "huaweicloud/meeting/v1/model/InviteShareDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




InviteShareDTO::InviteShareDTO()
{
    share_ = 0;
    shareIsSet_ = false;
}

InviteShareDTO::~InviteShareDTO() = default;

void InviteShareDTO::validate()
{
}

web::json::value InviteShareDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(shareIsSet_) {
        val[utility::conversions::to_string_t("share")] = ModelBase::toJson(share_);
    }

    return val;
}
bool InviteShareDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("share"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShare(refVal);
        }
    }
    return ok;
}


int32_t InviteShareDTO::getShare() const
{
    return share_;
}

void InviteShareDTO::setShare(int32_t value)
{
    share_ = value;
    shareIsSet_ = true;
}

bool InviteShareDTO::shareIsSet() const
{
    return shareIsSet_;
}

void InviteShareDTO::unsetshare()
{
    shareIsSet_ = false;
}

}
}
}
}
}


