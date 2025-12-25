
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesResult_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesResult_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/RepositoryBasicDO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListAllRepositoriesResult
    : public ModelBase
{
public:
    ListAllRepositoriesResult();
    virtual ~ListAllRepositoriesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllRepositoriesResult members

    /// <summary>
    /// **参数解释**： 总数。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 仓库详情列表。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<RepositoryBasicDO>& getRepositories();
    bool repositoriesIsSet() const;
    void unsetrepositories();
    void setRepositories(const std::vector<RepositoryBasicDO>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<RepositoryBasicDO> repositories_;
    bool repositoriesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListAllRepositoriesResult_H_
