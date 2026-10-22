
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotGroup_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotGroup_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 创建快照一致性组。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  SnapshotGroup
    : public ModelBase
{
public:
    SnapshotGroup();
    virtual ~SnapshotGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotGroup members

    /// <summary>
    /// **参数解释** 云服务器id。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘id列表。 **约束限制** 格式为ids&#x3D;[\&quot;id1\&quot;,\&quot;id2\&quot;,...,\&quot;idx\&quot;]。 如果设置了server_id，则该参数只能设置指定实例内已挂载的云硬盘，不再支持设置多个跨实例的云硬盘ID。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::vector<std::string>& getVolumeIds();
    bool volumeIdsIsSet() const;
    void unsetvolumeIds();
    void setVolumeIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释** 是否开启快照极速可用。 **约束限制** 不涉及。 **取值范围** - true：开启。 - false：关闭。 **默认取值** false
    /// </summary>

    bool isInstantAccess() const;
    bool instantAccessIsSet() const;
    void unsetinstantAccess();
    void setInstantAccess(bool value);

    /// <summary>
    /// **参数解释** 快照一致性组名称。 **约束限制** 最大支持255个字节。 **取值范围** 最小长度：0 最大长度：255 **默认取值** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释** 快照一致性组描述。 **约束限制** 最大支持255个字节。 **取值范围** 最小长度：0 最大长度：255 **默认取值** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释** 快照一致性组的标签。 标签的value：String类型，最大长度43个字符，可以为空字符串。 由英文字母、数字、下划线、点、中划线、UNICODE字符（\\u4E00-\\u9FFF）组成。  标签的value：String类型，最大长度43个字符，可以为空字符串。 由英文字母、数字、下划线、点、中划线、UNICODE字符（\\u4E00-\\u9FFF）组成。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释** 快照一致性组所属的企业项目ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释** 是否创建增量快照。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    bool isIncremental() const;
    bool incrementalIsSet() const;
    void unsetincremental();
    void setIncremental(bool value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::vector<std::string> volumeIds_;
    bool volumeIdsIsSet_;
    bool instantAccess_;
    bool instantAccessIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool incremental_;
    bool incrementalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_SnapshotGroup_H_
