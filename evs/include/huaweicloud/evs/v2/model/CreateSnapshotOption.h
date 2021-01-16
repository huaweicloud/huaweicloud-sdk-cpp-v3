
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotOption_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 快照信息。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CreateSnapshotOption
    : public ModelBase
{
public:
    CreateSnapshotOption();
    virtual ~CreateSnapshotOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSnapshotOption members

    /// <summary>
    /// 源云硬盘的ID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 强制创快照标示，默认为false。 当force标记为false时，云硬盘处于挂载状态时，不能强制创建快照。 当force标记为true时，即使云硬盘处于挂载状态时，仍可以创建快照。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);

    /// <summary>
    /// 云硬盘快照的元数据信息。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 云硬盘快照描述，最大支持255个字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 云硬盘快照名称。最大支持255个字节。  &gt; &gt; 说明： &gt; 对云硬盘创建备份时，同时会创建以autobk_snapshot_为名称前缀的快照，云硬盘控制台对此类快照会有操作限制。因此建议不要创建以&gt; &gt; autobk_snapshot_为名称前缀的快照，避免影响快照的正常使用
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    bool force_;
    bool forceIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotOption_H_
