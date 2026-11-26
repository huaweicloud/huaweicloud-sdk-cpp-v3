
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetFileDownLoadPathResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetFileDownLoadPathResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAssetFileDownLoadPathResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAssetFileDownLoadPathResponse();
    virtual ~CreateAssetFileDownLoadPathResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAssetFileDownLoadPathResponse members

    /// <summary>
    /// **参数解释**：资产文件下载临时路径。
    /// </summary>

    std::string getSignedurl() const;
    bool signedurlIsSet() const;
    void unsetsignedurl();
    void setSignedurl(const std::string& value);


protected:
    std::string signedurl_;
    bool signedurlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAssetFileDownLoadPathResponse_H_
