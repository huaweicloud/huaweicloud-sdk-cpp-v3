
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryReviewAuthorsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryReviewAuthorsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/UserBasicDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListRepositoryReviewAuthorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRepositoryReviewAuthorsResponse();
    virtual ~ListRepositoryReviewAuthorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRepositoryReviewAuthorsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<UserBasicDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<UserBasicDto>& value);


protected:
    std::vector<UserBasicDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListRepositoryReviewAuthorsResponse_H_
