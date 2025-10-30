

#include "huaweicloud/live/v1/model/DeleteWatermarkRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteWatermarkRuleRequest::DeleteWatermarkRuleRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteWatermarkRuleRequest::~DeleteWatermarkRuleRequest() = default;

void DeleteWatermarkRuleRequest::validate()
{
}

web::json::value DeleteWatermarkRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteWatermarkRuleRequest::fromJson(const web::json::value& val)
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


std::string DeleteWatermarkRuleRequest::getId() const
{
    return id_;
}

void DeleteWatermarkRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteWatermarkRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteWatermarkRuleRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


