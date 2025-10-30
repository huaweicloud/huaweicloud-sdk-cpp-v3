
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchoverReplicaSetRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchoverReplicaSetRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SwitchoverReplicaSetRequestBody
    : public ModelBase
{
public:
    SwitchoverReplicaSetRequestBody();
    virtual ~SwitchoverReplicaSetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchoverReplicaSetRequestBody members

    /// <summary>
    /// **参数解释** 组ID。 **约束限制** 不涉及。 **取值范围** - 对于集群实例，该参数为shard组ID或config组ID。可以调用“查询实例列表和详情”接口获取。 - 对于副本集实例，不传该参数。 **默认取值** 不涉及。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SwitchoverReplicaSetRequestBody_H_
