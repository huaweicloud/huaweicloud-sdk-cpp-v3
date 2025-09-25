
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryLabelsRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryLabelsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListRepositoryLabelsRequest
    : public ModelBase
{
public:
    ListRepositoryLabelsRequest();
    virtual ~ListRepositoryLabelsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryLabelsRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

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
    /// **参数解释：** 查询关键字，可模糊匹配标签名。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：**  排序。 **约束限制：** 不涉及。 **取值范围：** - name_asc，按标签名升序。 - name_desc，按标签名降序。 - created_asc，按标创建时间升序。 - created_desc，按标创建时间降序。 - updated_asc，按标更新时间升序。 - updated_desc，按标更新时间降序。 **默认取值：** name_asc
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否包含失效的标签。 **约束限制：** 不涉及。 **取值范围：** - true，包含。 - false，不包含。 **默认取值：** true
    /// </summary>

    bool isIncludeExpired() const;
    bool includeExpiredIsSet() const;
    void unsetincludeExpired();
    void setIncludeExpired(bool value);

    /// <summary>
    /// **参数解释：** 结果集属性，根据给定的参数返回不同的结果。 **约束限制：** 不涉及。 **取值范围：** - simple，返回简略信息。 - basic，返回基本信息。 - detail，返回详细信息。 **默认取值：** basic
    /// </summary>

    std::string getView() const;
    bool viewIsSet() const;
    void unsetview();
    void setView(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::string sort_;
    bool sortIsSet_;
    bool includeExpired_;
    bool includeExpiredIsSet_;
    std::string view_;
    bool viewIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRepositoryLabelsRequest& dereference_from_shared_ptr(std::shared_ptr<ListRepositoryLabelsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryLabelsRequest_H_
