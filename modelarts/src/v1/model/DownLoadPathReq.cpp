

#include "huaweicloud/modelarts/v1/model/DownLoadPathReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DownLoadPathReq::DownLoadPathReq()
{
    expires_ = 0L;
    expiresIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
}

DownLoadPathReq::~DownLoadPathReq() = default;

void DownLoadPathReq::validate()
{
}

web::json::value DownLoadPathReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expiresIsSet_) {
        val[utility::conversions::to_string_t("expires")] = ModelBase::toJson(expires_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }

    return val;
}
bool DownLoadPathReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expires"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpires(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    return ok;
}


int64_t DownLoadPathReq::getExpires() const
{
    return expires_;
}

void DownLoadPathReq::setExpires(int64_t value)
{
    expires_ = value;
    expiresIsSet_ = true;
}

bool DownLoadPathReq::expiresIsSet() const
{
    return expiresIsSet_;
}

void DownLoadPathReq::unsetexpires()
{
    expiresIsSet_ = false;
}

std::string DownLoadPathReq::getPath() const
{
    return path_;
}

void DownLoadPathReq::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool DownLoadPathReq::pathIsSet() const
{
    return pathIsSet_;
}

void DownLoadPathReq::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


