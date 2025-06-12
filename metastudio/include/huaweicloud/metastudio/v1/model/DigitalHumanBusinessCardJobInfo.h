
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalHumanBusinessCardJobInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalHumanBusinessCardJobInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/OutputAssetInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数字人名片制作任务信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DigitalHumanBusinessCardJobInfo
    : public ModelBase
{
public:
    DigitalHumanBusinessCardJobInfo();
    virtual ~DigitalHumanBusinessCardJobInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DigitalHumanBusinessCardJobInfo members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务的状态。 * WAITING: 等待 * PROCESSING: 处理中 * SUCCEED: 成功 * FAILED: 失败 * CANCELED: 取消 * BLOCK: 冻结
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 数字人名片制作开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 数字人名片制作结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OutputAssetInfo getOutputAssetConfig() const;
    bool outputAssetConfigIsSet() const;
    void unsetoutputAssetConfig();
    void setOutputAssetConfig(const OutputAssetInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务更新时间。
    /// </summary>

    std::string getLastupdateTime() const;
    bool lastupdateTimeIsSet() const;
    void unsetlastupdateTime();
    void setLastupdateTime(const std::string& value);

    /// <summary>
    /// 数字人名片类型。 * 2D_DIGITAL_HUMAN_CARD：分身数字人名片
    /// </summary>

    std::string getBusinessCardType() const;
    bool businessCardTypeIsSet() const;
    void unsetbusinessCardType();
    void setBusinessCardType(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    OutputAssetInfo outputAssetConfig_;
    bool outputAssetConfigIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastupdateTime_;
    bool lastupdateTimeIsSet_;
    std::string businessCardType_;
    bool businessCardTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalHumanBusinessCardJobInfo_H_
