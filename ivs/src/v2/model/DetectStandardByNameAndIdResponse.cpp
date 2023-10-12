

#include "huaweicloud/ivs/v2/model/DetectStandardByNameAndIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectStandardByNameAndIdResponse::DetectStandardByNameAndIdResponse()
{
    metaIsSet_ = false;
    resultIsSet_ = false;
}

DetectStandardByNameAndIdResponse::~DetectStandardByNameAndIdResponse() = default;

void DetectStandardByNameAndIdResponse::validate()
{
}

web::json::value DetectStandardByNameAndIdResponse::toJson() const
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
bool DetectStandardByNameAndIdResponse::fromJson(const web::json::value& val)
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
            IvsStandardByNameAndIdResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


Meta DetectStandardByNameAndIdResponse::getMeta() const
{
    return meta_;
}

void DetectStandardByNameAndIdResponse::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool DetectStandardByNameAndIdResponse::metaIsSet() const
{
    return metaIsSet_;
}

void DetectStandardByNameAndIdResponse::unsetmeta()
{
    metaIsSet_ = false;
}

IvsStandardByNameAndIdResponseBody_result DetectStandardByNameAndIdResponse::getResult() const
{
    return result_;
}

void DetectStandardByNameAndIdResponse::setResult(const IvsStandardByNameAndIdResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DetectStandardByNameAndIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DetectStandardByNameAndIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


