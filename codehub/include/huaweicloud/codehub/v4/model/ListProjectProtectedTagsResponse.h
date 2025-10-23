
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectProtectedTagsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectProtectedTagsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ProjectProtectedTagPo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListProjectProtectedTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectProtectedTagsResponse();
    virtual ~ListProjectProtectedTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectProtectedTagsResponse members

    /// <summary>
    /// 保护tag详情列表
    /// </summary>

    std::vector<ProjectProtectedTagPo>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ProjectProtectedTagPo>& value);


protected:
    std::vector<ProjectProtectedTagPo> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListProjectProtectedTagsResponse_H_
