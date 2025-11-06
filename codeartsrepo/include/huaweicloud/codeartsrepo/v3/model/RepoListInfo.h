
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoListInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoListInfo_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/RepoInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepoListInfo
    : public ModelBase
{
public:
    RepoListInfo();
    virtual ~RepoListInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoListInfo members

    /// <summary>
    /// 仓库列表
    /// </summary>

    std::vector<RepoInfo>& getRepositorys();
    bool repositorysIsSet() const;
    void unsetrepositorys();
    void setRepositorys(const std::vector<RepoInfo>& value);

    /// <summary>
    /// 仓库总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<RepoInfo> repositorys_;
    bool repositorysIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoListInfo_H_
