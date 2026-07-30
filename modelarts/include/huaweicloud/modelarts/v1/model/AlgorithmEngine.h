
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmEngine_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmEngine_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Engine.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 异构作业所依赖的引擎。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmEngine
    : public ModelBase
{
public:
    AlgorithmEngine();
    virtual ~AlgorithmEngine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmEngine members

    /// <summary>
    /// 引擎规格的ID。如“caffe-1.0.0-python2.7”。
    /// </summary>

    std::string getEngineId() const;
    bool engineIdIsSet() const;
    void unsetengineId();
    void setEngineId(const std::string& value);

    /// <summary>
    /// 引擎规格的名称。如“Caffe”。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 引擎规格的版本。对一个引擎名称，有多个版本的引擎，如使用python2.7的\&quot;Caffe-1.0.0-python2.7\&quot;等。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 是否为v1兼容模式。
    /// </summary>

    bool isV1Compatible() const;
    bool v1CompatibleIsSet() const;
    void unsetv1Compatible();
    void setV1Compatible(bool value);

    /// <summary>
    /// 引擎默认启动用户uid。
    /// </summary>

    std::string getRunUser() const;
    bool runUserIsSet() const;
    void unsetrunUser();
    void setRunUser(const std::string& value);

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
    bool v1Compatible_;
    bool v1CompatibleIsSet_;
    std::string runUser_;
    bool runUserIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmEngine_H_
