
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskBackupConfig_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskBackupConfig_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  RiskBackupConfig
    : public ModelBase
{
public:
    RiskBackupConfig();
    virtual ~RiskBackupConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RiskBackupConfig members

    /// <summary>
    /// 账户ID
    /// </summary>

    std::string getBackupDomainId() const;
    bool backupDomainIdIsSet() const;
    void unsetbackupDomainId();
    void setBackupDomainId(const std::string& value);

    /// <summary>
    /// OBS桶名称
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// OBS桶根路径
    /// </summary>

    std::string getBucketRootPath() const;
    bool bucketRootPathIsSet() const;
    void unsetbucketRootPath();
    void setBucketRootPath(const std::string& value);


protected:
    std::string backupDomainId_;
    bool backupDomainIdIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string bucketRootPath_;
    bool bucketRootPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RiskBackupConfig_H_
