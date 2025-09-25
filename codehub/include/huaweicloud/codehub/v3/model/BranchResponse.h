
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchResponse_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/BranchesItem.h>
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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  BranchResponse
    : public ModelBase
{
public:
    BranchResponse();
    virtual ~BranchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BranchResponse members

    /// <summary>
    /// 分支信息
    /// </summary>

    std::vector<BranchesItem>& getBranches();
    bool branchesIsSet() const;
    void unsetbranches();
    void setBranches(const std::vector<BranchesItem>& value);

    /// <summary>
    /// 总数
    /// </summary>

    double getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(double value);


protected:
    std::vector<BranchesItem> branches_;
    bool branchesIsSet_;
    double total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchResponse_H_
