
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSync_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSync_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BackupSync
    : public ModelBase
{
public:
    BackupSync();
    virtual ~BackupSync();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupSync members

    /// <summary>
    /// 备份副本ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getBackupName() const;
    bool backupNameIsSet() const;
    void unsetbackupName();
    void setBackupName(const std::string& value);

    /// <summary>
    /// 桶名
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// 备份链在存储单元上的路径
    /// </summary>

    std::string getImagePath() const;
    bool imagePathIsSet() const;
    void unsetimagePath();
    void setImagePath(const std::string& value);

    /// <summary>
    /// 备份对象ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 备份对象名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 备份对象资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 备份时间戳，例如1548898428
    /// </summary>

    int32_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int32_t value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string backupName_;
    bool backupNameIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string imagePath_;
    bool imagePathIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    int32_t createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSync_H_
