
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBulkHangUpReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBulkHangUpReqBody_H_


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
/// 邀请与会者请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestBulkHangUpReqBody
    : public ModelBase
{
public:
    RestBulkHangUpReqBody();
    virtual ~RestBulkHangUpReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestBulkHangUpReqBody members

    /// <summary>
    /// 批量挂断会场列表，列表元素为与会者标识。
    /// </summary>

    std::vector<std::string>& getBulkHangUpParticipants();
    bool bulkHangUpParticipantsIsSet() const;
    void unsetbulkHangUpParticipants();
    void setBulkHangUpParticipants(const std::vector<std::string>& value);


protected:
    std::vector<std::string> bulkHangUpParticipants_;
    bool bulkHangUpParticipantsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBulkHangUpReqBody_H_
