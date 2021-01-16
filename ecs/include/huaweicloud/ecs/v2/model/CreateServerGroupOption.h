
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  CreateServerGroupOption
    : public ModelBase
{
public:
    CreateServerGroupOption();
    virtual ~CreateServerGroupOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateServerGroupOption members

    /// <summary>
    /// 弹性云服务器组名称，长度大于0小于256字节。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 与云服务器组关联的策略名称列表。包括：  - anti-affinity：此组中的弹性云服务器必须安排到不同的主机。  - affinity：此组中的弹性云服务器必须安排在同一主机上。  - soft-anti-affinity：如果可能，应将此组中的云服务器尽量安排到不同的主机上，但如果无法实现，则仍应安排它们，而不是导致生成失败。  - soft-affinity：如果可能，应将此组中的弹性云服务器尽量安排在同一主机上， 但如果无法实现，则仍应安排它们，而不是导致生成失败。    &gt; 说明：  - 当前仅支持反亲和性anti-affinity策略。
    /// </summary>

    std::vector<std::string>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreateServerGroupOption_H_
