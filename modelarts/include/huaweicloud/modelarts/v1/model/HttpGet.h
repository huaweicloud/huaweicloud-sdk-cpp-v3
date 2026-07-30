
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HttpGet_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HttpGet_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HttpGet
    : public ModelBase
{
public:
    HttpGet();
    virtual ~HttpGet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpGet members

    /// <summary>
    /// **参数解释**： http获取指标的url路径，与下面的端口必须同时填或者不填。 **取值范围**： 不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释**： http获取指标的端口，与上面的url路径必须同时填或者不填。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);


protected:
    std::string path_;
    bool pathIsSet_;
    int32_t port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HttpGet_H_
