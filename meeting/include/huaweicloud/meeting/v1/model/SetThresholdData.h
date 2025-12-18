
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetThresholdData_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetThresholdData_H_


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
/// 阈值阈值设置请求体。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SetThresholdData
    : public ModelBase
{
public:
    SetThresholdData();
    virtual ~SetThresholdData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetThresholdData members

    /// <summary>
    /// 接收方向阈值设定值，单位为毫秒(ms)。 取值范围：0 - 10000。
    /// </summary>

    int32_t getReceiving() const;
    bool receivingIsSet() const;
    void unsetreceiving();
    void setReceiving(int32_t value);

    /// <summary>
    /// 发送方向阈值设定值，单位为毫秒(ms)。 取值范围：0 - 10000。
    /// </summary>

    int32_t getSending() const;
    bool sendingIsSet() const;
    void unsetsending();
    void setSending(int32_t value);


protected:
    int32_t receiving_;
    bool receivingIsSet_;
    int32_t sending_;
    bool sendingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetThresholdData_H_
