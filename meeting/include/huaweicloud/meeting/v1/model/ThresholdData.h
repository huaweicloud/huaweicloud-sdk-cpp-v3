
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ThresholdData_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ThresholdData_H_


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
/// 阈值查询结果结构体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ThresholdData
    : public ModelBase
{
public:
    ThresholdData();
    virtual ~ThresholdData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThresholdData members

    /// <summary>
    /// 自定义接收方向阈值，单位为毫秒(ms)
    /// </summary>

    int32_t getReceiving() const;
    bool receivingIsSet() const;
    void unsetreceiving();
    void setReceiving(int32_t value);

    /// <summary>
    /// 默认接收方向阈值，单位为毫秒(ms)
    /// </summary>

    int32_t getReceivingDefault() const;
    bool receivingDefaultIsSet() const;
    void unsetreceivingDefault();
    void setReceivingDefault(int32_t value);

    /// <summary>
    /// 自定义发送方向阈值，单位为毫秒(ms)
    /// </summary>

    int32_t getSending() const;
    bool sendingIsSet() const;
    void unsetsending();
    void setSending(int32_t value);

    /// <summary>
    /// 默认发送方向阈值，单位为毫秒(ms)
    /// </summary>

    int32_t getSendingDefault() const;
    bool sendingDefaultIsSet() const;
    void unsetsendingDefault();
    void setSendingDefault(int32_t value);


protected:
    int32_t receiving_;
    bool receivingIsSet_;
    int32_t receivingDefault_;
    bool receivingDefaultIsSet_;
    int32_t sending_;
    bool sendingIsSet_;
    int32_t sendingDefault_;
    bool sendingDefaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ThresholdData_H_
