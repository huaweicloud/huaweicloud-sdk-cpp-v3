
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_StatisticDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_StatisticDto_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  StatisticDto
    : public ModelBase
{
public:
    StatisticDto();
    virtual ~StatisticDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticDto members

    /// <summary>
    /// **参数解释：** 统计ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库ID。
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// **参数解释：** 分支名。 **取值范围：** 最小1个字节，最大200字节
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 增加行数。
    /// </summary>

    int32_t getAddLines() const;
    bool addLinesIsSet() const;
    void unsetaddLines();
    void setAddLines(int32_t value);

    /// <summary>
    /// **参数解释：** 删除行数。
    /// </summary>

    int32_t getDeleteLines() const;
    bool deleteLinesIsSet() const;
    void unsetdeleteLines();
    void setDeleteLines(int32_t value);

    /// <summary>
    /// **参数解释：** 总的提交数量。
    /// </summary>

    int32_t getCommitCount() const;
    bool commitCountIsSet() const;
    void unsetcommitCount();
    void setCommitCount(int32_t value);

    /// <summary>
    /// **参数解释：** 最早提交时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 最新更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    int32_t addLines_;
    bool addLinesIsSet_;
    int32_t deleteLines_;
    bool deleteLinesIsSet_;
    int32_t commitCount_;
    bool commitCountIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_StatisticDto_H_
