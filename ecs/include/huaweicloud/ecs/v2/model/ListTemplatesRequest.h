
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListTemplatesRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListTemplatesRequest_H_


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
class HUAWEICLOUD_ECS_V2_EXPORT  ListTemplatesRequest
    : public ModelBase
{
public:
    ListTemplatesRequest();
    virtual ~ListTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplatesRequest members

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
    /// 模板ID
    /// </summary>

    std::vector<std::string>& getLaunchTemplateId();
    bool launchTemplateIdIsSet() const;
    void unsetlaunchTemplateId();
    void setLaunchTemplateId(const std::vector<std::string>& value);

    /// <summary>
    /// 模板名称
    /// </summary>

    std::vector<std::string>& getName();
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::vector<std::string>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::vector<std::string> launchTemplateId_;
    bool launchTemplateIdIsSet_;
    std::vector<std::string> name_;
    bool nameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<ListTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListTemplatesRequest_H_
