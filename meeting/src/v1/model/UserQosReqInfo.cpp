

#include "huaweicloud/meeting/v1/model/UserQosReqInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UserQosReqInfo::UserQosReqInfo()
{
    pid_ = "";
    pidIsSet_ = false;
    accessMediaType_ = "";
    accessMediaTypeIsSet_ = false;
}

UserQosReqInfo::~UserQosReqInfo() = default;

void UserQosReqInfo::validate()
{
}

web::json::value UserQosReqInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }
    if(accessMediaTypeIsSet_) {
        val[utility::conversions::to_string_t("accessMediaType")] = ModelBase::toJson(accessMediaType_);
    }

    return val;
}
bool UserQosReqInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessMediaType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessMediaType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessMediaType(refVal);
        }
    }
    return ok;
}


std::string UserQosReqInfo::getPid() const
{
    return pid_;
}

void UserQosReqInfo::setPid(const std::string& value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool UserQosReqInfo::pidIsSet() const
{
    return pidIsSet_;
}

void UserQosReqInfo::unsetpid()
{
    pidIsSet_ = false;
}

std::string UserQosReqInfo::getAccessMediaType() const
{
    return accessMediaType_;
}

void UserQosReqInfo::setAccessMediaType(const std::string& value)
{
    accessMediaType_ = value;
    accessMediaTypeIsSet_ = true;
}

bool UserQosReqInfo::accessMediaTypeIsSet() const
{
    return accessMediaTypeIsSet_;
}

void UserQosReqInfo::unsetaccessMediaType()
{
    accessMediaTypeIsSet_ = false;
}

}
}
}
}
}


