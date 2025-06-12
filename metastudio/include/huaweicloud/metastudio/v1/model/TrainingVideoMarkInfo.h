
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingVideoMarkInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingVideoMarkInfo_H_


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
/// 分身数字训练视频标记信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TrainingVideoMarkInfo
    : public ModelBase
{
public:
    TrainingVideoMarkInfo();
    virtual ~TrainingVideoMarkInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingVideoMarkInfo members

    /// <summary>
    /// 训练视频起始时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getVideoStartTime() const;
    bool videoStartTimeIsSet() const;
    void unsetvideoStartTime();
    void setVideoStartTime(const std::string& value);

    /// <summary>
    /// 训练视频结束时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getVideoEndTime() const;
    bool videoEndTimeIsSet() const;
    void unsetvideoEndTime();
    void setVideoEndTime(const std::string& value);


protected:
    std::string videoStartTime_;
    bool videoStartTimeIsSet_;
    std::string videoEndTime_;
    bool videoEndTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TrainingVideoMarkInfo_H_
