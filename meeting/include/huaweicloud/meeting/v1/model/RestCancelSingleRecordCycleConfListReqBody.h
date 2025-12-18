
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestCancelSingleRecordCycleConfListReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestCancelSingleRecordCycleConfListReqBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestCancelSingleRecordCycleConfListReqBody
    : public ModelBase
{
public:
    RestCancelSingleRecordCycleConfListReqBody();
    virtual ~RestCancelSingleRecordCycleConfListReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestCancelSingleRecordCycleConfListReqBody members

    /// <summary>
    /// 待删除的子会议UUID列表。
    /// </summary>

    std::vector<std::string>& getCycleSubConfIDs();
    bool cycleSubConfIDsIsSet() const;
    void unsetcycleSubConfIDs();
    void setCycleSubConfIDs(const std::vector<std::string>& value);


protected:
    std::vector<std::string> cycleSubConfIDs_;
    bool cycleSubConfIDsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestCancelSingleRecordCycleConfListReqBody_H_
