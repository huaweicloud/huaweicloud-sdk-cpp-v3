
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchList_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchList_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/Branch.h>
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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  BranchList
    : public ModelBase
{
public:
    BranchList();
    virtual ~BranchList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BranchList members

    /// <summary>
    /// 指定仓库的分支列表
    /// </summary>

    std::vector<Branch>& getBranches();
    bool branchesIsSet() const;
    void unsetbranches();
    void setBranches(const std::vector<Branch>& value);

    /// <summary>
    /// 指定仓库的分支总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<Branch> branches_;
    bool branchesIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchList_H_
