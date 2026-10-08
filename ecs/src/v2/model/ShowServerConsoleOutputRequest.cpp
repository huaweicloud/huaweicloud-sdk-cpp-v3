

#include "huaweicloud/ecs/v2/model/ShowServerConsoleOutputRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerConsoleOutputRequest::ShowServerConsoleOutputRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    length_ = 0;
    lengthIsSet_ = false;
}

ShowServerConsoleOutputRequest::~ShowServerConsoleOutputRequest() = default;

void ShowServerConsoleOutputRequest::validate()
{
}

web::json::value ShowServerConsoleOutputRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(lengthIsSet_) {
        val[utility::conversions::to_string_t("length")] = ModelBase::toJson(length_);
    }

    return val;
}
bool ShowServerConsoleOutputRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLength(refVal);
        }
    }
    return ok;
}


std::string ShowServerConsoleOutputRequest::getServerId() const
{
    return serverId_;
}

void ShowServerConsoleOutputRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerConsoleOutputRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerConsoleOutputRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

int32_t ShowServerConsoleOutputRequest::getLength() const
{
    return length_;
}

void ShowServerConsoleOutputRequest::setLength(int32_t value)
{
    length_ = value;
    lengthIsSet_ = true;
}

bool ShowServerConsoleOutputRequest::lengthIsSet() const
{
    return lengthIsSet_;
}

void ShowServerConsoleOutputRequest::unsetlength()
{
    lengthIsSet_ = false;
}

}
}
}
}
}


