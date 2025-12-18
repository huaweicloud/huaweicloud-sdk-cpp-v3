
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestVideoBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestVideoBody_H_


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
/// 主持人邀请与会者开启/关闭摄像头请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestVideoBody
    : public ModelBase
{
public:
    RestVideoBody();
    virtual ~RestVideoBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestVideoBody members

    /// <summary>
    /// 主持人邀请与会者开启/关闭摄像头请求。 * 1：关闭视频 * 0：开启视频 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestVideoBody_H_
