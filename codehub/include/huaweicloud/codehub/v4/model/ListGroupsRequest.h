
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupsRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupsRequest_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListGroupsRequest
    : public ModelBase
{
public:
    ListGroupsRequest();
    virtual ~ListGroupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupsRequest members

    /// <summary>
    /// **参数解释：** 检索内容
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 所有可用的代码组。
    /// </summary>

    bool isAllAvailable() const;
    bool allAvailableIsSet() const;
    void unsetallAvailable();
    void setAllAvailable(bool value);

    /// <summary>
    /// **参数解释：** 排序字段，name 名称 path 路径 id 唯一标识 created_at 创建时间 updated_at 更新时间
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
    /// **参数解释：** 是否关注。
    /// </summary>

    bool isStarred() const;
    bool starredIsSet() const;
    void unsetstarred();
    void setStarred(bool value);

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
    /// **参数解释：**
    /// </summary>

    bool isOwned() const;
    bool ownedIsSet() const;
    void unsetowned();
    void setOwned(bool value);


protected:
    std::string search_;
    bool searchIsSet_;
    bool allAvailable_;
    bool allAvailableIsSet_;
    std::string orderBy_;
    bool orderByIsSet_;
    std::string sort_;
    bool sortIsSet_;
    bool starred_;
    bool starredIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    bool owned_;
    bool ownedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListGroupsRequest& dereference_from_shared_ptr(std::shared_ptr<ListGroupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupsRequest_H_
