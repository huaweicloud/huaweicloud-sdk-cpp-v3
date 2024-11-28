

#include "huaweicloud/image/v2/model/RunCelebrityRecognitionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunCelebrityRecognitionResponse::RunCelebrityRecognitionResponse()
{
    resultIsSet_ = false;
}

RunCelebrityRecognitionResponse::~RunCelebrityRecognitionResponse() = default;

void RunCelebrityRecognitionResponse::validate()
{
}

web::json::value RunCelebrityRecognitionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RunCelebrityRecognitionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<CelebrityRecognitionResultBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<CelebrityRecognitionResultBody>& RunCelebrityRecognitionResponse::getResult()
{
    return result_;
}

void RunCelebrityRecognitionResponse::setResult(const std::vector<CelebrityRecognitionResultBody>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RunCelebrityRecognitionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RunCelebrityRecognitionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


