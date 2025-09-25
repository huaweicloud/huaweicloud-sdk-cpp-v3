
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchesItem_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchesItem_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/DivergingCommitCounts.h>
#include <string>
#include <huaweicloud/codehub/v3/model/CommitV2.h>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  BranchesItem
    : public ModelBase
{
public:
    BranchesItem();
    virtual ~BranchesItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BranchesItem members

    /// <summary>
    /// 
    /// </summary>

    CommitV2 getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const CommitV2& value);

    /// <summary>
    /// 
    /// </summary>

    DivergingCommitCounts getDivergingCommitCounts() const;
    bool divergingCommitCountsIsSet() const;
    void unsetdivergingCommitCounts();
    void setDivergingCommitCounts(const DivergingCommitCounts& value);

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    CommitV2 commit_;
    bool commitIsSet_;
    DivergingCommitCounts divergingCommitCounts_;
    bool divergingCommitCountsIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_BranchesItem_H_
