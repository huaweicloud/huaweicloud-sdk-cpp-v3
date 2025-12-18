
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBatchHandsUpReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBatchHandsUpReqBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量举手请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestBatchHandsUpReqBody
    : public ModelBase
{
public:
    RestBatchHandsUpReqBody();
    virtual ~RestBatchHandsUpReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestBatchHandsUpReqBody members

    /// <summary>
    /// - 0: 放下手 - 1: 举手
    /// </summary>

    int32_t getHandsState() const;
    bool handsStateIsSet() const;
    void unsethandsState();
    void setHandsState(int32_t value);

    /// <summary>
    /// 与会者标识列表。
    /// </summary>

    std::vector<std::string>& getPids();
    bool pidsIsSet() const;
    void unsetpids();
    void setPids(const std::vector<std::string>& value);


protected:
    int32_t handsState_;
    bool handsStateIsSet_;
    std::vector<std::string> pids_;
    bool pidsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBatchHandsUpReqBody_H_
