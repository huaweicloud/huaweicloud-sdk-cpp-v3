
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitRevetOrCherryPickDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitRevetOrCherryPickDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CommitRevetOrCherryPickDto
    : public ModelBase
{
public:
    CommitRevetOrCherryPickDto();
    virtual ~CommitRevetOrCherryPickDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitRevetOrCherryPickDto members

    /// <summary>
    /// revert目标分支
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 是否使用创建MR的形式Revert
    /// </summary>

    bool isWithNewMergeRequest() const;
    bool withNewMergeRequestIsSet() const;
    void unsetwithNewMergeRequest();
    void setWithNewMergeRequest(bool value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string branch_;
    bool branchIsSet_;
    bool withNewMergeRequest_;
    bool withNewMergeRequestIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommitRevetOrCherryPickDto_H_
