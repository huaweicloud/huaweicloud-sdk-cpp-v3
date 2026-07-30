
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInstanceResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInstanceResponse_H_


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
/// 服务实例列表。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceInstanceResponse
    : public ModelBase
{
public:
    ServiceInstanceResponse();
    virtual ~ServiceInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceInstanceResponse members

    /// <summary>
    /// **参数解释：** 服务实例名字。 **取值范围：** 不涉及。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例状态。 **取值范围：** - RUNNING：运行中 - PENDING：未就绪 - CONCERNING：告警 - FAILED：失败 - UNKNOWN：未知 - DELETED：已删除
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务实例权重。 **取值范围：** [0, 100] 或者为空。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);

    /// <summary>
    /// **参数解释：** 服务实例pod数量。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getPodCount() const;
    bool podCountIsSet() const;
    void unsetpodCount();
    void setPodCount(int64_t value);

    /// <summary>
    /// **参数解释：** 服务实例运行中pod数量。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getRunningPodCount() const;
    bool runningPodCountIsSet() const;
    void unsetrunningPodCount();
    void setRunningPodCount(int64_t value);

    /// <summary>
    /// **参数解释：** 服务实例最近更新时间。 **取值范围：** 不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);


protected:
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t weight_;
    bool weightIsSet_;
    int64_t podCount_;
    bool podCountIsSet_;
    int64_t runningPodCount_;
    bool runningPodCountIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceInstanceResponse_H_
