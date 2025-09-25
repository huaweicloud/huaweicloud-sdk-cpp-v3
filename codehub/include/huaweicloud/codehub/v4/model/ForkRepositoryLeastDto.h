
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ForkRepositoryLeastDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ForkRepositoryLeastDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ForkRepositoryLeastDto
    : public ModelBase
{
public:
    ForkRepositoryLeastDto();
    virtual ~ForkRepositoryLeastDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ForkRepositoryLeastDto members

    /// <summary>
    /// **参数解释：** 带命名空间的仓库路径。 **约束限制：** view&#x3D;least时返回
    /// </summary>

    std::string getPathWithNamespace() const;
    bool pathWithNamespaceIsSet() const;
    void unsetpathWithNamespace();
    void setPathWithNamespace(const std::string& value);


protected:
    std::string pathWithNamespace_;
    bool pathWithNamespaceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ForkRepositoryLeastDto_H_
