

#include "huaweicloud/ivs/v2/model/DetectStandardByVideoAndNameAndIdResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectStandardByVideoAndNameAndIdResponse::DetectStandardByVideoAndNameAndIdResponse()
{
    metaIsSet_ = false;
    resultIsSet_ = false;
}

DetectStandardByVideoAndNameAndIdResponse::~DetectStandardByVideoAndNameAndIdResponse() = default;

void DetectStandardByVideoAndNameAndIdResponse::validate()
{
}

web::json::value DetectStandardByVideoAndNameAndIdResponse::toJson() const
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

bool DetectStandardByVideoAndNameAndIdResponse::fromJson(const web::json::value& val)
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
            IvsStandardByVideoAndNameAndIdResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


Meta DetectStandardByVideoAndNameAndIdResponse::getMeta() const
{
    return meta_;
}

void DetectStandardByVideoAndNameAndIdResponse::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool DetectStandardByVideoAndNameAndIdResponse::metaIsSet() const
{
    return metaIsSet_;
}

void DetectStandardByVideoAndNameAndIdResponse::unsetmeta()
{
    metaIsSet_ = false;
}

IvsStandardByVideoAndNameAndIdResponseBody_result DetectStandardByVideoAndNameAndIdResponse::getResult() const
{
    return result_;
}

void DetectStandardByVideoAndNameAndIdResponse::setResult(const IvsStandardByVideoAndNameAndIdResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DetectStandardByVideoAndNameAndIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DetectStandardByVideoAndNameAndIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


