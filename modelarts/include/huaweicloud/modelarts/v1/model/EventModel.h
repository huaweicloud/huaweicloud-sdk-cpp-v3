
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventModel_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventModel_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 事件描述信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  EventModel
    : public ModelBase
{
public:
    EventModel();
    virtual ~EventModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventModel members

    /// <summary>
    /// **参数描述**：API版本。 **取值范围**：可选值如下： - v1
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数描述**：资源类型。 **取值范围**：可选值如下： - Event：事件
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数描述**：事件类型。 **取值范围**：可选值如下： - Normal：正常 - Warning：异常
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数描述**：事件第一次出现时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getFirstTimestamp() const;
    bool firstTimestampIsSet() const;
    void unsetfirstTimestamp();
    void setFirstTimestamp(const std::string& value);

    /// <summary>
    /// **参数描述**：事件最后一次出现时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getLastTimestamp() const;
    bool lastTimestampIsSet() const;
    void unsetlastTimestamp();
    void setLastTimestamp(const std::string& value);

    /// <summary>
    /// **参数描述**：事件连续出现次数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数描述**：事件产生的原因。 **取值范围**：不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// **参数描述**：事件详细信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string firstTimestamp_;
    bool firstTimestampIsSet_;
    std::string lastTimestamp_;
    bool lastTimestampIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventModel_H_
