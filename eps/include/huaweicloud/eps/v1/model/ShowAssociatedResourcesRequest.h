
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowAssociatedResourcesRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowAssociatedResourcesRequest_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ShowAssociatedResourcesRequest
    : public ModelBase
{
public:
    ShowAssociatedResourcesRequest();
    virtual ~ShowAssociatedResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssociatedResourcesRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 区域ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAssociatedResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAssociatedResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowAssociatedResourcesRequest_H_
