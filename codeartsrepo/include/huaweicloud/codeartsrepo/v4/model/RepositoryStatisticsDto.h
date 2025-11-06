
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryStatisticsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryStatisticsDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RepositoryStatisticsDto
    : public ModelBase
{
public:
    RepositoryStatisticsDto();
    virtual ~RepositoryStatisticsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryStatisticsDto members

    /// <summary>
    /// **参数解释：** 提交数量。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getCommitCount() const;
    bool commitCountIsSet() const;
    void unsetcommitCount();
    void setCommitCount(int32_t value);

    /// <summary>
    /// **参数解释：** 存储大小。 **约束限制：** 不涉及。
    /// </summary>

    double getStorageSize() const;
    bool storageSizeIsSet() const;
    void unsetstorageSize();
    void setStorageSize(double value);

    /// <summary>
    /// **参数解释：** 仓库大小。 **约束限制：** 不涉及。
    /// </summary>

    double getRepositorySize() const;
    bool repositorySizeIsSet() const;
    void unsetrepositorySize();
    void setRepositorySize(double value);

    /// <summary>
    /// **参数解释：** LFS对象大小。 **约束限制：** 不涉及。
    /// </summary>

    double getLfsObjectsSize() const;
    bool lfsObjectsSizeIsSet() const;
    void unsetlfsObjectsSize();
    void setLfsObjectsSize(double value);

    /// <summary>
    /// **参数解释：** 租户仓库大小限制。 **约束限制：** 不涉及。
    /// </summary>

    int64_t getTenantRepoSizeLimit() const;
    bool tenantRepoSizeLimitIsSet() const;
    void unsettenantRepoSizeLimit();
    void setTenantRepoSizeLimit(int64_t value);


protected:
    int32_t commitCount_;
    bool commitCountIsSet_;
    double storageSize_;
    bool storageSizeIsSet_;
    double repositorySize_;
    bool repositorySizeIsSet_;
    double lfsObjectsSize_;
    bool lfsObjectsSizeIsSet_;
    int64_t tenantRepoSizeLimit_;
    bool tenantRepoSizeLimitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryStatisticsDto_H_
