
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowBranchResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowBranchResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CommitDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowBranchResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBranchResponse();
    virtual ~ShowBranchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBranchResponse members

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommitDto getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const CommitDto& value);

    /// <summary>
    /// 用户id
    /// </summary>

    bool isMerged() const;
    bool mergedIsSet() const;
    void unsetmerged();
    void setMerged(bool value);

    /// <summary>
    /// 是否为保护分支
    /// </summary>

    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);

    /// <summary>
    /// 开发者是否可以推送
    /// </summary>

    bool isDevelopersCanPush() const;
    bool developersCanPushIsSet() const;
    void unsetdevelopersCanPush();
    void setDevelopersCanPush(bool value);

    /// <summary>
    /// 开发者是否可以合并
    /// </summary>

    bool isDevelopersCanMerge() const;
    bool developersCanMergeIsSet() const;
    void unsetdevelopersCanMerge();
    void setDevelopersCanMerge(bool value);

    /// <summary>
    /// 是否可以推送
    /// </summary>

    bool isCanPush() const;
    bool canPushIsSet() const;
    void unsetcanPush();
    void setCanPush(bool value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    CommitDto commit_;
    bool commitIsSet_;
    bool merged_;
    bool mergedIsSet_;
    bool protected_;
    bool protectedIsSet_;
    bool developersCanPush_;
    bool developersCanPushIsSet_;
    bool developersCanMerge_;
    bool developersCanMergeIsSet_;
    bool canPush_;
    bool canPushIsSet_;
    bool default_;
    bool defaultIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowBranchResponse_H_
