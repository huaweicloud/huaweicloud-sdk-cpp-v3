

#include "huaweicloud/cdn/v2/model/BatchCopyErrorRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchCopyErrorRsp::BatchCopyErrorRsp()
{
    errorIsSet_ = false;
}

BatchCopyErrorRsp::~BatchCopyErrorRsp() = default;

void BatchCopyErrorRsp::validate()
{
}

web::json::value BatchCopyErrorRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}
bool BatchCopyErrorRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            BatchCopyErrorRsp_error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


BatchCopyErrorRsp_error BatchCopyErrorRsp::getError() const
{
    return error_;
}

void BatchCopyErrorRsp::setError(const BatchCopyErrorRsp_error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool BatchCopyErrorRsp::errorIsSet() const
{
    return errorIsSet_;
}

void BatchCopyErrorRsp::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


