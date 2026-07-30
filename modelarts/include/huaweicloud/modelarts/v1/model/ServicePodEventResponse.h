
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServicePodEventResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServicePodEventResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServicePodEventResponse
    : public ModelBase
{
public:
    ServicePodEventResponse();
    virtual ~ServicePodEventResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServicePodEventResponse members

    /// <summary>
    /// **参数解释：** 事件发生次数。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释：** 首次发生时间。 **取值范围：** 不涉及。
    /// </summary>

    utility::datetime getFirstTimestamp() const;
    bool firstTimestampIsSet() const;
    void unsetfirstTimestamp();
    void setFirstTimestamp(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 最近发生时间。 **取值范围：** 不涉及。
    /// </summary>

    utility::datetime getLastTimestamp() const;
    bool lastTimestampIsSet() const;
    void unsetlastTimestamp();
    void setLastTimestamp(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 事件信息。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数解释：** 上报该事件的k8s组件名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getReportingComponent() const;
    bool reportingComponentIsSet() const;
    void unsetreportingComponent();
    void setReportingComponent(const std::string& value);

    /// <summary>
    /// **参数解释：** 事件类型。 **取值范围：** Normal/Warning。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    utility::datetime firstTimestamp_;
    bool firstTimestampIsSet_;
    utility::datetime lastTimestamp_;
    bool lastTimestampIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string reportingComponent_;
    bool reportingComponentIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServicePodEventResponse_H_
