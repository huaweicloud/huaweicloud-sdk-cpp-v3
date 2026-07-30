
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceEventResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceEventResponse_H_


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
/// 服务事件信息响应数据模型
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceEventResponse
    : public ModelBase
{
public:
    ServiceEventResponse();
    virtual ~ServiceEventResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceEventResponse members

    /// <summary>
    /// **参数解释：** 服务事件ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务版本ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getServiceVersionId() const;
    bool serviceVersionIdIsSet() const;
    void unsetserviceVersionId();
    void setServiceVersionId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务事件发生计数 **取值范围：** 不涉及。
    /// </summary>

    int32_t getEventCount() const;
    bool eventCountIsSet() const;
    void unseteventCount();
    void setEventCount(int32_t value);

    /// <summary>
    /// **参数解释：** 服务事件类型：NORMAL/ABNORMAL/WARNING **取值范围：** 不涉及。
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务事件信息（英文） **取值范围：** 不涉及。
    /// </summary>

    std::string getEventInfo() const;
    bool eventInfoIsSet() const;
    void unseteventInfo();
    void setEventInfo(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务事件信息（中文） **取值范围：** 不涉及。
    /// </summary>

    std::string getEventInfoCn() const;
    bool eventInfoCnIsSet() const;
    void unseteventInfoCn();
    void setEventInfoCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务事件第一次发生时间 **取值范围：** 不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释：** 服务事件最后发生时间 **取值范围：** 不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string serviceVersionId_;
    bool serviceVersionIdIsSet_;
    int32_t eventCount_;
    bool eventCountIsSet_;
    std::string eventType_;
    bool eventTypeIsSet_;
    std::string eventInfo_;
    bool eventInfoIsSet_;
    std::string eventInfoCn_;
    bool eventInfoCnIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceEventResponse_H_
