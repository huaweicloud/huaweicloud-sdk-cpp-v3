
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListDiscussionTemplatesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListDiscussionTemplatesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codehub/v4/model/DiscussionTemplateDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListDiscussionTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDiscussionTemplatesResponse();
    virtual ~ListDiscussionTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDiscussionTemplatesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<DiscussionTemplateDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<DiscussionTemplateDto>& value);


protected:
    std::vector<DiscussionTemplateDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListDiscussionTemplatesResponse_H_
