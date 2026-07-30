
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogConfigResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogConfigResponse_H_


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
/// **参数解释：** 服务日志配置信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  LogConfigResponse
    : public ModelBase
{
public:
    LogConfigResponse();
    virtual ~LogConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogConfigResponse members

    /// <summary>
    /// **参数解释：** 日志输出类型。 **取值范围：** - STDOUT：日志输出到控制台或终端。 - EVENT：k8s事件。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志服务状态。 **取值范围：** - ON：开启。 - OFF：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志组ID，用户选择自己已有的日志组，不填时，会自动创建。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志流id，用户选择自己已有的日志组。不填时，会自动创建。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// **参数解释：** 日志流对应的部署ID。当日志策略为default或pool时有值。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDeploymentId() const;
    bool deploymentIdIsSet() const;
    void unsetdeploymentId();
    void setDeploymentId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string deploymentId_;
    bool deploymentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogConfigResponse_H_
