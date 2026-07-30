
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FrozenInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FrozenInfo_H_


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
/// 资源的冻结信息，当资源被冻结时返回冻结的类型信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  FrozenInfo
    : public ModelBase
{
public:
    FrozenInfo();
    virtual ~FrozenInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FrozenInfo members

    /// <summary>
    /// 冻结场景。可选值如下： - ARREAR：欠费冻结 - POLICE：公安冻结 - ILLEGAL：违规冻结
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 冻结后的影响。可选值如下： - 1：冻结后可释放 - 2：冻结后不可释放
    /// </summary>

    int32_t getEffect() const;
    bool effectIsSet() const;
    void unseteffect();
    void setEffect(int32_t value);


protected:
    std::string scene_;
    bool sceneIsSet_;
    int32_t effect_;
    bool effectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FrozenInfo_H_
