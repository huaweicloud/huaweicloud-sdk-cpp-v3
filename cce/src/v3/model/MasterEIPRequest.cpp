

#include "huaweicloud/cce/v3/model/MasterEIPRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MasterEIPRequest::MasterEIPRequest()
{
    specIsSet_ = false;
}

MasterEIPRequest::~MasterEIPRequest() = default;

void MasterEIPRequest::validate()
{
}

web::json::value MasterEIPRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool MasterEIPRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            MasterEIPRequestSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


MasterEIPRequestSpec MasterEIPRequest::getSpec() const
{
    return spec_;
}

void MasterEIPRequest::setSpec(const MasterEIPRequestSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool MasterEIPRequest::specIsSet() const
{
    return specIsSet_;
}

void MasterEIPRequest::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


