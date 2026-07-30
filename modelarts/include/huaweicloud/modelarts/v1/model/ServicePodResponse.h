
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServicePodResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServicePodResponse_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServicePodResponse
    : public ModelBase
{
public:
    ServicePodResponse();
    virtual ~ServicePodResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServicePodResponse members

    /// <summary>
    /// **参数解释：** od ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodId() const;
    bool podIdIsSet() const;
    void unsetpodId();
    void setPodId(const std::string& value);

    /// <summary>
    /// **参数解释：** pod名字。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodName() const;
    bool podNameIsSet() const;
    void unsetpodName();
    void setPodName(const std::string& value);

    /// <summary>
    /// **参数解释：** pod所在node的IP。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodNodeIp() const;
    bool podNodeIpIsSet() const;
    void unsetpodNodeIp();
    void setPodNodeIp(const std::string& value);

    /// <summary>
    /// **参数解释：** pod所在node的名字。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodNodeName() const;
    bool podNodeNameIsSet() const;
    void unsetpodNodeName();
    void setPodNodeName(const std::string& value);

    /// <summary>
    /// **参数解释：** pod角色。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPodRole() const;
    bool podRoleIsSet() const;
    void unsetpodRole();
    void setPodRole(const std::string& value);

    /// <summary>
    /// **参数解释：** pod服务状态。 **取值范围：** 有7种状态。RUNNING（运行中）、PENDING（未就绪）、SUCCEEDED（成功）、FAILED（失败）、ABNORMAL（异常）、UNKNOWN（未知）、DELETED（已删除）。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 最近更新时间。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);


protected:
    std::string podId_;
    bool podIdIsSet_;
    std::string podName_;
    bool podNameIsSet_;
    std::string podNodeIp_;
    bool podNodeIpIsSet_;
    std::string podNodeName_;
    bool podNodeNameIsSet_;
    std::string podRole_;
    bool podRoleIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServicePodResponse_H_
