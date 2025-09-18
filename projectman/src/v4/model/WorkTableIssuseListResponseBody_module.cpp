

#include "huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_module.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkTableIssuseListResponseBody_module::WorkTableIssuseListResponseBody_module()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    pathName_ = "";
    pathNameIsSet_ = false;
}

WorkTableIssuseListResponseBody_module::~WorkTableIssuseListResponseBody_module() = default;

void WorkTableIssuseListResponseBody_module::validate()
{
}

web::json::value WorkTableIssuseListResponseBody_module::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pathNameIsSet_) {
        val[utility::conversions::to_string_t("path_name")] = ModelBase::toJson(pathName_);
    }

    return val;
}
bool WorkTableIssuseListResponseBody_module::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("path_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPathName(refVal);
        }
    }
    return ok;
}


int32_t WorkTableIssuseListResponseBody_module::getId() const
{
    return id_;
}

void WorkTableIssuseListResponseBody_module::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_module::idIsSet() const
{
    return idIsSet_;
}

void WorkTableIssuseListResponseBody_module::unsetid()
{
    idIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_module::getName() const
{
    return name_;
}

void WorkTableIssuseListResponseBody_module::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_module::nameIsSet() const
{
    return nameIsSet_;
}

void WorkTableIssuseListResponseBody_module::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkTableIssuseListResponseBody_module::getPathName() const
{
    return pathName_;
}

void WorkTableIssuseListResponseBody_module::setPathName(const std::string& value)
{
    pathName_ = value;
    pathNameIsSet_ = true;
}

bool WorkTableIssuseListResponseBody_module::pathNameIsSet() const
{
    return pathNameIsSet_;
}

void WorkTableIssuseListResponseBody_module::unsetpathName()
{
    pathNameIsSet_ = false;
}

}
}
}
}
}


