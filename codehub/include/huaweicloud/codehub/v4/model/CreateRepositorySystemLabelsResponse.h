
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateRepositorySystemLabelsResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateRepositorySystemLabelsResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codehub/v4/model/LabelDetailDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateRepositorySystemLabelsResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateRepositorySystemLabelsResponse();
    virtual ~CreateRepositorySystemLabelsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRepositorySystemLabelsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<LabelDetailDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<LabelDetailDto>& value);


protected:
    std::vector<LabelDetailDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateRepositorySystemLabelsResponse_H_
