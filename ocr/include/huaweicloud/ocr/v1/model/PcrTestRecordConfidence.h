
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordConfidence_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  PcrTestRecordConfidence
    : public ModelBase
{
public:
    PcrTestRecordConfidence();
    virtual ~PcrTestRecordConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PcrTestRecordConfidence members

    /// <summary>
    /// 姓名的置信度 
    /// </summary>

    float getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(float value);

    /// <summary>
    /// 核酸检测采样时间的置信度 
    /// </summary>

    float getSamplingTime() const;
    bool samplingTimeIsSet() const;
    void unsetsamplingTime();
    void setSamplingTime(float value);

    /// <summary>
    /// 核酸检测结果更新时间的置信度 
    /// </summary>

    float getTestTime() const;
    bool testTimeIsSet() const;
    void unsettestTime();
    void setTestTime(float value);

    /// <summary>
    /// 核酸检测结果的置信度 
    /// </summary>

    float getTestResult() const;
    bool testResultIsSet() const;
    void unsettestResult();
    void setTestResult(float value);


protected:
    float name_;
    bool nameIsSet_;
    float samplingTime_;
    bool samplingTimeIsSet_;
    float testTime_;
    bool testTimeIsSet_;
    float testResult_;
    bool testResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_PcrTestRecordConfidence_H_
