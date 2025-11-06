
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AssociateIssuesRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AssociateIssuesRequestBody_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  AssociateIssuesRequestBody
    : public ModelBase
{
public:
    AssociateIssuesRequestBody();
    virtual ~AssociateIssuesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateIssuesRequestBody members

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 项目ID，获取方式请参见[获取项目ID](codehub_api_0014.xml)。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项集合
    /// </summary>

    std::vector<std::string>& getRelatedId();
    bool relatedIdIsSet() const;
    void unsetrelatedId();
    void setRelatedId(const std::vector<std::string>& value);

    /// <summary>
    /// 仓库id
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);


protected:
    std::string branch_;
    bool branchIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> relatedId_;
    bool relatedIdIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_AssociateIssuesRequestBody_H_
