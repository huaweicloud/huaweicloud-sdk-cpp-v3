
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListTenantRepositoriesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListTenantRepositoriesRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListTenantRepositoriesRequest
    : public ModelBase
{
public:
    ListTenantRepositoriesRequest();
    virtual ~ListTenantRepositoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTenantRepositoriesRequest members

    /// <summary>
    /// **参数解释：** 仓库名称。 **取值范围：** 字符串长度不少于1，不超过128。
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员数量。
    /// </summary>

    int32_t getMemberNumber() const;
    bool memberNumberIsSet() const;
    void unsetmemberNumber();
    void setMemberNumber(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库状态。 **取值范围：** - 0，正常。 - 3，冻结。 - 4，关闭。 - 5，清理中。 - 7，删除中。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库所有者。 **取值范围：** 字符串长度不少于1，不超过128。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// **参数解释：** 筛选在该时间之后创建的仓库。
    /// </summary>

    utility::datetime getCreatedAfter() const;
    bool createdAfterIsSet() const;
    void unsetcreatedAfter();
    void setCreatedAfter(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 筛选在该时间之前创建的仓库。
    /// </summary>

    utility::datetime getCreatedBefore() const;
    bool createdBeforeIsSet() const;
    void unsetcreatedBefore();
    void setCreatedBefore(const utility::datetime& value);

    /// <summary>
    /// **参数解释：** 结果集排序方式。 **约束限制：** 与sort_field搭配使用。  **取值范围：** - asc，正序返回。 - desc，倒序返回。
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// **参数解释：** 用作排序的字段。 - owner，仓库所有者。 - capacity，使用空间。 - status，状态。 - create_time，创建时间。 - member_number，成员数量。 - repository_name，仓库名称。
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

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
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    int32_t memberNumber_;
    bool memberNumberIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    utility::datetime createdAfter_;
    bool createdAfterIsSet_;
    utility::datetime createdBefore_;
    bool createdBeforeIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTenantRepositoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ListTenantRepositoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListTenantRepositoriesRequest_H_
