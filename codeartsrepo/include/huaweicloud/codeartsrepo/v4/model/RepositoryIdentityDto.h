
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryIdentityDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryIdentityDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RepositoryIdentityDto
    : public ModelBase
{
public:
    RepositoryIdentityDto();
    virtual ~RepositoryIdentityDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryIdentityDto members

    /// <summary>
    /// **参数解释：** 项目ID。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 项目路径。 **约束限制：** 不涉及。
    /// </summary>

    std::string getPathWithNamespace() const;
    bool pathWithNamespaceIsSet() const;
    void unsetpathWithNamespace();
    void setPathWithNamespace(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string pathWithNamespace_;
    bool pathWithNamespaceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepositoryIdentityDto_H_
