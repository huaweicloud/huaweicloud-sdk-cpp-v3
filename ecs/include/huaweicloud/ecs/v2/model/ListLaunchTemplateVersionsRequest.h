
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListLaunchTemplateVersionsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListLaunchTemplateVersionsRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListLaunchTemplateVersionsRequest
    : public ModelBase
{
public:
    ListLaunchTemplateVersionsRequest();
    virtual ~ListLaunchTemplateVersionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLaunchTemplateVersionsRequest members

    /// <summary>
    /// max number of resources to return
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// next page resource index id
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 模板id
    /// </summary>

    std::string getLaunchTemplateId() const;
    bool launchTemplateIdIsSet() const;
    void unsetlaunchTemplateId();
    void setLaunchTemplateId(const std::string& value);

    /// <summary>
    /// 镜像id
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 规格id
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    std::vector<int32_t>& getVersion();
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(std::vector<int32_t> value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string launchTemplateId_;
    bool launchTemplateIdIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::vector<int32_t> version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListLaunchTemplateVersionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListLaunchTemplateVersionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListLaunchTemplateVersionsRequest_H_
