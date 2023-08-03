
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListProjectTagsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListProjectTagsResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ProjectTagInfoResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListProjectTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectTagsResponse();
    virtual ~ListProjectTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListProjectTagsResponse members

    /// <summary>
    /// 标签列表，没有标签默认为空数组。
    /// </summary>

    std::vector<ProjectTagInfoResponse>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ProjectTagInfoResponse>& value);


protected:
    std::vector<ProjectTagInfoResponse> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListProjectTagsResponse_H_
