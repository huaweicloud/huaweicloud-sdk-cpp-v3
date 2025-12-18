
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestHandsUpReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestHandsUpReqBody_H_


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
/// 举手请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestHandsUpReqBody
    : public ModelBase
{
public:
    RestHandsUpReqBody();
    virtual ~RestHandsUpReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestHandsUpReqBody members

    /// <summary>
    /// - 0: 放下手 - 1: 举手
    /// </summary>

    int32_t getHandsState() const;
    bool handsStateIsSet() const;
    void unsethandsState();
    void setHandsState(int32_t value);


protected:
    int32_t handsState_;
    bool handsStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestHandsUpReqBody_H_
