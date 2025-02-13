
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_AdditionalManifests_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_AdditionalManifests_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  AdditionalManifests
    : public ModelBase
{
public:
    AdditionalManifests();
    virtual ~AdditionalManifests();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdditionalManifests members

    /// <summary>
    /// 定制的索引后缀名 
    /// </summary>

    std::string getManifestNameModifier() const;
    bool manifestNameModifierIsSet() const;
    void unsetmanifestNameModifier();
    void setManifestNameModifier(const std::string& value);

    /// <summary>
    /// 选择的流名称
    /// </summary>

    std::vector<std::string>& getSelectedOutputs();
    bool selectedOutputsIsSet() const;
    void unsetselectedOutputs();
    void setSelectedOutputs(const std::vector<std::string>& value);


protected:
    std::string manifestNameModifier_;
    bool manifestNameModifierIsSet_;
    std::vector<std::string> selectedOutputs_;
    bool selectedOutputsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_AdditionalManifests_H_
