
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateRepoNamesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateRepoNamesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/ValidateRepoNameResultDto.h>
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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  BatchValidateRepoNamesResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchValidateRepoNamesResponse();
    virtual ~BatchValidateRepoNamesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchValidateRepoNamesResponse members

    /// <summary>
    /// 检查结果
    /// </summary>

    std::vector<ValidateRepoNameResultDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ValidateRepoNameResultDto>& value);


protected:
    std::vector<ValidateRepoNameResultDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_BatchValidateRepoNamesResponse_H_
