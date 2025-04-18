
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceOption_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceOption_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_DDS_V3_EXPORT  ResizeInstanceOption
    : public ModelBase
{
public:
    ResizeInstanceOption();
    virtual ~ResizeInstanceOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeInstanceOption members

    /// <summary>
    /// 对象类型。 - 对于集群实例，该参数为必选。变更mongos节点规格时，取值为“mongos”；变更单个shard组规格、或者批量变更多个shard组规格时，取值为“shard”，变更config组规格时，取值为\&quot;config\&quot;。 - 对于副本集实例，不传该参数。变更readonly节点规格时,取值为“readonly”。 - 对于单节点实例，不传该参数。
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 待变更规格的节点ID或实例ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。 - 对于集群实例，变更mongos节点规格时，取值为mongos节点ID；变更单个shard组规格时，取值为shard组ID；批量变更多个shard组规格时，不传该参数；变更config组规格时，取值为config组的ID。 - 对于副本集实例，取值为相应的实例ID。变更readonly节点规格时，取值为readonly节点ID。 - 对于单节点实例，取值为相应的实例ID。
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);

    /// <summary>
    /// 待变更规格的节点组ID列表，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。 - 对于集群实例，变更mongos节点规格时，不传该参数；变更单个shard组规格时，不传该参数；变更config组规格时，不传该参数；批量变更多个shard组规格时，取值为相应的多个shard组ID，最多支持16个shard组批量变更。 - 对于副本集实例，不传该参数。 - 对于单节点实例，不传该参数。
    /// </summary>

    std::vector<std::string>& getTargetIds();
    bool targetIdsIsSet() const;
    void unsettargetIds();
    void setTargetIds(const std::vector<std::string>& value);

    /// <summary>
    /// 变更至新规格的资源规格编码。
    /// </summary>

    std::string getTargetSpecCode() const;
    bool targetSpecCodeIsSet() const;
    void unsettargetSpecCode();
    void setTargetSpecCode(const std::string& value);


protected:
    std::string targetType_;
    bool targetTypeIsSet_;
    std::string targetId_;
    bool targetIdIsSet_;
    std::vector<std::string> targetIds_;
    bool targetIdsIsSet_;
    std::string targetSpecCode_;
    bool targetSpecCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceOption_H_
