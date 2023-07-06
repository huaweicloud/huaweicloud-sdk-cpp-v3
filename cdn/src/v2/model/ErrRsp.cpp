

#include "huaweicloud/cdn/v2/model/ErrRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ErrRsp::ErrRsp()
{
    errorIsSet_ = false;
}

ErrRsp::~ErrRsp() = default;

void ErrRsp::validate()
{
}

web::json::value ErrRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}

bool ErrRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ErrMsg refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}

ErrMsg ErrRsp::getError() const
{
    return error_;
}

void ErrRsp::setError(const ErrMsg& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ErrRsp::errorIsSet() const
{
    return errorIsSet_;
}

void ErrRsp::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


