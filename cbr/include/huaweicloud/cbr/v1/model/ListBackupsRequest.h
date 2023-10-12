
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ListBackupsRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ListBackupsRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ListBackupsRequest
    : public ModelBase
{
public:
    ListBackupsRequest();
    virtual ~ListBackupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBackupsRequest members

    /// <summary>
    /// 还原点ID
    /// </summary>

    std::string getCheckpointId() const;
    bool checkpointIdIsSet() const;
    void unsetcheckpointId();
    void setCheckpointId(const std::string& value);

    /// <summary>
    /// 专属云 （专属云场景使用，非专属云场景不生效）
    /// </summary>

    bool isDec() const;
    bool decIsSet() const;
    void unsetdec();
    void setDec(bool value);

    /// <summary>
    /// 备份产生时间范围的结束时间，格式为%YYYY-%mm-%ddT%HH:%MM:%SSZ，例如2018-02-01T12:00:00Z
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 备份类型
    /// </summary>

    std::string getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量，正整数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 上一次查询最后一条的id
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 偏移值，正整数
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 支持按az来过滤
    /// </summary>

    std::string getResourceAz() const;
    bool resourceAzIsSet() const;
    void unsetresourceAz();
    void setResourceAz(const std::string& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 资源类型: 云服务器: OS::Nova::Server, 云硬盘: OS::Cinder::Volume, 云桌面：OS::Workspace::DesktopV2
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// sort的内容为一组由逗号分隔的属性及可选排序方向组成，形如&lt;key1&gt;[:&lt;direction&gt;],&lt;key2&gt;[:&lt;direction&gt;],其中direction的取值为asc (升序) 或 desc (降序),如没有传入direction参数，默认为降序，sort内容的长度限制为255个字符。key取值范围:[created_at，updated_at，name，status，protected_at，id]
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// 备份产生时间范围的开始时间，格式为%YYYY-%mm-%ddT%HH:%MM:%SSZ，例如2018-02-01T12:00:00Z
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 状态。 调用API时，支持通过传多个status值进行过滤。例如：status&#x3D;available&amp;status&#x3D;error
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 企业项目id或all_granted_eps，all_granted_eps表示查询用户有权限的所有企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 持有类型，私有的private/共享的shared/全部all_granted，默认只查询private。
    /// </summary>

    std::string getOwnType() const;
    bool ownTypeIsSet() const;
    void unsetownType();
    void setOwnType(const std::string& value);

    /// <summary>
    /// 共享状态
    /// </summary>

    std::string getMemberStatus() const;
    bool memberStatusIsSet() const;
    void unsetmemberStatus();
    void setMemberStatus(const std::string& value);

    /// <summary>
    /// 父备份ID
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 根据存储库使用率过滤备份，取值范围 [1, 100]，含1和100。例如，used_percent&#x3D;80，表示筛选所属存储库使用率大于等于80%的所有备份。
    /// </summary>

    std::string getUsedPercent() const;
    bool usedPercentIsSet() const;
    void unsetusedPercent();
    void setUsedPercent(const std::string& value);

    /// <summary>
    /// 是否返回复制记录
    /// </summary>

    bool isShowReplication() const;
    bool showReplicationIsSet() const;
    void unsetshowReplication();
    void setShowReplication(bool value);

    /// <summary>
    /// 是否是增备
    /// </summary>

    bool isIncremental() const;
    bool incrementalIsSet() const;
    void unsetincremental();
    void setIncremental(bool value);


protected:
    std::string checkpointId_;
    bool checkpointIdIsSet_;
    bool dec_;
    bool decIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string imageType_;
    bool imageTypeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string resourceAz_;
    bool resourceAzIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string ownType_;
    bool ownTypeIsSet_;
    std::string memberStatus_;
    bool memberStatusIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string usedPercent_;
    bool usedPercentIsSet_;
    bool showReplication_;
    bool showReplicationIsSet_;
    bool incremental_;
    bool incrementalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBackupsRequest& dereference_from_shared_ptr(std::shared_ptr<ListBackupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ListBackupsRequest_H_
