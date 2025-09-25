
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ProjectRepository_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ProjectRepository_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ProjectRepository
    : public ModelBase
{
public:
    ProjectRepository();
    virtual ~ProjectRepository();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectRepository members

    /// <summary>
    /// 项目ID，获取方式请参见[获取项目ID](codehub_api_0014.xml)。
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 仓库UUID
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ProjectRepository_H_
