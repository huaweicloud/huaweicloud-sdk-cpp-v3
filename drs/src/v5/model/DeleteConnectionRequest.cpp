

#include "huaweicloud/drs/v5/model/DeleteConnectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteConnectionRequest::DeleteConnectionRequest()
{
    connectionId_ = "";
    connectionIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DeleteConnectionRequest::~DeleteConnectionRequest() = default;

void DeleteConnectionRequest::validate()
{
}

web::json::value DeleteConnectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(connectionIdIsSet_) {
        val[utility::conversions::to_string_t("connection_id")] = ModelBase::toJson(connectionId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool DeleteConnectionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string DeleteConnectionRequest::getConnectionId() const
{
    return connectionId_;
}

void DeleteConnectionRequest::setConnectionId(const std::string& value)
{
    connectionId_ = value;
    connectionIdIsSet_ = true;
}

bool DeleteConnectionRequest::connectionIdIsSet() const
{
    return connectionIdIsSet_;
}

void DeleteConnectionRequest::unsetconnectionId()
{
    connectionIdIsSet_ = false;
}

std::string DeleteConnectionRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteConnectionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteConnectionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteConnectionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


