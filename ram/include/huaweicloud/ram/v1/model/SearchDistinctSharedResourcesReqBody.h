
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedResourcesReqBody_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedResourcesReqBody_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// The request body of the SearchSharedResources operation.
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchDistinctSharedResourcesReqBody
    : public ModelBase
{
public:
    SearchDistinctSharedResourcesReqBody();
    virtual ~SearchDistinctSharedResourcesReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchDistinctSharedResourcesReqBody members

    /// <summary>
    /// 分页页面的最大值。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 页面标记。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 指定资源ID。
    /// </summary>

    std::vector<std::string>& getResourceIds();
    bool resourceIdsIsSet() const;
    void unsetresourceIds();
    void setResourceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 指定资源使用者。
    /// </summary>

    std::string getPrincipal() const;
    bool principalIsSet() const;
    void unsetprincipal();
    void setPrincipal(const std::string& value);

    /// <summary>
    /// 资源所在的区域。
    /// </summary>

    std::string getResourceRegion() const;
    bool resourceRegionIsSet() const;
    void unsetresourceRegion();
    void setResourceRegion(const std::string& value);

    /// <summary>
    /// 指定资源URN的列表。
    /// </summary>

    std::vector<std::string>& getResourceUrns();
    bool resourceUrnsIsSet() const;
    void unsetresourceUrns();
    void setResourceUrns(const std::vector<std::string>& value);

    /// <summary>
    /// 指定资源共享实例的所有者（self或者other-accounts）。
    /// </summary>

    std::string getResourceOwner() const;
    bool resourceOwnerIsSet() const;
    void unsetresourceOwner();
    void setResourceOwner(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::vector<std::string> resourceIds_;
    bool resourceIdsIsSet_;
    std::string principal_;
    bool principalIsSet_;
    std::string resourceRegion_;
    bool resourceRegionIsSet_;
    std::vector<std::string> resourceUrns_;
    bool resourceUrnsIsSet_;
    std::string resourceOwner_;
    bool resourceOwnerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedResourcesReqBody_H_
