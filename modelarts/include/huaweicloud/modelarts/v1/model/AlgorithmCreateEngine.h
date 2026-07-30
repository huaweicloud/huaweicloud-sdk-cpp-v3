
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmCreateEngine_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmCreateEngine_H_


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
/// 算法的引擎。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmCreateEngine
    : public ModelBase
{
public:
    AlgorithmCreateEngine();
    virtual ~AlgorithmCreateEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmCreateEngine members

    /// <summary>
    /// 算法选择的引擎规格ID。
    /// </summary>

    std::string getEngineId() const;
    bool engineIdIsSet() const;
    void unsetengineId();
    void setEngineId(const std::string& value);

    /// <summary>
    /// 算法选择的引擎版本名称。若填入engine_id则无需填写。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 算法选择的引擎版本名称。若填入engine_id则无需填写。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 算法选择的自定义镜像地址。
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);


protected:
    std::string engineId_;
    bool engineIdIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmCreateEngine_H_
