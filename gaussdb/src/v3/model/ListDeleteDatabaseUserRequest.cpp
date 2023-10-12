

#include "huaweicloud/gaussdb/v3/model/ListDeleteDatabaseUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListDeleteDatabaseUserRequest::ListDeleteDatabaseUserRequest()
{
    name_ = "";
    nameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
}

ListDeleteDatabaseUserRequest::~ListDeleteDatabaseUserRequest() = default;

void ListDeleteDatabaseUserRequest::validate()
{
}

web::json::value ListDeleteDatabaseUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }

    return val;
}
bool ListDeleteDatabaseUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    return ok;
}


std::string ListDeleteDatabaseUserRequest::getName() const
{
    return name_;
}

void ListDeleteDatabaseUserRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDeleteDatabaseUserRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListDeleteDatabaseUserRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDeleteDatabaseUserRequest::getHost() const
{
    return host_;
}

void ListDeleteDatabaseUserRequest::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool ListDeleteDatabaseUserRequest::hostIsSet() const
{
    return hostIsSet_;
}

void ListDeleteDatabaseUserRequest::unsethost()
{
    hostIsSet_ = false;
}

}
}
}
}
}


