
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PredictUrlResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PredictUrlResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 在线服务访问地址。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PredictUrlResponse
    : public ModelBase
{
public:
    PredictUrlResponse();
    virtual ~PredictUrlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PredictUrlResponse members

    /// <summary>
    /// **参数解释：** 访问方式。 **取值范围：** - CONSOLE：通过控制台界面访问。 - PUBLIC：通过公网访问。 - INTERNAL：通过内网访问。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 推理请求的访问地址，仅当type为REAL_TIME时，且服务部署完成后才会确保该字段有值。
    /// </summary>

    std::vector<std::string>& getUrls();
    bool urlsIsSet() const;
    void unseturls();
    void setUrls(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> urls_;
    bool urlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PredictUrlResponse_H_
