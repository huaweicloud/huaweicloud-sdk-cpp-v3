

#include "huaweicloud/live/v1/model/ShowRecordRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowRecordRuleRequest::ShowRecordRuleRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowRecordRuleRequest::~ShowRecordRuleRequest() = default;

void ShowRecordRuleRequest::validate()
{
}

web::json::value ShowRecordRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ShowRecordRuleRequest::fromJson(const web::json::value& val)
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


std::string ShowRecordRuleRequest::getId() const
{
    return id_;
}

void ShowRecordRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowRecordRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowRecordRuleRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


