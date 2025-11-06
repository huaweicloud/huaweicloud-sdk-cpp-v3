
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatisticsEvent_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatisticsEvent_H_


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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepoStatisticsEvent
    : public ModelBase
{
public:
    RepoStatisticsEvent();
    virtual ~RepoStatisticsEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoStatisticsEvent members

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 仓库统计创建的时间
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 仓库统计的日期
    /// </summary>

    std::string getDate() const;
    bool dateIsSet() const;
    void unsetdate();
    void setDate(const std::string& value);

    /// <summary>
    /// 仓库统计事件的id
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
    /// 仓库统计的状态: 等待统计waiting  正在统计active  完成统计finish
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 仓库统计更新的时间
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 用户id
    /// </summary>

    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int32_t value);


protected:
    std::string branch_;
    bool branchIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    std::string date_;
    bool dateIsSet_;
    int32_t id_;
    bool idIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    int32_t userId_;
    bool userIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoStatisticsEvent_H_
