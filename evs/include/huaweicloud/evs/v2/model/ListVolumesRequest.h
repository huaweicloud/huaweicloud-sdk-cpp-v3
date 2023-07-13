
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesRequest_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  ListVolumesRequest
    : public ModelBase
{
public:
    ListVolumesRequest();
    virtual ~ListVolumesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListVolumesRequest members

    /// <summary>
    /// 通过云硬盘ID进行分页查询。默认为查询第一页数据。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 磁盘名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 返回结果个数限制。默认值为1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 返回结果按该关键字排序，支持id，status，size，created_at等关键字，默认为“created_at”。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 偏移量（偏移量为一个大于0小于磁盘总个数的整数，表示查询该偏移量后面的所有的磁盘）。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 返回结果按照降序或升序排列，默认为“desc”。 降序：desc 升序：asc
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 云硬盘状态，取值可参考：\&quot;[云硬盘状态](https://support.huaweicloud.com/api-evs/evs_04_0040.html)\&quot;。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 云硬盘元数据。
    /// </summary>

    std::string getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::string& value);

    /// <summary>
    /// 可用区信息。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 是否为共享云硬盘。 true：表示为共享云硬盘。 false：表示为非共享云硬盘。
    /// </summary>

    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);

    /// <summary>
    /// 服务类型，仅支持EVS、DSS、DESS。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 专属存储池ID，可过滤出该专属存储池下的所有云硬盘，必须精确匹配。
    /// </summary>

    std::string getDedicatedStorageId() const;
    bool dedicatedStorageIdIsSet() const;
    void unsetdedicatedStorageId();
    void setDedicatedStorageId(const std::string& value);

    /// <summary>
    /// 专属存储池的名字，可过滤出该专属存储池下的所有云硬盘，支持模糊匹配。
    /// </summary>

    std::string getDedicatedStorageName() const;
    bool dedicatedStorageNameIsSet() const;
    void unsetdedicatedStorageName();
    void setDedicatedStorageName(const std::string& value);

    /// <summary>
    /// 云硬盘类型id。 通过\&quot;[查询云硬盘类型列表](https://support.huaweicloud.com/api-evs/evs_04_3035.html)\&quot;可以查到，即volume_types参数说明表格中的“id”
    /// </summary>

    std::string getVolumeTypeId() const;
    bool volumeTypeIdIsSet() const;
    void unsetvolumeTypeId();
    void setVolumeTypeId(const std::string& value);

    /// <summary>
    /// 云硬盘ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘id列表，格式为ids&#x3D;[&#39;id1&#39;,&#39;id2&#39;,...,&#39;idx&#39;]，返回“ids”中有效id的云硬盘详情，无效的id会被忽略。 支持查询最多60个id对应的云硬盘详情。 如果“id”和“ids”查询参数同时存在，“id”会被忽略。
    /// </summary>

    std::string getIds() const;
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::string& value);

    /// <summary>
    /// 指定企业项目id进行过滤。 传入“all_granted_eps”，代表查询权限范围内的所有企业项目下的云硬盘。 &gt; 说明： &gt;  &gt; 关于企业项目ID的获取及企业项目特性的详细信息，请参考：\&quot;[企业管理用户指南](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0123692049.html)\&quot;。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 云服务器id。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string metadata_;
    bool metadataIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string dedicatedStorageId_;
    bool dedicatedStorageIdIsSet_;
    std::string dedicatedStorageName_;
    bool dedicatedStorageNameIsSet_;
    std::string volumeTypeId_;
    bool volumeTypeIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string ids_;
    bool idsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVolumesRequest& dereference_from_shared_ptr(std::shared_ptr<ListVolumesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesRequest_H_
