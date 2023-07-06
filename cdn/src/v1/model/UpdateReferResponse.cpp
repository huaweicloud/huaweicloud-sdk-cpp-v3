

#include "huaweicloud/cdn/v1/model/UpdateReferResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




UpdateReferResponse::UpdateReferResponse()
{
    refererIsSet_ = false;
}

UpdateReferResponse::~UpdateReferResponse() = default;

void UpdateReferResponse::validate()
{
}

web::json::value UpdateReferResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refererIsSet_) {
        val[utility::conversions::to_string_t("referer")] = ModelBase::toJson(referer_);
    }

    return val;
}

bool UpdateReferResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("referer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer"));
        if(!fieldValue.is_null())
        {
            RefererRsp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferer(refVal);
        }
    }
    return ok;
}

RefererRsp UpdateReferResponse::getReferer() const
{
    return referer_;
}

void UpdateReferResponse::setReferer(const RefererRsp& value)
{
    referer_ = value;
    refererIsSet_ = true;
}

bool UpdateReferResponse::refererIsSet() const
{
    return refererIsSet_;
}

void UpdateReferResponse::unsetreferer()
{
    refererIsSet_ = false;
}

}
}
}
}
}


