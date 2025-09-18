
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckParametersResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckParametersResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/TaskCheckParamters.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CheckParametersResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckParametersResponse();
    virtual ~CheckParametersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckParametersResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<TaskCheckParamters>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<TaskCheckParamters>& value);


protected:
    std::vector<TaskCheckParamters> body_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckParametersResponse_H_
