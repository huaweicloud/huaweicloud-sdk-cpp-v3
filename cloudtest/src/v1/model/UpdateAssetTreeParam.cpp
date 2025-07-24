

#include "huaweicloud/cloudtest/v1/model/UpdateAssetTreeParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateAssetTreeParam::UpdateAssetTreeParam()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdateAssetTreeParam::~UpdateAssetTreeParam() = default;

void UpdateAssetTreeParam::validate()
{
}

web::json::value UpdateAssetTreeParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateAssetTreeParam::fromJson(const web::json::value& val)
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


std::string UpdateAssetTreeParam::getId() const
{
    return id_;
}

void UpdateAssetTreeParam::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateAssetTreeParam::idIsSet() const
{
    return idIsSet_;
}

void UpdateAssetTreeParam::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateAssetTreeParam::getName() const
{
    return name_;
}

void UpdateAssetTreeParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAssetTreeParam::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAssetTreeParam::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


