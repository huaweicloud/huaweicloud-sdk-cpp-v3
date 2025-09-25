
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoListInfoV2_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoListInfoV2_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/RepoInfoV2.h>
#include <vector>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  RepoListInfoV2
    : public ModelBase
{
public:
    RepoListInfoV2();
    virtual ~RepoListInfoV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoListInfoV2 members

    /// <summary>
    /// 仓库列表
    /// </summary>

    std::vector<RepoInfoV2>& getRepositories();
    bool repositoriesIsSet() const;
    void unsetrepositories();
    void setRepositories(const std::vector<RepoInfoV2>& value);

    /// <summary>
    /// 仓库总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<RepoInfoV2> repositories_;
    bool repositoriesIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoListInfoV2_H_
