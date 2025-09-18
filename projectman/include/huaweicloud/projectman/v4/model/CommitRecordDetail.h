
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommitRecordDetail_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommitRecordDetail_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/SimpleUser.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 代码提交记录 / 分支创建记录 详细信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CommitRecordDetail
    : public ModelBase
{
public:
    CommitRecordDetail();
    virtual ~CommitRecordDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitRecordDetail members

    /// <summary>
    /// 仓库ID
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// commit id
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// commit short id
    /// </summary>

    std::string getCommitShortId() const;
    bool commitShortIdIsSet() const;
    void unsetcommitShortId();
    void setCommitShortId(const std::string& value);

    /// <summary>
    /// commit 信息
    /// </summary>

    std::string getCommitMsg() const;
    bool commitMsgIsSet() const;
    void unsetcommitMsg();
    void setCommitMsg(const std::string& value);

    /// <summary>
    /// commit URL
    /// </summary>

    std::string getCommitUrl() const;
    bool commitUrlIsSet() const;
    void unsetcommitUrl();
    void setCommitUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleUser getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const SimpleUser& value);

    /// <summary>
    /// 查询的类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateDate() const;
    bool createDateIsSet() const;
    void unsetcreateDate();
    void setCreateDate(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateDate() const;
    bool updateDateIsSet() const;
    void unsetupdateDate();
    void setUpdateDate(const std::string& value);


protected:
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string commitShortId_;
    bool commitShortIdIsSet_;
    std::string commitMsg_;
    bool commitMsgIsSet_;
    std::string commitUrl_;
    bool commitUrlIsSet_;
    SimpleUser user_;
    bool userIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string createDate_;
    bool createDateIsSet_;
    std::string updateDate_;
    bool updateDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommitRecordDetail_H_
