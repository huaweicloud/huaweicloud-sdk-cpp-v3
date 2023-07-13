

#include "huaweicloud/frs/v2/model/DetectLiveFaceByFileResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveFaceByFileResponse::DetectLiveFaceByFileResponse()
{
    resultIsSet_ = false;
    warningListIsSet_ = false;
}

DetectLiveFaceByFileResponse::~DetectLiveFaceByFileResponse() = default;

void DetectLiveFaceByFileResponse::validate()
{
}

web::json::value DetectLiveFaceByFileResponse::toJson() const
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

bool DetectLiveFaceByFileResponse::fromJson(const web::json::value& val)
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

LiveDetectFaceResp_result DetectLiveFaceByFileResponse::getResult() const
{
    return result_;
}

void DetectLiveFaceByFileResponse::setResult(const LiveDetectFaceResp_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DetectLiveFaceByFileResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DetectLiveFaceByFileResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::vector<WarningList>& DetectLiveFaceByFileResponse::getWarningList()
{
    return warningList_;
}

void DetectLiveFaceByFileResponse::setWarningList(const std::vector<WarningList>& value)
{
    warningList_ = value;
    warningListIsSet_ = true;
}

bool DetectLiveFaceByFileResponse::warningListIsSet() const
{
    return warningListIsSet_;
}

void DetectLiveFaceByFileResponse::unsetwarningList()
{
    warningListIsSet_ = false;
}

}
}
}
}
}


