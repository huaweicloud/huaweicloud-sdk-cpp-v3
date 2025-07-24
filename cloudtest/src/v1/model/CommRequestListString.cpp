

#include "huaweicloud/cloudtest/v1/model/CommRequestListString.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestListString::CommRequestListString()
{
    paramsIsSet_ = false;
}

CommRequestListString::~CommRequestListString() = default;

void CommRequestListString::validate()
{
}

web::json::value CommRequestListString::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestListString::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CommRequestListString::getParams()
{
    return params_;
}

void CommRequestListString::setParams(const std::vector<std::string>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestListString::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestListString::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


