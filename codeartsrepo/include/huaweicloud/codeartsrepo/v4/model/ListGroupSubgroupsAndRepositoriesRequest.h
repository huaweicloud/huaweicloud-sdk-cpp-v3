
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupSubgroupsAndRepositoriesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupSubgroupsAndRepositoriesRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListGroupSubgroupsAndRepositoriesRequest
    : public ModelBase
{
public:
    ListGroupSubgroupsAndRepositoriesRequest();
    virtual ~ListGroupSubgroupsAndRepositoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupSubgroupsAndRepositoriesRequest members

    /// <summary>
    /// **参数解释：** 代码组id，代码组首页，Group ID后的数字Id
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);

    /// <summary>
    /// **参数解释：** 检索条件，名称。
    /// </summary>

    int32_t getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(int32_t value);

    /// <summary>
    /// **参数解释：** 排序字段 id 唯一标识 name 名称 created_at 创建时间 updated_at 更新时间
    /// </summary>

    std::string getOrderBy() const;
    bool orderByIsSet() const;
    void unsetorderBy();
    void setOrderBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序顺序 asc顺序 desc逆序
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否归档
    /// </summary>

    bool isArchived() const;
    bool archivedIsSet() const;
    void unsetarchived();
    void setArchived(bool value);

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


protected:
    int32_t groupId_;
    bool groupIdIsSet_;
    int32_t filter_;
    bool filterIsSet_;
    std::string orderBy_;
    bool orderByIsSet_;
    std::string sort_;
    bool sortIsSet_;
    bool archived_;
    bool archivedIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListGroupSubgroupsAndRepositoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ListGroupSubgroupsAndRepositoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupSubgroupsAndRepositoriesRequest_H_
