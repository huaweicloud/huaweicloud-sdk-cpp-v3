
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupResp_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/cbr/v1/model/BackupResp.h>
#include <vector>
#include <huaweicloud/cbr/v1/model/BackupExtendInfo.h>
#include <huaweicloud/cbr/v1/model/ReplicationRecordGet.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BackupResp
    : public ModelBase
{
public:
    BackupResp();
    virtual ~BackupResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BackupResp members

    /// <summary>
    /// 还原点ID
    /// </summary>

    std::string getCheckpointId() const;
    bool checkpointIdIsSet() const;
    void unsetcheckpointId();
    void setCheckpointId(const std::string& value);

    /// <summary>
    /// 创建时间，例如:\&quot;2020-02-05T10:38:34.209782\&quot;
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 备份描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 过期时间，例如:\&quot;2020-02-05T10:38:34.209782\&quot;
    /// </summary>

    utility::datetime getExpiredAt() const;
    bool expiredAtIsSet() const;
    void unsetexpiredAt();
    void setExpiredAt(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>

    BackupExtendInfo getExtendInfo() const;
    bool extendInfoIsSet() const;
    void unsetextendInfo();
    void setExtendInfo(const BackupExtendInfo& value);

    /// <summary>
    /// 备份ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 备份类型
    /// </summary>

    std::string getImageType() const;
    bool imageTypeIsSet() const;
    void unsetimageType();
    void setImageType(const std::string& value);

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 父备份ID
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 备份时间
    /// </summary>

    utility::datetime getProtectedAt() const;
    bool protectedAtIsSet() const;
    void unsetprotectedAt();
    void setProtectedAt(const utility::datetime& value);

    /// <summary>
    /// 资源可用区
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
    /// 资源大小，单位为GB
    /// </summary>

    int32_t getResourceSize() const;
    bool resourceSizeIsSet() const;
    void unsetresourceSize();
    void setResourceSize(int32_t value);

    /// <summary>
    /// 资源类型: 云服务器: OS::Nova::Server, 云硬盘: OS::Cinder::Volume, 云桌面：OS::Workspace::DesktopV2
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 备份状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 更新时间，例如:\&quot;2020-02-05T10:38:34.209782\&quot;
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 复制记录
    /// </summary>

    std::vector<ReplicationRecordGet>& getReplicationRecords();
    bool replicationRecordsIsSet() const;
    void unsetreplicationRecords();
    void setReplicationRecords(const std::vector<ReplicationRecordGet>& value);

    /// <summary>
    /// 企业项目id,默认为‘0’。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 备份提供商ID，用于区分备份对象。当前取值包含  0daac4c5-6707-4851-97ba-169e36266b66，该值代表备份对象为云服务器。d1603440-187d-4516-af25-121250c7cc97，该值代表备份对象为云硬盘。3f3c3220-245c-4805-b811-758870015881， 该值代表备份对象为SFS Turbo。a13639de-00be-4e94-af30-26912d75e4a2，该值代表备份对象为混合云VMware备份。
    /// </summary>

    std::string getProviderId() const;
    bool providerIdIsSet() const;
    void unsetproviderId();
    void setProviderId(const std::string& value);

    /// <summary>
    /// 子副本列表
    /// </summary>

    std::vector<BackupResp>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<BackupResp>& value);


protected:
    std::string checkpointId_;
    bool checkpointIdIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    utility::datetime expiredAt_;
    bool expiredAtIsSet_;
    BackupExtendInfo extendInfo_;
    bool extendInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string imageType_;
    bool imageTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    utility::datetime protectedAt_;
    bool protectedAtIsSet_;
    std::string resourceAz_;
    bool resourceAzIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    int32_t resourceSize_;
    bool resourceSizeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;
    std::vector<ReplicationRecordGet> replicationRecords_;
    bool replicationRecordsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string providerId_;
    bool providerIdIsSet_;
    std::vector<BackupResp> children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupResp_H_
