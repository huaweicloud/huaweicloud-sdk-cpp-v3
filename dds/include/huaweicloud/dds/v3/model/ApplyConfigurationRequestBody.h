
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ApplyConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ApplyConfigurationRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ApplyConfigurationRequestBody
    : public ModelBase
{
public:
    ApplyConfigurationRequestBody();
    virtual ~ApplyConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ApplyConfigurationRequestBody members

    /// <summary>
    /// 实例ID或组ID或节点ID的列表对象。可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。 - 当变更的实例类型是集群，如果变更的是shard组或者config组的参数模板，传值为组ID。如果变更的是mongos节点的参数模板，传值为节点ID。 - 当变更的实例类型是副本集或单节点，传值为实例ID。
    /// </summary>

    std::vector<std::string>& getEntityIds();
    bool entityIdsIsSet() const;
    void unsetentityIds();
    void setEntityIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> entityIds_;
    bool entityIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ApplyConfigurationRequestBody_H_
