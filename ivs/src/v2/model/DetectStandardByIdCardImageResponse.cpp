

#include "huaweicloud/ivs/v2/model/DetectStandardByIdCardImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectStandardByIdCardImageResponse::DetectStandardByIdCardImageResponse()
{
    metaIsSet_ = false;
    resultIsSet_ = false;
}

DetectStandardByIdCardImageResponse::~DetectStandardByIdCardImageResponse() = default;

void DetectStandardByIdCardImageResponse::validate()
{
}

web::json::value DetectStandardByIdCardImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metaIsSet_) {
        val[utility::conversions::to_string_t("meta")] = ModelBase::toJson(meta_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool DetectStandardByIdCardImageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta"));
        if(!fieldValue.is_null())
        {
            Meta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            IvsStandardByIdCardImageResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

Meta DetectStandardByIdCardImageResponse::getMeta() const
{
    return meta_;
}

void DetectStandardByIdCardImageResponse::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool DetectStandardByIdCardImageResponse::metaIsSet() const
{
    return metaIsSet_;
}

void DetectStandardByIdCardImageResponse::unsetmeta()
{
    metaIsSet_ = false;
}

IvsStandardByIdCardImageResponseBody_result DetectStandardByIdCardImageResponse::getResult() const
{
    return result_;
}

void DetectStandardByIdCardImageResponse::setResult(const IvsStandardByIdCardImageResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DetectStandardByIdCardImageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DetectStandardByIdCardImageResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


