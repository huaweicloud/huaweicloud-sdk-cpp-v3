
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Storage_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Storage_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/StorageGroups.h>
#include <vector>
#include <huaweicloud/cce/v3/model/StorageSelectors.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 磁盘初始化配置管理参数。  该参数配置逻辑较为复杂，详细说明请参见[节点磁盘挂载](node_storage_example.xml)。  该参数缺省时，按照extendParam中的DockerLVMConfigOverride（已废弃）参数进行磁盘管理。此参数对1.15.11及以上集群版本支持。  &gt; 如存在节点规格涉及本地盘并同时使用云硬盘场景时，请勿缺省此参数，避免出现将用户未期望的磁盘分区。  &gt; 如希望数据盘取值范围调整至20-32768，请勿缺省此参数。  &gt; 如希望使用共享磁盘空间(取消runtime和kubernetes分区)，请勿缺省此参数，共享磁盘空间请参考[数据盘空间分配说明](cce_01_0341.xml)。 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Storage
    : public ModelBase
{
public:
    Storage();
    virtual ~Storage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Storage members

    /// <summary>
    /// 磁盘选择，根据matchLabels和storageType对匹配的磁盘进行管理。磁盘匹配存在先后顺序，靠前的匹配规则优先匹配。
    /// </summary>

    std::vector<StorageSelectors>& getStorageSelectors();
    bool storageSelectorsIsSet() const;
    void unsetstorageSelectors();
    void setStorageSelectors(const std::vector<StorageSelectors>& value);

    /// <summary>
    /// 由多个存储设备组成的存储组，用于各个存储空间的划分。
    /// </summary>

    std::vector<StorageGroups>& getStorageGroups();
    bool storageGroupsIsSet() const;
    void unsetstorageGroups();
    void setStorageGroups(const std::vector<StorageGroups>& value);


protected:
    std::vector<StorageSelectors> storageSelectors_;
    bool storageSelectorsIsSet_;
    std::vector<StorageGroups> storageGroups_;
    bool storageGroupsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Storage_H_
