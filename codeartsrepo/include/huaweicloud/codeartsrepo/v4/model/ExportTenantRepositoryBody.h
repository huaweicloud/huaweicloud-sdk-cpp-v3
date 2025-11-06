
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ExportTenantRepositoryBody_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ExportTenantRepositoryBody_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 仓库Id列表
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ExportTenantRepositoryBody
    : public ModelBase
{
public:
    ExportTenantRepositoryBody();
    virtual ~ExportTenantRepositoryBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportTenantRepositoryBody members

    /// <summary>
    /// 
    /// </summary>

    std::vector<int32_t>& getRepositoryIds();
    bool repositoryIdsIsSet() const;
    void unsetrepositoryIds();
    void setRepositoryIds(std::vector<int32_t> value);


protected:
    std::vector<int32_t> repositoryIds_;
    bool repositoryIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ExportTenantRepositoryBody_H_
