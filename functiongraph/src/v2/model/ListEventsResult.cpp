

#include "huaweicloud/functiongraph/v2/model/ListEventsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListEventsResult::ListEventsResult()
{
    id_ = "";
    idIsSet_ = false;
    lastModified_ = 0.0;
    lastModifiedIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListEventsResult::~ListEventsResult() = default;

void ListEventsResult::validate()
{
}

web::json::value ListEventsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListEventsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListEventsResult::getId() const
{
    return id_;
}

void ListEventsResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListEventsResult::idIsSet() const
{
    return idIsSet_;
}

void ListEventsResult::unsetid()
{
    idIsSet_ = false;
}

double ListEventsResult::getLastModified() const
{
    return lastModified_;
}

void ListEventsResult::setLastModified(double value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ListEventsResult::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ListEventsResult::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string ListEventsResult::getName() const
{
    return name_;
}

void ListEventsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListEventsResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListEventsResult::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


