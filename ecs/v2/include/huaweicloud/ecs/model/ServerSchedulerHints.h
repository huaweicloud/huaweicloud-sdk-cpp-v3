
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerSchedulerHints_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerSchedulerHints_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 弹性云服务器调度信息。
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  ServerSchedulerHints
    : public ModelBase
{
public:
    ServerSchedulerHints();
    virtual ~ServerSchedulerHints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerSchedulerHints members

    /// <summary>
    /// 反亲和性组信息。  UUID格式。
    /// </summary>

    std::vector<std::string>& getGroup();
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::vector<std::string>& value);

    /// <summary>
    /// 在专属主机或共享池中创建弹性云服务器。默认为在共享池创建。值为： shared或dedicated。  - shared：表示共享池。 - dedicated:表示专属主机。  创建与查询此值均有效。
    /// </summary>

    std::vector<std::string>& getTenancy();
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::vector<std::string>& value);

    /// <summary>
    /// 专属主机ID。  此属性仅在tenancy值为dedicated时有效。  不指定此属性，系统将自动分配租户可自动放置弹性云服务器的专属主机。  创建与查询此值均有效。
    /// </summary>

    std::vector<std::string>& getDedicatedHostId();
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> group_;
    bool groupIsSet_;
    std::vector<std::string> tenancy_;
    bool tenancyIsSet_;
    std::vector<std::string> dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerSchedulerHints_H_
