

#include "huaweicloud/modelarts/v1/model/GetScaleEvaluationsDevServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetScaleEvaluationsDevServerRequest::GetScaleEvaluationsDevServerRequest()
{
    id_ = "";
    idIsSet_ = false;
}

GetScaleEvaluationsDevServerRequest::~GetScaleEvaluationsDevServerRequest() = default;

void GetScaleEvaluationsDevServerRequest::validate()
{
}

web::json::value GetScaleEvaluationsDevServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool GetScaleEvaluationsDevServerRequest::fromJson(const web::json::value& val)
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


std::string GetScaleEvaluationsDevServerRequest::getId() const
{
    return id_;
}

void GetScaleEvaluationsDevServerRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetScaleEvaluationsDevServerRequest::idIsSet() const
{
    return idIsSet_;
}

void GetScaleEvaluationsDevServerRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


