
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
    /// 待重启对象的类型。 - 重启集群实例下的节点时，该参数必选。取值为“mongos”、“shard”、或“config”。 - 重启整个实例时，不传该参数。
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 待重启对象的ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。 - 重启集群实例下的节点时，对于mongos节点，取值为mongos节点ID，对于shard和config组，取值为shard和config组ID。 - 重启整个实例时，取值为实例ID。
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);


protected:
    std::string targetType_;
    bool targetTypeIsSet_;
    std::string targetId_;
    bool targetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestartInstanceRequestBody_H_
