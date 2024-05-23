
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceSharesReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceSharesReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/TagFilter.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The request body of the SearchResourceShares operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchResourceSharesReqBody
    : public ModelBase
{
public:
    SearchResourceSharesReqBody();
    virtual ~SearchResourceSharesReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceSharesReqBody members

    /// <summary>
    /// 分页页面的最大值。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 资源共享实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 页面标记。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 权限ID。
    /// </summary>

    std::string getPermissionId() const;
    bool permissionIdIsSet() const;
    void unsetpermissionId();
    void setPermissionId(const std::string& value);

    /// <summary>
    /// 检索您创建的或共享给您的（self或者other-accounts）资源共享实例。
    /// </summary>

    std::string getResourceOwner() const;
    bool resourceOwnerIsSet() const;
    void unsetresourceOwner();
    void setResourceOwner(const std::string& value);

    /// <summary>
    /// 资源共享实例的ID列表。
    /// </summary>

    std::vector<std::string>& getResourceShareIds();
    bool resourceShareIdsIsSet() const;
    void unsetresourceShareIds();
    void setResourceShareIds(const std::vector<std::string>& value);

    /// <summary>
    /// 资源共享实例的状态。
    /// </summary>

    std::string getResourceShareStatus() const;
    bool resourceShareStatusIsSet() const;
    void unsetresourceShareStatus();
    void setResourceShareStatus(const std::string& value);

    /// <summary>
    /// 资源共享实例的标签。
    /// </summary>

    std::vector<TagFilter>& getTagFilters();
    bool tagFiltersIsSet() const;
    void unsettagFilters();
    void setTagFilters(const std::vector<TagFilter>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string permissionId_;
    bool permissionIdIsSet_;
    std::string resourceOwner_;
    bool resourceOwnerIsSet_;
    std::vector<std::string> resourceShareIds_;
    bool resourceShareIdsIsSet_;
    std::string resourceShareStatus_;
    bool resourceShareStatusIsSet_;
    std::vector<TagFilter> tagFilters_;
    bool tagFiltersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceSharesReqBody_H_
