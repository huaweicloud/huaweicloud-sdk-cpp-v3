
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_TranscodeInfoResult_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_TranscodeInfoResult_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  TranscodeInfoResult
    : public ModelBase
{
public:
    TranscodeInfoResult();
    virtual ~TranscodeInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TranscodeInfoResult members

    /// <summary>
    /// 转码模板名 
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 转码进度 
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 转码开始处理时间，格式按照RFC3339，UTC时间，如2020-09-01T18:50:20Z 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 等待时长，单位为秒，当值为非-1时有效 
    /// </summary>

    int32_t getWaitingTime() const;
    bool waitingTimeIsSet() const;
    void unsetwaitingTime();
    void setWaitingTime(int32_t value);

    /// <summary>
    /// 处理时长，单位为秒，当值为非-1时有效 
    /// </summary>

    int32_t getProcessTime() const;
    bool processTimeIsSet() const;
    void unsetprocessTime();
    void setProcessTime(int32_t value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    int32_t waitingTime_;
    bool waitingTimeIsSet_;
    int32_t processTime_;
    bool processTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_TranscodeInfoResult_H_
