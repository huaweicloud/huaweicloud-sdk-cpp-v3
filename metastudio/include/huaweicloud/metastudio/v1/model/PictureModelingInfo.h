
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PictureModelingInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PictureModelingInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/DigitalHumanModelingJobInfo.h>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 照片建模任务详情。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PictureModelingInfo
    : public ModelBase
{
public:
    PictureModelingInfo();
    virtual ~PictureModelingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PictureModelingInfo members

    /// <summary>
    /// 照片建模任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务的状态。 * WAITING：等待任务调度 * PROCESSING：正在处理 * PARTIAL_SUCCEED：部分成功（模型生成，截图失败） * SUCCEED：成功 * FAILED：失败 * CANCELED：取消
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 任务开始时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务结束时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 模型资产ID。
    /// </summary>

    std::string getModelAssetId() const;
    bool modelAssetIdIsSet() const;
    void unsetmodelAssetId();
    void setModelAssetId(const std::string& value);

    /// <summary>
    /// 数字人模型名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 风格ID。
    /// </summary>

    std::string getStyleId() const;
    bool styleIdIsSet() const;
    void unsetstyleId();
    void setStyleId(const std::string& value);

    /// <summary>
    /// 模型封面URL。
    /// </summary>

    std::string getModelCoverUrl() const;
    bool modelCoverUrlIsSet() const;
    void unsetmodelCoverUrl();
    void setModelCoverUrl(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string styleId_;
    bool styleIdIsSet_;
    std::string modelCoverUrl_;
    bool modelCoverUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PictureModelingInfo_H_
