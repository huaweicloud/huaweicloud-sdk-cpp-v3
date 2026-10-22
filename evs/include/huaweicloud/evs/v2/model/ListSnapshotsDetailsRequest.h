
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsDetailsRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsDetailsRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListSnapshotsDetailsRequest
    : public ModelBase
{
public:
    ListSnapshotsDetailsRequest();
    virtual ~ListSnapshotsDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSnapshotsDetailsRequest members

    /// <summary>
    /// **参数解释** 分页查询的起始资源id，取值为上一页最后一条查询记录的资源id。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// **参数解释** 快照对应的云硬盘ID。 可通过[查询所有云硬盘详情](evs_04_2006.xml)获取云硬盘ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照对应的云硬盘所在的可用区。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释** 返回结果个数限制。  当租户所有的快照数量大于50个时，为了提升您的查询效率，建议查询的时候使用limit参数，并且参数值最大设置为50。查询示例：  GET /v2/xxx/snapshots/detail?limit&#x3D;50，表示查询第1~50个快照。GET /v2/xxx/snapshots/detail?offset&#x3D;50&amp;limit&#x3D;50，表示查询第51~100个快照。 **约束限制** 不涉及。 **取值范围** 最小值1，最大值1000，默认为1000。返回的结果中记录数不超过limit值。 **默认取值** 不涉及。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// **参数解释** 快照名称。 **约束限制** 不涉及。 **取值范围** 最大支持255个字符。 **默认取值** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释** 偏移量。  分页查询快照时使用，与limit配合使用。假如共有30个快照， 设置offset为11，limit为10，即为从第12个快照开始查询， 一次最多可读取10个快照。 **约束限制** 与limit配合使用。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// **参数解释** 快照状态。 **约束限制** 不涉及。 **取值范围** [具体请参见[云硬盘快照状态](evs_04_0041.xml)。] **默认取值** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释** 返回结果按该关键字排序。 **约束限制** 不涉及。 **取值范围** - id：云硬盘快照ID。 - status：云硬盘快照状态，取值可参考：\&quot;[云硬盘快照状态。](evs_04_0041.xml)\&quot;。 - size：云硬盘快照大小，单位为GiB。 - created_at：云硬盘快照创建时间。 **默认取值** created_at
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释** 返回结果按照降序或升序排列，默认为“desc”。  **约束限制** 不涉及。 **取值范围** - desc：降序。 - asc：升序。 **默认取值** desc
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释** 快照ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照id列表，多个id直接用,号隔开，格式为ids&#x3D;id1,id2,...,idx。返回有效id对应的快照信息，无效的id会被忽略。 **约束限制** 最多支持一次查询60个id。 如果“id”和“ids”查询参数同时存在，“id”会被忽略。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getIds() const;
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::string& value);

    /// <summary>
    /// **参数解释** 快照来源。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getSnapshotType() const;
    bool snapshotTypeIsSet() const;
    void unsetsnapshotType();
    void setSnapshotType(const std::string& value);

    /// <summary>
    /// **参数解释** 快照的企业项目ID。  关于企业项目ID的获取及企业项目特性的详细信息，请参考：\&quot;[[企业管理用户指南](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0123692049.html)](tag:hws)[[企业管理用户指南](https://support.huaweicloud.com/intl/zh-cn/usermanual-em/zh-cn_topic_0123692049.html)](tag:hws_hk)\&quot;。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照标签的key。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getTagKey() const;
    bool tagKeyIsSet() const;
    void unsettagKey();
    void setTagKey(const std::string& value);

    /// <summary>
    /// **参数解释** 快照标签的key/value对，例如[{\&quot;key\&quot;:\&quot;bbb\&quot;,\&quot;value\&quot;:\&quot;bbb\&quot;}]。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// **参数解释** 快照链ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getSnapshotChainId() const;
    bool snapshotChainIdIsSet() const;
    void unsetsnapshotChainId();
    void setSnapshotChainId(const std::string& value);

    /// <summary>
    /// **参数解释** 快照一致性组ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getSnapshotGroupId() const;
    bool snapshotGroupIdIsSet() const;
    void unsetsnapshotGroupId();
    void setSnapshotGroupId(const std::string& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string ids_;
    bool idsIsSet_;
    std::string snapshotType_;
    bool snapshotTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string tagKey_;
    bool tagKeyIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string snapshotChainId_;
    bool snapshotChainIdIsSet_;
    std::string snapshotGroupId_;
    bool snapshotGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSnapshotsDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSnapshotsDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListSnapshotsDetailsRequest_H_
