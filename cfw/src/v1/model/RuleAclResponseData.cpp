

#include "huaweicloud/cfw/v1/model/RuleAclResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleAclResponseData::RuleAclResponseData()
{
    id_ = "";
    idIsSet_ = false;
}

RuleAclResponseData::~RuleAclResponseData() = default;

void RuleAclResponseData::validate()
{
}

web::json::value RuleAclResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool RuleAclResponseData::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RuleAclResponseData::getId() const
{
    return id_;
}

void RuleAclResponseData::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RuleAclResponseData::idIsSet() const
{
    return idIsSet_;
}

void RuleAclResponseData::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


