

#include "huaweicloud/modelarts/v1/model/HttpGet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HttpGet::HttpGet()
{
    path_ = "";
    pathIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
}

HttpGet::~HttpGet() = default;

void HttpGet::validate()
{
}

web::json::value HttpGet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool HttpGet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


std::string HttpGet::getPath() const
{
    return path_;
}

void HttpGet::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool HttpGet::pathIsSet() const
{
    return pathIsSet_;
}

void HttpGet::unsetpath()
{
    pathIsSet_ = false;
}

int32_t HttpGet::getPort() const
{
    return port_;
}

void HttpGet::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool HttpGet::portIsSet() const
{
    return portIsSet_;
}

void HttpGet::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


