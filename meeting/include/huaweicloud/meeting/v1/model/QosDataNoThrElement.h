
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosDataNoThrElement_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosDataNoThrElement_H_


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
/// 不含阈值告警的QoS数据元素，包括时间，QoS取值。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QosDataNoThrElement
    : public ModelBase
{
public:
    QosDataNoThrElement();
    virtual ~QosDataNoThrElement();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QosDataNoThrElement members

    /// <summary>
    /// Qos时间点, UTC时间，格式：yyyy-MM-ddTHH:mm:ss.SSSZ。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// QoS值。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string time_;
    bool timeIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosDataNoThrElement_H_
