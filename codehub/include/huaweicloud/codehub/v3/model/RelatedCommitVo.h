
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RelatedCommitVo_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RelatedCommitVo_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  RelatedCommitVo
    : public ModelBase
{
public:
    RelatedCommitVo();
    virtual ~RelatedCommitVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelatedCommitVo members

    /// <summary>
    /// 主键ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getIamId() const;
    bool iamIdIsSet() const;
    void unsetiamId();
    void setIamId(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 仓库ID
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 用户ID
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// Commit ID
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// Commit 短ID
    /// </summary>

    std::string getCommitShortId() const;
    bool commitShortIdIsSet() const;
    void unsetcommitShortId();
    void setCommitShortId(const std::string& value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getCommitMsg() const;
    bool commitMsgIsSet() const;
    void unsetcommitMsg();
    void setCommitMsg(const std::string& value);

    /// <summary>
    /// 提交URL
    /// </summary>

    std::string getCommitUrl() const;
    bool commitUrlIsSet() const;
    void unsetcommitUrl();
    void setCommitUrl(const std::string& value);

    /// <summary>
    /// 提交类型
    /// </summary>

    std::string getCommitType() const;
    bool commitTypeIsSet() const;
    void unsetcommitType();
    void setCommitType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getRelatedId() const;
    bool relatedIdIsSet() const;
    void unsetrelatedId();
    void setRelatedId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getRelatedUrl() const;
    bool relatedUrlIsSet() const;
    void unsetrelatedUrl();
    void setRelatedUrl(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string iamId_;
    bool iamIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string userId_;
    bool userIdIsSet_;
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
    std::string commitType_;
    bool commitTypeIsSet_;
    std::string relatedId_;
    bool relatedIdIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string relatedUrl_;
    bool relatedUrlIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RelatedCommitVo_H_
