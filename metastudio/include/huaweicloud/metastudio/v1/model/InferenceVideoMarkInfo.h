
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceVideoMarkInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceVideoMarkInfo_H_


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
/// 分身数字人推理预处理视频标记信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InferenceVideoMarkInfo
    : public ModelBase
{
public:
    InferenceVideoMarkInfo();
    virtual ~InferenceVideoMarkInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InferenceVideoMarkInfo members

    /// <summary>
    /// 选取推理数据预处理视频起始时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getVideoStartTime() const;
    bool videoStartTimeIsSet() const;
    void unsetvideoStartTime();
    void setVideoStartTime(const std::string& value);

    /// <summary>
    /// 选取推理数据预处理视频结束时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getVideoEndTime() const;
    bool videoEndTimeIsSet() const;
    void unsetvideoEndTime();
    void setVideoEndTime(const std::string& value);

    /// <summary>
    /// 选取推理数据预处理智能交互视频起始时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getChatVideoStartTime() const;
    bool chatVideoStartTimeIsSet() const;
    void unsetchatVideoStartTime();
    void setChatVideoStartTime(const std::string& value);

    /// <summary>
    /// 选取推理数据预处理智能交互视频结束时间。格式：“HH:MM:SS.mmm”。
    /// </summary>

    std::string getChatVideoEndTime() const;
    bool chatVideoEndTimeIsSet() const;
    void unsetchatVideoEndTime();
    void setChatVideoEndTime(const std::string& value);


protected:
    std::string videoStartTime_;
    bool videoStartTimeIsSet_;
    std::string videoEndTime_;
    bool videoEndTimeIsSet_;
    std::string chatVideoStartTime_;
    bool chatVideoStartTimeIsSet_;
    std::string chatVideoEndTime_;
    bool chatVideoEndTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceVideoMarkInfo_H_
