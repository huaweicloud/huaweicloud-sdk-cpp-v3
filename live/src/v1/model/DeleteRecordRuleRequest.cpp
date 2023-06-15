

#include "huaweicloud/live/v1/model/DeleteRecordRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteRecordRuleRequest::DeleteRecordRuleRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteRecordRuleRequest::~DeleteRecordRuleRequest() = default;

void DeleteRecordRuleRequest::validate()
{
}

web::json::value DeleteRecordRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool DeleteRecordRuleRequest::fromJson(const web::json::value& val)
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


std::string DeleteRecordRuleRequest::getId() const
{
    return id_;
}

void DeleteRecordRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteRecordRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteRecordRuleRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


