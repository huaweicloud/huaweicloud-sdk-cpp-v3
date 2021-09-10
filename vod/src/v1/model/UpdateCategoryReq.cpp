

#include "huaweicloud/vod/v1/model/UpdateCategoryReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateCategoryReq::UpdateCategoryReq()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

UpdateCategoryReq::~UpdateCategoryReq() = default;

void UpdateCategoryReq::validate()
{
}

web::json::value UpdateCategoryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool UpdateCategoryReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string UpdateCategoryReq::getName() const
{
    return name_;
}

void UpdateCategoryReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateCategoryReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateCategoryReq::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateCategoryReq::getId() const
{
    return id_;
}

void UpdateCategoryReq::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateCategoryReq::idIsSet() const
{
    return idIsSet_;
}

void UpdateCategoryReq::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


