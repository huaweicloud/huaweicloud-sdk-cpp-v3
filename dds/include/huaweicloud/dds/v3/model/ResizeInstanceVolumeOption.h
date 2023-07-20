
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceVolumeOption_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceVolumeOption_H_

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
class HUAWEICLOUD_DDS_V3_EXPORT  ResizeInstanceVolumeOption
    : public ModelBase
{
public:
    ResizeInstanceVolumeOption();
    virtual ~ResizeInstanceVolumeOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizeInstanceVolumeOption members

    /// <summary>
    /// 待扩容到的磁盘容量。取值为10的整数倍，并且大于当前磁盘容量。 - 对于集群实例，表示扩容到的单个shard组的磁盘容量。取值范围：10GB~2000GB。 - 对于副本集实例，表示扩容到的实例的磁盘容量，取值范围：10GB~2000GB。 - 对于单节点实例，表示扩容到的实例的磁盘容量，取值范围：10GB~1000GB。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// 角色组ID。 - 对于集群实例，该参数为shard组ID。 - 对于副本集和单节点实例，不传该参数。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 副本集只读节点磁盘扩容时，需要传入该参数，当前list只支持传入一个元素。
    /// </summary>

    std::vector<std::string>& getNodeIds();
    bool nodeIdsIsSet() const;
    void unsetnodeIds();
    void setNodeIds(const std::vector<std::string>& value);


protected:
    std::string size_;
    bool sizeIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::vector<std::string> nodeIds_;
    bool nodeIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceVolumeOption_H_
