
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteBranchDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteBranchDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  BatchDeleteBranchDto
    : public ModelBase
{
public:
    BatchDeleteBranchDto();
    virtual ~BatchDeleteBranchDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteBranchDto members

    /// <summary>
    /// 分支列表
    /// </summary>

    std::vector<std::string>& getBranches();
    bool branchesIsSet() const;
    void unsetbranches();
    void setBranches(const std::vector<std::string>& value);


protected:
    std::vector<std::string> branches_;
    bool branchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchDeleteBranchDto_H_
