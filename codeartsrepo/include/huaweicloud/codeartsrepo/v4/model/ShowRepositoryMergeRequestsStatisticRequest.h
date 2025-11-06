
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryMergeRequestsStatisticRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryMergeRequestsStatisticRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRepositoryMergeRequestsStatisticRequest
    : public ModelBase
{
public:
    ShowRepositoryMergeRequestsStatisticRequest();
    virtual ~ShowRepositoryMergeRequestsStatisticRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryMergeRequestsStatisticRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 合并请求iid。
    /// </summary>

    std::string getIids() const;
    bool iidsIsSet() const;
    void unsetiids();
    void setIids(const std::string& value);

    /// <summary>
    /// **参数解释：** 统计字段。 **约束限制 ** - commits_count，统计提交数 - changed_files_count，文件变更数 - notes_count， 检视意见数 - changed_lines_count，代码变更行数
    /// </summary>

    std::string getFields() const;
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string iids_;
    bool iidsIsSet_;
    std::string fields_;
    bool fieldsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRepositoryMergeRequestsStatisticRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRepositoryMergeRequestsStatisticRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryMergeRequestsStatisticRequest_H_
