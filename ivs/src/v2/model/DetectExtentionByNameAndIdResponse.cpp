

#include "huaweicloud/ivs/v2/model/DetectExtentionByNameAndIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




DetectExtentionByNameAndIdResponse::DetectExtentionByNameAndIdResponse()
{
    metaIsSet_ = false;
    resultIsSet_ = false;
}

DetectExtentionByNameAndIdResponse::~DetectExtentionByNameAndIdResponse() = default;

void DetectExtentionByNameAndIdResponse::validate()
{
}

web::json::value DetectExtentionByNameAndIdResponse::toJson() const
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
bool DetectExtentionByNameAndIdResponse::fromJson(const web::json::value& val)
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
            IvsExtentionByNameAndIdResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


Meta DetectExtentionByNameAndIdResponse::getMeta() const
{
    return meta_;
}

void DetectExtentionByNameAndIdResponse::setMeta(const Meta& value)
{
    meta_ = value;
    metaIsSet_ = true;
}

bool DetectExtentionByNameAndIdResponse::metaIsSet() const
{
    return metaIsSet_;
}

void DetectExtentionByNameAndIdResponse::unsetmeta()
{
    metaIsSet_ = false;
}

IvsExtentionByNameAndIdResponseBody_result DetectExtentionByNameAndIdResponse::getResult() const
{
    return result_;
}

void DetectExtentionByNameAndIdResponse::setResult(const IvsExtentionByNameAndIdResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DetectExtentionByNameAndIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DetectExtentionByNameAndIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


