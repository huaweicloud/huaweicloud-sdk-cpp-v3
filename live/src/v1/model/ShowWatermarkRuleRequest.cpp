

#include "huaweicloud/live/v1/model/ShowWatermarkRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowWatermarkRuleRequest::ShowWatermarkRuleRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowWatermarkRuleRequest::~ShowWatermarkRuleRequest() = default;

void ShowWatermarkRuleRequest::validate()
{
}

web::json::value ShowWatermarkRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowWatermarkRuleRequest::fromJson(const web::json::value& val)
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


std::string ShowWatermarkRuleRequest::getId() const
{
    return id_;
}

void ShowWatermarkRuleRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowWatermarkRuleRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowWatermarkRuleRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


