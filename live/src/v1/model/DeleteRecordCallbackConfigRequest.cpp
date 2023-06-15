

#include "huaweicloud/live/v1/model/DeleteRecordCallbackConfigRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteRecordCallbackConfigRequest::DeleteRecordCallbackConfigRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteRecordCallbackConfigRequest::~DeleteRecordCallbackConfigRequest() = default;

void DeleteRecordCallbackConfigRequest::validate()
{
}

web::json::value DeleteRecordCallbackConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool DeleteRecordCallbackConfigRequest::fromJson(const web::json::value& val)
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


std::string DeleteRecordCallbackConfigRequest::getId() const
{
    return id_;
}

void DeleteRecordCallbackConfigRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteRecordCallbackConfigRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteRecordCallbackConfigRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


