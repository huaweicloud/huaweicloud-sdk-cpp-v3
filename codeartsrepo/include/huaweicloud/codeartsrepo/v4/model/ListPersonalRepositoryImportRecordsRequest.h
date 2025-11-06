
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalRepositoryImportRecordsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalRepositoryImportRecordsRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListPersonalRepositoryImportRecordsRequest
    : public ModelBase
{
public:
    ListPersonalRepositoryImportRecordsRequest();
    virtual ~ListPersonalRepositoryImportRecordsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPersonalRepositoryImportRecordsRequest members

    /// <summary>
    /// **参数解释：** 偏移量，从0开始。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 返回数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 状态 **取值范围：** - finished, 导入成功 - fail, 导入失败 - importing, 导入中
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释：** 导入来源 **取值范围：** - gitee - self_managed_gitlab - gitlab - github - git - svn - coding - bitbucket - gerrit - codeup
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 筛选在该时间之后导入的
    /// </summary>

    utility::datetime getCreatedAfter() const;
    bool createdAfterIsSet() const;
    void unsetcreatedAfter();
    void setCreatedAfter(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 筛选在该时间之前导入的
    /// </summary>

    utility::datetime getCreatedBefore() const;
    bool createdBeforeIsSet() const;
    void unsetcreatedBefore();
    void setCreatedBefore(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 筛选在该时间之后导入完成的
    /// </summary>

    utility::datetime getFinishedAfter() const;
    bool finishedAfterIsSet() const;
    void unsetfinishedAfter();
    void setFinishedAfter(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 筛选在该时间之前导入完成的
    /// </summary>

    utility::datetime getFinishedBefore() const;
    bool finishedBeforeIsSet() const;
    void unsetfinishedBefore();
    void setFinishedBefore(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 搜索仓库
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序方式。 **取值范围：** - created_at, 导入时间 - source_repo_name, 源仓库路径 - size, 源仓库容量
    /// </summary>

    std::string getOrderBy() const;
    bool orderByIsSet() const;
    void unsetorderBy();
    void setOrderBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 返回排序 - asc 正序返回 - desc 倒序返回
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string sourceType_;
    bool sourceTypeIsSet_;
    utility::datetime createdAfter_;
    bool createdAfterIsSet_;
    utility::datetime createdBefore_;
    bool createdBeforeIsSet_;
    utility::datetime finishedAfter_;
    bool finishedAfterIsSet_;
    utility::datetime finishedBefore_;
    bool finishedBeforeIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::string orderBy_;
    bool orderByIsSet_;
    std::string sort_;
    bool sortIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPersonalRepositoryImportRecordsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPersonalRepositoryImportRecordsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalRepositoryImportRecordsRequest_H_
