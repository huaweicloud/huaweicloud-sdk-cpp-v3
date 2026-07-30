

#include "huaweicloud/modelarts/v1/model/RunUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RunUserRequest::RunUserRequest()
{
    uid_ = 0;
    uidIsSet_ = false;
    gid_ = 0;
    gidIsSet_ = false;
}

RunUserRequest::~RunUserRequest() = default;

void RunUserRequest::validate()
{
}

web::json::value RunUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(gidIsSet_) {
        val[utility::conversions::to_string_t("gid")] = ModelBase::toJson(gid_);
    }

    return val;
}
bool RunUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGid(refVal);
        }
    }
    return ok;
}


int32_t RunUserRequest::getUid() const
{
    return uid_;
}

void RunUserRequest::setUid(int32_t value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool RunUserRequest::uidIsSet() const
{
    return uidIsSet_;
}

void RunUserRequest::unsetuid()
{
    uidIsSet_ = false;
}

int32_t RunUserRequest::getGid() const
{
    return gid_;
}

void RunUserRequest::setGid(int32_t value)
{
    gid_ = value;
    gidIsSet_ = true;
}

bool RunUserRequest::gidIsSet() const
{
    return gidIsSet_;
}

void RunUserRequest::unsetgid()
{
    gidIsSet_ = false;
}

}
}
}
}
}


