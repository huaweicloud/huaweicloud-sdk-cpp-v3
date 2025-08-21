
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowLogsCountRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowLogsCountRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowLogsCountRequest
    : public ModelBase
{
public:
    ShowLogsCountRequest();
    virtual ~ShowLogsCountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLogsCountRequest members

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 时间范围  **约束限制**： 不涉及 **取值范围**： 0为近一时 1近一天 2近七天   **默认取值**： 不涉及
    /// </summary>

    int32_t getRange() const;
    bool rangeIsSet() const;
    void unsetrange();
    void setRange(int32_t value);

    /// <summary>
    /// **参数解释**： 开始时间 **约束限制**： 不涉及 **取值范围**： 毫秒级时间戳 **默认取值**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 结束时间 **约束限制**： 不涉及 **取值范围**： 毫秒级时间戳 **默认取值**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： VGW ID **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getVgwId();
    bool vgwIdIsSet() const;
    void unsetvgwId();
    void setVgwId(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 聚合类型 **约束限制**： 不涉及 **取值范围**： risk_ip 访问风险IP数量 risk_host 访问风险域名数量  open_port 开放端口的数量 **默认取值**： 不涉及
    /// </summary>

    std::string getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const std::string& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t range_;
    bool rangeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> vgwId_;
    bool vgwIdIsSet_;
    std::string item_;
    bool itemIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowLogsCountRequest& dereference_from_shared_ptr(std::shared_ptr<ShowLogsCountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowLogsCountRequest_H_
