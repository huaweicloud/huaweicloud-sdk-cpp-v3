
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_MigrateResource_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_MigrateResource_H_

#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 迁移资源
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  MigrateResource
    : public ModelBase
{
public:
    MigrateResource();
    virtual ~MigrateResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MigrateResource members

    /// <summary>
    /// 资源所属RegionID。迁移OBS服务资源时为必选项。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 项目ID。resource_type为region级别服务时为必选项。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 是否关联迁移。目前仅支持ECS关联资源EVS、EIP迁移。
    /// </summary>

    bool isAssociated() const;
    bool associatedIsSet() const;
    void unsetassociated();
    void setAssociated(bool value);


protected:
    std::string regionId_;
    bool regionIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    bool associated_;
    bool associatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_MigrateResource_H_
