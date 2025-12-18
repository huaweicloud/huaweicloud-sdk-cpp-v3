
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetMmrRecordReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetMmrRecordReqBody_H_


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
/// rest设置MMR录播启停请求体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSetMmrRecordReqBody
    : public ModelBase
{
public:
    RestSetMmrRecordReqBody();
    virtual ~RestSetMmrRecordReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSetMmrRecordReqBody members

    /// <summary>
    /// 0：暂停MMR会议录制 1：启动MMR会议录制 2：停止MMR会议录制
    /// </summary>

    int32_t getRecordType() const;
    bool recordTypeIsSet() const;
    void unsetrecordType();
    void setRecordType(int32_t value);


protected:
    int32_t recordType_;
    bool recordTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetMmrRecordReqBody_H_
