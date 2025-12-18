
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordInfoDO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordInfoDO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/SegmentDO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 响应基础类
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RecordInfoDO
    : public ModelBase
{
public:
    RecordInfoDO();
    virtual ~RecordInfoDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecordInfoDO members

    /// <summary>
    /// 会议主题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 会议录制开始时间
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 录制段落查询偏移量
    /// </summary>

    int32_t getSegmentOffset() const;
    bool segmentOffsetIsSet() const;
    void unsetsegmentOffset();
    void setSegmentOffset(int32_t value);

    /// <summary>
    /// 录制段落查询数量
    /// </summary>

    int32_t getSegmentLimit() const;
    bool segmentLimitIsSet() const;
    void unsetsegmentLimit();
    void setSegmentLimit(int32_t value);

    /// <summary>
    /// 录制段落总数
    /// </summary>

    int64_t getSegmentCount() const;
    bool segmentCountIsSet() const;
    void unsetsegmentCount();
    void setSegmentCount(int64_t value);

    /// <summary>
    /// 录制人工启动/停止分段列表
    /// </summary>

    std::vector<SegmentDO>& getSegmentList();
    bool segmentListIsSet() const;
    void unsetsegmentList();
    void setSegmentList(const std::vector<SegmentDO>& value);


protected:
    std::string subject_;
    bool subjectIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    int32_t segmentOffset_;
    bool segmentOffsetIsSet_;
    int32_t segmentLimit_;
    bool segmentLimitIsSet_;
    int64_t segmentCount_;
    bool segmentCountIsSet_;
    std::vector<SegmentDO> segmentList_;
    bool segmentListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordInfoDO_H_
