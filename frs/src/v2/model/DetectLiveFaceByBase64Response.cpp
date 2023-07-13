

#include "huaweicloud/frs/v2/model/DetectLiveFaceByBase64Response.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveFaceByBase64Response::DetectLiveFaceByBase64Response()
{
    resultIsSet_ = false;
    warningListIsSet_ = false;
}

DetectLiveFaceByBase64Response::~DetectLiveFaceByBase64Response() = default;

void DetectLiveFaceByBase64Response::validate()
{
}

web::json::value DetectLiveFaceByBase64Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(warningListIsSet_) {
        val[utility::conversions::to_string_t("warning-list")] = ModelBase::toJson(warningList_);
    }

    return val;
}

bool DetectLiveFaceByBase64Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            LiveDetectFaceResp_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warning-list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warning-list"));
        if(!fieldValue.is_null())
        {
            std::vector<WarningList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarningList(refVal);
        }
    }
    return ok;
}

LiveDetectFaceResp_result DetectLiveFaceByBase64Response::getResult() const
{
    return result_;
}

void DetectLiveFaceByBase64Response::setResult(const LiveDetectFaceResp_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DetectLiveFaceByBase64Response::resultIsSet() const
{
    return resultIsSet_;
}

void DetectLiveFaceByBase64Response::unsetresult()
{
    resultIsSet_ = false;
}

std::vector<WarningList>& DetectLiveFaceByBase64Response::getWarningList()
{
    return warningList_;
}

void DetectLiveFaceByBase64Response::setWarningList(const std::vector<WarningList>& value)
{
    warningList_ = value;
    warningListIsSet_ = true;
}

bool DetectLiveFaceByBase64Response::warningListIsSet() const
{
    return warningListIsSet_;
}

void DetectLiveFaceByBase64Response::unsetwarningList()
{
    warningListIsSet_ = false;
}

}
}
}
}
}


