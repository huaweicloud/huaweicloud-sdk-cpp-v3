
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_AdditionalManifest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_AdditionalManifest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  AdditionalManifest
    : public ModelBase
{
public:
    AdditionalManifest();
    virtual ~AdditionalManifest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AdditionalManifest members

    /// <summary>
    /// 索引后缀名，后缀名仅支持数字，字母、下划线、中划线。
    /// </summary>

    std::string getManifestNameModifier() const;
    bool manifestNameModifierIsSet() const;
    void unsetmanifestNameModifier();
    void setManifestNameModifier(const std::string& value);

    /// <summary>
    /// 选择流名列表，最多支持9路流。
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

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_AdditionalManifest_H_
