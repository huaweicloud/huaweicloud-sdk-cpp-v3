

#include "huaweicloud/iotda/v5/model/ParameterRef.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ParameterRef::ParameterRef()
{
    ref_ = "";
    refIsSet_ = false;
}

ParameterRef::~ParameterRef() = default;

void ParameterRef::validate()
{
}

web::json::value ParameterRef::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }

    return val;
}
bool ParameterRef::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    return ok;
}


std::string ParameterRef::getRef() const
{
    return ref_;
}

void ParameterRef::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ParameterRef::refIsSet() const
{
    return refIsSet_;
}

void ParameterRef::unsetref()
{
    refIsSet_ = false;
}

}
}
}
}
}


