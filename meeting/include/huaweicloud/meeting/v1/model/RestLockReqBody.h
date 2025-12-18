
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestLockReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestLockReqBody_H_


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
/// 锁定会议请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestLockReqBody
    : public ModelBase
{
public:
    RestLockReqBody();
    virtual ~RestLockReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestLockReqBody members

    /// <summary>
    /// - 0: 解锁 - 1: 锁定
    /// </summary>

    int32_t getIsLock() const;
    bool isLockIsSet() const;
    void unsetisLock();
    void setIsLock(int32_t value);


protected:
    int32_t isLock_;
    bool isLockIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestLockReqBody_H_
