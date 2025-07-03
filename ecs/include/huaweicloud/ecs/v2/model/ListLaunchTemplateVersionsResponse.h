
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListLaunchTemplateVersionsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListLaunchTemplateVersionsResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/TemplateVersion.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  ListLaunchTemplateVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLaunchTemplateVersionsResponse();
    virtual ~ListLaunchTemplateVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLaunchTemplateVersionsResponse members

    /// <summary>
    /// 模板版本列表
    /// </summary>

    std::vector<TemplateVersion>& getLaunchTemplateVersions();
    bool launchTemplateVersionsIsSet() const;
    void unsetlaunchTemplateVersions();
    void setLaunchTemplateVersions(const std::vector<TemplateVersion>& value);

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
    std::vector<TemplateVersion> launchTemplateVersions_;
    bool launchTemplateVersionsIsSet_;
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListLaunchTemplateVersionsResponse_H_
