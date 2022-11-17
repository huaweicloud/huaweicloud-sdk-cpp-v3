
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationResult_status_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationResult_status_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 对应票证的状态信息及状态码
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  AutoClassificationResult_status
    : public ModelBase
{
public:
    AutoClassificationResult_status();
    virtual ~AutoClassificationResult_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AutoClassificationResult_status members

    /// <summary>
    /// 指示各对应票证的状态码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 指示各对应票证的状态信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationResult_status_H_
