
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCommitRevertResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCommitRevertResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/RepositoryCommitDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateCommitRevertResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateCommitRevertResponse();
    virtual ~CreateCommitRevertResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCommitRevertResponse members

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 消息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 父节点提交ID
    /// </summary>

    std::vector<std::string>& getParentIds();
    bool parentIdsIsSet() const;
    void unsetparentIds();
    void setParentIds(const std::vector<std::string>& value);

    /// <summary>
    /// 创建该分支的时间
    /// </summary>

    std::string getAuthoredDate() const;
    bool authoredDateIsSet() const;
    void unsetauthoredDate();
    void setAuthoredDate(const std::string& value);

    /// <summary>
    /// 创建者名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 创建者邮箱
    /// </summary>

    std::string getAuthorEmail() const;
    bool authorEmailIsSet() const;
    void unsetauthorEmail();
    void setAuthorEmail(const std::string& value);

    /// <summary>
    /// 代码提交的日期和时间
    /// </summary>

    std::string getCommittedDate() const;
    bool committedDateIsSet() const;
    void unsetcommittedDate();
    void setCommittedDate(const std::string& value);

    /// <summary>
    /// 提交者名称
    /// </summary>

    std::string getCommitterName() const;
    bool committerNameIsSet() const;
    void unsetcommitterName();
    void setCommitterName(const std::string& value);

    /// <summary>
    /// 提交者邮箱
    /// </summary>

    std::string getCommitterEmail() const;
    bool committerEmailIsSet() const;
    void unsetcommitterEmail();
    void setCommitterEmail(const std::string& value);

    /// <summary>
    /// 是否打开gpg校验
    /// </summary>

    bool isOpenGpgVerified() const;
    bool openGpgVerifiedIsSet() const;
    void unsetopenGpgVerified();
    void setOpenGpgVerified(bool value);

    /// <summary>
    /// 验证状态
    /// </summary>

    int32_t getVerificationStatus() const;
    bool verificationStatusIsSet() const;
    void unsetverificationStatus();
    void setVerificationStatus(int32_t value);

    /// <summary>
    /// GPG公钥的标识符
    /// </summary>

    std::string getGpgPrimaryKeyId() const;
    bool gpgPrimaryKeyIdIsSet() const;
    void unsetgpgPrimaryKeyId();
    void setGpgPrimaryKeyId(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getGpgNickName() const;
    bool gpgNickNameIsSet() const;
    void unsetgpgNickName();
    void setGpgNickName(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getGpgTenantName() const;
    bool gpgTenantNameIsSet() const;
    void unsetgpgTenantName();
    void setGpgTenantName(const std::string& value);

    /// <summary>
    /// 特定GPG用户相关的信息
    /// </summary>

    std::string getGpgUserName() const;
    bool gpgUserNameIsSet() const;
    void unsetgpgUserName();
    void setGpgUserName(const std::string& value);

    /// <summary>
    /// 8位commitId
    /// </summary>

    std::string getShortId() const;
    bool shortIdIsSet() const;
    void unsetshortId();
    void setShortId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 作者头像url
    /// </summary>

    std::string getAuthorAvatarUrl() const;
    bool authorAvatarUrlIsSet() const;
    void unsetauthorAvatarUrl();
    void setAuthorAvatarUrl(const std::string& value);

    /// <summary>
    /// 提交人头像url
    /// </summary>

    std::string getCommitterAvatarUrl() const;
    bool committerAvatarUrlIsSet() const;
    void unsetcommitterAvatarUrl();
    void setCommitterAvatarUrl(const std::string& value);

    /// <summary>
    /// 以创建MR的形式Revert结果
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// CherryPick临时分支名
    /// </summary>

    std::string getCherryPickBranchName() const;
    bool cherryPickBranchNameIsSet() const;
    void unsetcherryPickBranchName();
    void setCherryPickBranchName(const std::string& value);

    /// <summary>
    /// Revert临时分支名
    /// </summary>

    std::string getRevertBranchName() const;
    bool revertBranchNameIsSet() const;
    void unsetrevertBranchName();
    void setRevertBranchName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<std::string> parentIds_;
    bool parentIdsIsSet_;
    std::string authoredDate_;
    bool authoredDateIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string authorEmail_;
    bool authorEmailIsSet_;
    std::string committedDate_;
    bool committedDateIsSet_;
    std::string committerName_;
    bool committerNameIsSet_;
    std::string committerEmail_;
    bool committerEmailIsSet_;
    bool openGpgVerified_;
    bool openGpgVerifiedIsSet_;
    int32_t verificationStatus_;
    bool verificationStatusIsSet_;
    std::string gpgPrimaryKeyId_;
    bool gpgPrimaryKeyIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string gpgNickName_;
    bool gpgNickNameIsSet_;
    std::string gpgTenantName_;
    bool gpgTenantNameIsSet_;
    std::string gpgUserName_;
    bool gpgUserNameIsSet_;
    std::string shortId_;
    bool shortIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string authorAvatarUrl_;
    bool authorAvatarUrlIsSet_;
    std::string committerAvatarUrl_;
    bool committerAvatarUrlIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string cherryPickBranchName_;
    bool cherryPickBranchNameIsSet_;
    std::string revertBranchName_;
    bool revertBranchNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateCommitRevertResponse_H_
