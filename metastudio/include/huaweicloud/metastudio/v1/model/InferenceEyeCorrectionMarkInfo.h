
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceEyeCorrectionMarkInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceEyeCorrectionMarkInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分身数字人推理预处理眼神矫正信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InferenceEyeCorrectionMarkInfo
    : public ModelBase
{
public:
    InferenceEyeCorrectionMarkInfo();
    virtual ~InferenceEyeCorrectionMarkInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InferenceEyeCorrectionMarkInfo members

    /// <summary>
    /// 选取推理数据预处理眼神矫正起始时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getEyeCorrectionStartTime() const;
    bool eyeCorrectionStartTimeIsSet() const;
    void unseteyeCorrectionStartTime();
    void setEyeCorrectionStartTime(const std::string& value);

    /// <summary>
    /// 选取推理数据预处理眼神矫正结束时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getEyeCorrectionEndTime() const;
    bool eyeCorrectionEndTimeIsSet() const;
    void unseteyeCorrectionEndTime();
    void setEyeCorrectionEndTime(const std::string& value);


protected:
    std::string eyeCorrectionStartTime_;
    bool eyeCorrectionStartTimeIsSet_;
    std::string eyeCorrectionEndTime_;
    bool eyeCorrectionEndTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceEyeCorrectionMarkInfo_H_
