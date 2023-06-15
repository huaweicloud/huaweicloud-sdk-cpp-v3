
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_StorageUsage_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_StorageUsage_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  StorageUsage
    : public ModelBase
{
public:
    StorageUsage();
    virtual ~StorageUsage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StorageUsage members

    /// <summary>
    /// 备份数量
    /// </summary>

    int32_t getBackupCount() const;
    bool backupCountIsSet() const;
    void unsetbackupCount();
    void setBackupCount(int32_t value);

    /// <summary>
    /// 备份容量
    /// </summary>

    int32_t getBackupSize() const;
    bool backupSizeIsSet() const;
    void unsetbackupSize();
    void setBackupSize(int32_t value);

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
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 多AZ备份大小
    /// </summary>

    int32_t getBackupSizeMultiaz() const;
    bool backupSizeMultiazIsSet() const;
    void unsetbackupSizeMultiaz();
    void setBackupSizeMultiaz(int32_t value);


protected:
    int32_t backupCount_;
    bool backupCountIsSet_;
    int32_t backupSize_;
    bool backupSizeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    int32_t backupSizeMultiaz_;
    bool backupSizeMultiazIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_StorageUsage_H_
