

#include "huaweicloud/drs/v5/model/UpdateJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateJobReq::UpdateJobReq()
{
    type_ = "";
    typeIsSet_ = false;
    paramsIsSet_ = false;
}

UpdateJobReq::~UpdateJobReq() = default;

void UpdateJobReq::validate()
{
}

web::json::value UpdateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool UpdateJobReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            UpdateJob refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string UpdateJobReq::getType() const
{
    return type_;
}

void UpdateJobReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateJobReq::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateJobReq::unsettype()
{
    typeIsSet_ = false;
}

UpdateJob UpdateJobReq::getParams() const
{
    return params_;
}

void UpdateJobReq::setParams(const UpdateJob& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool UpdateJobReq::paramsIsSet() const
{
    return paramsIsSet_;
}

void UpdateJobReq::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


