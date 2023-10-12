

#include "huaweicloud/ivs/v2/model/DetectExtentionByIdCardImageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectExtentionByIdCardImageResponse::DetectExtentionByIdCardImageResponse()
{
    metaIsSet_ = false;
    resultIsSet_ = false;
}

DetectExtentionByIdCardImageResponse::~DetectExtentionByIdCardImageResponse() = default;

void DetectExtentionByIdCardImageResponse::validate()
{
}

web::json::value DetectExtentionByIdCardImageResponse::toJson() const
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
bool DetectExtentionByIdCardImageResponse::fromJson(const web::json::value& val)
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
            IvsExtentionByIdCardImageResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


Meta DetectExtentionByIdCardImageResponse::getMeta() const
{
    return meta_;
}

void DetectExtentionByIdCardImageResponse::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool DetectExtentionByIdCardImageResponse::metaIsSet() const
{
    return metaIsSet_;
}

void DetectExtentionByIdCardImageResponse::unsetmeta()
{
    metaIsSet_ = false;
}

IvsExtentionByIdCardImageResponseBody_result DetectExtentionByIdCardImageResponse::getResult() const
{
    return result_;
}

void DetectExtentionByIdCardImageResponse::setResult(const IvsExtentionByIdCardImageResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DetectExtentionByIdCardImageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DetectExtentionByIdCardImageResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


