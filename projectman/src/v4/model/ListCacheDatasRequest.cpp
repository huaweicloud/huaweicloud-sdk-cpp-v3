

#include "huaweicloud/projectman/v4/model/ListCacheDatasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListCacheDatasRequest::ListCacheDatasRequest()
{
    projectUUId_ = "";
    projectUUIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListCacheDatasRequest::~ListCacheDatasRequest() = default;

void ListCacheDatasRequest::validate()
{
}

web::json::value ListCacheDatasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUUIdIsSet_) {
        val[utility::conversions::to_string_t("projectUUId")] = ModelBase::toJson(projectUUId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListCacheDatasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projectUUId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectUUId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUUId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListCacheDatasRequest::getProjectUUId() const
{
    return projectUUId_;
}

void ListCacheDatasRequest::setProjectUUId(const std::string& value)
{
    projectUUId_ = value;
    projectUUIdIsSet_ = true;
}

bool ListCacheDatasRequest::projectUUIdIsSet() const
{
    return projectUUIdIsSet_;
}

void ListCacheDatasRequest::unsetprojectUUId()
{
    projectUUIdIsSet_ = false;
}

std::string ListCacheDatasRequest::getType() const
{
    return type_;
}

void ListCacheDatasRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListCacheDatasRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListCacheDatasRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


