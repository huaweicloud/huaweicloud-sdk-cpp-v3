
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetRecordReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetRecordReqBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 启停会议录制请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSetRecordReqBody
    : public ModelBase
{
public:
    RestSetRecordReqBody();
    virtual ~RestSetRecordReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSetRecordReqBody members

    /// <summary>
    /// 录制启停开关。默认值为0。 - 0: 停止会议录制 - 1: 启动会议录制
    /// </summary>

    int32_t getIsRecord() const;
    bool isRecordIsSet() const;
    void unsetisRecord();
    void setIsRecord(int32_t value);


protected:
    int32_t isRecord_;
    bool isRecordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetRecordReqBody_H_
