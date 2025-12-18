
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestLockSiteViewReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestLockSiteViewReqBody_H_


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
/// 锁定会场视频源请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestLockSiteViewReqBody
    : public ModelBase
{
public:
    RestLockSiteViewReqBody();
    virtual ~RestLockSiteViewReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestLockSiteViewReqBody members

    /// <summary>
    /// 锁定标志。 - 0: 取消锁定 - 1: 锁定
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 被锁定视频源的与会者标识。
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);


protected:
    int32_t status_;
    bool statusIsSet_;
    std::string participantID_;
    bool participantIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestLockSiteViewReqBody_H_
