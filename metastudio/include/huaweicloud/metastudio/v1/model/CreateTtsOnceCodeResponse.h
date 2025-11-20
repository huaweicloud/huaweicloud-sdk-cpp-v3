
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTtsOnceCodeResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTtsOnceCodeResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateTtsOnceCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTtsOnceCodeResponse();
    virtual ~CreateTtsOnceCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTtsOnceCodeResponse members

    /// <summary>
    /// 获取到的一次性token
    /// </summary>

    std::string getOnceCode() const;
    bool onceCodeIsSet() const;
    void unsetonceCode();
    void setOnceCode(const std::string& value);


protected:
    std::string onceCode_;
    bool onceCodeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTtsOnceCodeResponse_H_
