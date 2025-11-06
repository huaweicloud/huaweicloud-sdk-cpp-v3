
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatistics_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatistics_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepoStatistics
    : public ModelBase
{
public:
    RepoStatistics();
    virtual ~RepoStatistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoStatistics members

    /// <summary>
    /// 添加代码行
    /// </summary>

    int32_t getAddLines() const;
    bool addLinesIsSet() const;
    void unsetaddLines();
    void setAddLines(int32_t value);

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 提交次数
    /// </summary>

    int32_t getCommitCount() const;
    bool commitCountIsSet() const;
    void unsetcommitCount();
    void setCommitCount(int32_t value);

    /// <summary>
    /// 仓库统计创建的时间
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 删除代码行
    /// </summary>

    int32_t getDeleteLines() const;
    bool deleteLinesIsSet() const;
    void unsetdeleteLines();
    void setDeleteLines(int32_t value);

    /// <summary>
    /// 仓库统计记录id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 仓库id
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// 仓库统计更新的时间
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    int32_t addLines_;
    bool addLinesIsSet_;
    std::string branch_;
    bool branchIsSet_;
    int32_t commitCount_;
    bool commitCountIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    int32_t deleteLines_;
    bool deleteLinesIsSet_;
    int32_t id_;
    bool idIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatistics_H_
