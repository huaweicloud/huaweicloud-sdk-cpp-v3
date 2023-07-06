

#include "huaweicloud/ivs/v2/model/DetectStandardByVideoAndIdCardImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectStandardByVideoAndIdCardImageResponse::DetectStandardByVideoAndIdCardImageResponse()
{
    metaIsSet_ = false;
    resultIsSet_ = false;
}

DetectStandardByVideoAndIdCardImageResponse::~DetectStandardByVideoAndIdCardImageResponse() = default;

void DetectStandardByVideoAndIdCardImageResponse::validate()
{
}

web::json::value DetectStandardByVideoAndIdCardImageResponse::toJson() const
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

bool DetectStandardByVideoAndIdCardImageResponse::fromJson(const web::json::value& val)
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
            IvsStandardByVideoAndIdCardImageResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

Meta DetectStandardByVideoAndIdCardImageResponse::getMeta() const
{
    return meta_;
}

void DetectStandardByVideoAndIdCardImageResponse::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool DetectStandardByVideoAndIdCardImageResponse::metaIsSet() const
{
    return metaIsSet_;
}

void DetectStandardByVideoAndIdCardImageResponse::unsetmeta()
{
    metaIsSet_ = false;
}

IvsStandardByVideoAndIdCardImageResponseBody_result DetectStandardByVideoAndIdCardImageResponse::getResult() const
{
    return result_;
}

void DetectStandardByVideoAndIdCardImageResponse::setResult(const IvsStandardByVideoAndIdCardImageResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DetectStandardByVideoAndIdCardImageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DetectStandardByVideoAndIdCardImageResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


