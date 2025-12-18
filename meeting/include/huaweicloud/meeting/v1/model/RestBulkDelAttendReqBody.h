
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBulkDelAttendReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBulkDelAttendReqBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/DelAttendInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除与会者请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestBulkDelAttendReqBody
    : public ModelBase
{
public:
    RestBulkDelAttendReqBody();
    virtual ~RestBulkDelAttendReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestBulkDelAttendReqBody members

    /// <summary>
    /// 待删除会场列表。
    /// </summary>

    std::vector<DelAttendInfo>& getBulkDelAttendInfo();
    bool bulkDelAttendInfoIsSet() const;
    void unsetbulkDelAttendInfo();
    void setBulkDelAttendInfo(const std::vector<DelAttendInfo>& value);


protected:
    std::vector<DelAttendInfo> bulkDelAttendInfo_;
    bool bulkDelAttendInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBulkDelAttendReqBody_H_
