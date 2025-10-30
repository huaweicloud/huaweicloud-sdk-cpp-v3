
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Metadata_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Metadata_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Metadata
    : public ModelBase
{
public:
    Metadata();
    virtual ~Metadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Metadata members

    /// <summary>
    /// 告警类型
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// 告警id
    /// </summary>

    std::string getEventId() const;
    bool eventIdIsSet() const;
    void unseteventId();
    void setEventId(const std::string& value);

    /// <summary>
    /// 告警级别
    /// </summary>

    std::string getEventSeverity() const;
    bool eventSeverityIsSet() const;
    void unseteventSeverity();
    void setEventSeverity(const std::string& value);

    /// <summary>
    /// 告警名称
    /// </summary>

    std::string getEventName() const;
    bool eventNameIsSet() const;
    void unseteventName();
    void setEventName(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 日志组/流名称
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 告警源
    /// </summary>

    std::string getResourceProvider() const;
    bool resourceProviderIsSet() const;
    void unsetresourceProvider();
    void setResourceProvider(const std::string& value);

    /// <summary>
    /// 告警规则类型(SQL/关键词)
    /// </summary>

    std::string getLtsAlarmType() const;
    bool ltsAlarmTypeIsSet() const;
    void unsetltsAlarmType();
    void setLtsAlarmType(const std::string& value);

    /// <summary>
    /// 日志组原始名称
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 日志流原始名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// **参数解释：** 告警类型。 **取值范围：** - sql： sql告警 - keywords：关键词告警
    /// </summary>

    std::string getEventSubtype() const;
    bool eventSubtypeIsSet() const;
    void unseteventSubtype();
    void setEventSubtype(const std::string& value);


protected:
    std::string eventType_;
    bool eventTypeIsSet_;
    std::string eventId_;
    bool eventIdIsSet_;
    std::string eventSeverity_;
    bool eventSeverityIsSet_;
    std::string eventName_;
    bool eventNameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceProvider_;
    bool resourceProviderIsSet_;
    std::string ltsAlarmType_;
    bool ltsAlarmTypeIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string eventSubtype_;
    bool eventSubtypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Metadata_H_
