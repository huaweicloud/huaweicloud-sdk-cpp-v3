
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestCommitDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestCommitDto_H_


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
/// 合并请求commit列表详情
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  MergeRequestCommitDto
    : public ModelBase
{
public:
    MergeRequestCommitDto();
    virtual ~MergeRequestCommitDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestCommitDto members

    /// <summary>
    /// commit id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// commit 短id
    /// </summary>

    std::string getShortId() const;
    bool shortIdIsSet() const;
    void unsetshortId();
    void setShortId(const std::string& value);

    /// <summary>
    /// 提交标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// commit 作者名称
    /// </summary>

    std::string getAuthorName() const;
    bool authorNameIsSet() const;
    void unsetauthorName();
    void setAuthorName(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// 昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 最初commit 提交日期（本地提交日期）
    /// </summary>

    std::string getAuthoredDate() const;
    bool authoredDateIsSet() const;
    void unsetauthoredDate();
    void setAuthoredDate(const std::string& value);

    /// <summary>
    /// commit提交日期（推送至仓库日期）
    /// </summary>

    std::string getCommittedDate() const;
    bool committedDateIsSet() const;
    void unsetcommittedDate();
    void setCommittedDate(const std::string& value);

    /// <summary>
    /// commit 提交者名称
    /// </summary>

    std::string getCommitterName() const;
    bool committerNameIsSet() const;
    void unsetcommitterName();
    void setCommitterName(const std::string& value);

    /// <summary>
    /// pgp key id
    /// </summary>

    std::string getGpgPrimaryKeyId() const;
    bool gpgPrimaryKeyIdIsSet() const;
    void unsetgpgPrimaryKeyId();
    void setGpgPrimaryKeyId(const std::string& value);

    /// <summary>
    /// gpg公钥验证是否开启
    /// </summary>

    bool isOpenGpgVerified() const;
    bool openGpgVerifiedIsSet() const;
    void unsetopenGpgVerified();
    void setOpenGpgVerified(bool value);

    /// <summary>
    /// gpg公钥验证是否通过
    /// </summary>

    bool isVerificationStatus() const;
    bool verificationStatusIsSet() const;
    void unsetverificationStatus();
    void setVerificationStatus(bool value);

    /// <summary>
    /// 提交父commit节点
    /// </summary>

    std::vector<std::string>& getParentIds();
    bool parentIdsIsSet() const;
    void unsetparentIds();
    void setParentIds(const std::vector<std::string>& value);

    /// <summary>
    /// commit 数据库记录创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string shortId_;
    bool shortIdIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string authorName_;
    bool authorNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string authoredDate_;
    bool authoredDateIsSet_;
    std::string committedDate_;
    bool committedDateIsSet_;
    std::string committerName_;
    bool committerNameIsSet_;
    std::string gpgPrimaryKeyId_;
    bool gpgPrimaryKeyIdIsSet_;
    bool openGpgVerified_;
    bool openGpgVerifiedIsSet_;
    bool verificationStatus_;
    bool verificationStatusIsSet_;
    std::vector<std::string> parentIds_;
    bool parentIdsIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestCommitDto_H_
