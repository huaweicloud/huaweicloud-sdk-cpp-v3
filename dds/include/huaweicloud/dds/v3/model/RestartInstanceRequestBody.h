
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestartInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestartInstanceRequestBody_H_


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
class HUAWEICLOUD_DDS_V3_EXPORT  RestartInstanceRequestBody
    : public ModelBase
{
public:
    RestartInstanceRequestBody();
    virtual ~RestartInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestartInstanceRequestBody members

    /// <summary>
    /// **参数解释：** 待重启对象的类型。 **约束限制：** 重启集群实例下的节点或组时，该参数必选。 - 重启mongos节点时，取值为“mongos”。 - 重启shard组时，取值为“shard”。 - 重启config组时，取值为“config”。 - 重启实例（集群、副本集、单节点）时，不传该参数。 **取值范围：** - mongos - shard - config **默认取值：** 不涉及。
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// **参数解释：** 待重启对象的ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。 **约束限制：** 节点状态为正常时，不允许重启主节点。 **取值范围：** - 重启整个实例时，取值为实例ID。 - 重启集群实例shard或config组时取值为shard或config的组ID。 - 重启单个节点时，取值为对应节点的节点ID。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否选择节点串行重启。 **约束限制：** 只支持副本集实例。 **取值范围：** - true：表示节点串行重启。 - false：表示节点并行重启。 **默认取值：** false。
    /// </summary>

    bool isIsSerial() const;
    bool isSerialIsSet() const;
    void unsetisSerial();
    void setIsSerial(bool value);

    /// <summary>
    /// **参数解释：** 是否强制重启。 **约束限制：** 仅支持节点状态为异常时进行强制重启。只读节点暂不支持强制重启。 **取值范围：** - true：表示异常节点进行强制重启。 - false：表示进行正常重启。 **默认取值：** false。
    /// </summary>

    bool isIsForce() const;
    bool isForceIsSet() const;
    void unsetisForce();
    void setIsForce(bool value);


protected:
    std::string targetType_;
    bool targetTypeIsSet_;
    std::string targetId_;
    bool targetIdIsSet_;
    bool isSerial_;
    bool isSerialIsSet_;
    bool isForce_;
    bool isForceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestartInstanceRequestBody_H_
