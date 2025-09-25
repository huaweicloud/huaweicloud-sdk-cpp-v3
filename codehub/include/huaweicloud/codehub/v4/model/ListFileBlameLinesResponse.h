
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListFileBlameLinesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListFileBlameLinesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/BlameDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListFileBlameLinesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFileBlameLinesResponse();
    virtual ~ListFileBlameLinesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFileBlameLinesResponse members

    /// <summary>
    /// 溯源信息
    /// </summary>

    std::vector<BlameDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<BlameDto>& value);


protected:
    std::vector<BlameDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListFileBlameLinesResponse_H_
