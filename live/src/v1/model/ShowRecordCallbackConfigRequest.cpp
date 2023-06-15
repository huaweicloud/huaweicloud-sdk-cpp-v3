

#include "huaweicloud/live/v1/model/ShowRecordCallbackConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowRecordCallbackConfigRequest::ShowRecordCallbackConfigRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowRecordCallbackConfigRequest::~ShowRecordCallbackConfigRequest() = default;

void ShowRecordCallbackConfigRequest::validate()
{
}

web::json::value ShowRecordCallbackConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ShowRecordCallbackConfigRequest::fromJson(const web::json::value& val)
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


std::string ShowRecordCallbackConfigRequest::getId() const
{
    return id_;
}

void ShowRecordCallbackConfigRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowRecordCallbackConfigRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowRecordCallbackConfigRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


