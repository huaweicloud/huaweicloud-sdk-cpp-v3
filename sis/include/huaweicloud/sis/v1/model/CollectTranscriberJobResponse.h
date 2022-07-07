
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_CollectTranscriberJobResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_CollectTranscriberJobResponse_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/Segment.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  CollectTranscriberJobResponse
    : public ModelBase, public HttpResponse
{
public:
    CollectTranscriberJobResponse();
    virtual ~CollectTranscriberJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CollectTranscriberJobResponse members

    /// <summary>
    /// 当前识别状态。具体状态如下所示：  WAITING 等待识别。 FINISHED 识别已经完成。 ERROR 识别过程中发生错误。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务创建时间, 遵循 RFC 3339格式。 格式示例：2018-12-04T13:10:29.310Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 开始识别时间, 遵循 RFC 3339格式。 当status为FINISHED或ERROR时存在。 格式示例：2018-12-04T13:10:29.310Z。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 识别完成时间, 遵循 RFC 3339格式。 当status为FINISHED或ERROR时存在。 格式示例：2018-12-04T13:10:29.310Z。 
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// 转写结果, 多句结果的数组。 
    /// </summary>

    std::vector<Segment>& getSegments();
    bool segmentsIsSet() const;
    void unsetsegments();
    void setSegments(const std::vector<Segment>& value);

    /// <summary>
    /// 音频时长，单位ms
    /// </summary>

    int32_t getAudioDuration() const;
    bool audioDurationIsSet() const;
    void unsetaudioDuration();
    void setAudioDuration(int32_t value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    std::vector<Segment> segments_;
    bool segmentsIsSet_;
    int32_t audioDuration_;
    bool audioDurationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_CollectTranscriberJobResponse_H_
