
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ItemCommitDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ItemCommitDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项关联的提交信息
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ItemCommitDto
    : public ModelBase
{
public:
    ItemCommitDto();
    virtual ~ItemCommitDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ItemCommitDto members

    /// <summary>
    /// **参数解释：** 关联Id。 **取值范围：** 不涉及
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求标题。 **取值范围：** 不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库状态。 **取值范围：** - 1，关联成功。 - 2，关联失败。 - 3，流转成功。
    /// </summary>

    int32_t getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(int32_t value);

    /// <summary>
    /// **参数解释：** 关联提交类型。 **取值范围：** - commit，提交。 - branch，分支。 - mergerequest，合并请求。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 关联失败的失败原因。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项Id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getItemId() const;
    bool itemIdIsSet() const;
    void unsetitemId();
    void setItemId(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库Id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交Id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交短Id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCommitShortId() const;
    bool commitShortIdIsSet() const;
    void unsetcommitShortId();
    void setCommitShortId(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交信息。 **取值范围：** 不涉及。            
    /// </summary>

    std::string getCommitMsg() const;
    bool commitMsgIsSet() const;
    void unsetcommitMsg();
    void setCommitMsg(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交访问地址。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCommitUrl() const;
    bool commitUrlIsSet() const;
    void unsetcommitUrl();
    void setCommitUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** iamId。 **取值范围：** 不涉及。
    /// </summary>

    std::string getIamId() const;
    bool iamIdIsSet() const;
    void unsetiamId();
    void setIamId(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **取值范围：** 不涉及。  
    /// </summary>

    std::string getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项访问地址。 **取值范围：** 不涉及。
    /// </summary>

    std::string getItemUrl() const;
    bool itemUrlIsSet() const;
    void unsetitemUrl();
    void setItemUrl(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string title_;
    bool titleIsSet_;
    int32_t result_;
    bool resultIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string itemId_;
    bool itemIdIsSet_;
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string commitShortId_;
    bool commitShortIdIsSet_;
    std::string commitMsg_;
    bool commitMsgIsSet_;
    std::string commitUrl_;
    bool commitUrlIsSet_;
    std::string iamId_;
    bool iamIdIsSet_;
    std::string createAt_;
    bool createAtIsSet_;
    std::string updateAt_;
    bool updateAtIsSet_;
    std::string itemUrl_;
    bool itemUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ItemCommitDto_H_
