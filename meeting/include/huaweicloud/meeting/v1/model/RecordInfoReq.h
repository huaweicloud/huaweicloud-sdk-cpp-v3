
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordInfoReq_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordInfoReq_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 录制会议文件信息请求体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RecordInfoReq
    : public ModelBase
{
public:
    RecordInfoReq();
    virtual ~RecordInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecordInfoReq members

    /// <summary>
    /// 会议uuid
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

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


protected:
    std::string confUUID_;
    bool confUUIDIsSet_;
    int32_t segmentOffset_;
    bool segmentOffsetIsSet_;
    int32_t segmentLimit_;
    bool segmentLimitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordInfoReq_H_
