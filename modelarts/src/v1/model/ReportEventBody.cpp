

#include "huaweicloud/modelarts/v1/model/ReportEventBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ReportEventBody::ReportEventBody()
{
    type_ = "";
    typeIsSet_ = false;
}

ReportEventBody::~ReportEventBody() = default;

void ReportEventBody::validate()
{
}

web::json::value ReportEventBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ReportEventBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ReportEventBody::getType() const
{
    return type_;
}

void ReportEventBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ReportEventBody::typeIsSet() const
{
    return typeIsSet_;
}

void ReportEventBody::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


