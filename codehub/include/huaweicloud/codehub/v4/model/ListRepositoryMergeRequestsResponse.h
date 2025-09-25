
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryMergeRequestsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryMergeRequestsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/MergeRequestListBasicDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListRepositoryMergeRequestsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRepositoryMergeRequestsResponse();
    virtual ~ListRepositoryMergeRequestsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryMergeRequestsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<MergeRequestListBasicDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<MergeRequestListBasicDto>& value);


protected:
    std::vector<MergeRequestListBasicDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryMergeRequestsResponse_H_
