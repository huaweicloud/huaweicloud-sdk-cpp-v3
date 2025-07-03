
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListTemplatesResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListTemplatesResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/LaunchTemplate.h>
#include <string>
#include <huaweicloud/ecs/v2/model/ResponsePageInfoV3.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTemplatesResponse();
    virtual ~ListTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplatesResponse members

    /// <summary>
    /// 模板列表
    /// </summary>

    std::vector<LaunchTemplate>& getLaunchTemplates();
    bool launchTemplatesIsSet() const;
    void unsetlaunchTemplates();
    void setLaunchTemplates(const std::vector<LaunchTemplate>& value);

    /// <summary>
    /// 
    /// </summary>

    ResponsePageInfoV3 getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const ResponsePageInfoV3& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<LaunchTemplate> launchTemplates_;
    bool launchTemplatesIsSet_;
    ResponsePageInfoV3 pageInfo_;
    bool pageInfoIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListTemplatesResponse_H_
