
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListMergeRequestChangesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListMergeRequestChangesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/SimpleMergeRequestChangesDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListMergeRequestChangesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMergeRequestChangesResponse();
    virtual ~ListMergeRequestChangesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestChangesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<SimpleMergeRequestChangesDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<SimpleMergeRequestChangesDto>& value);


protected:
    std::vector<SimpleMergeRequestChangesDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListMergeRequestChangesResponse_H_
