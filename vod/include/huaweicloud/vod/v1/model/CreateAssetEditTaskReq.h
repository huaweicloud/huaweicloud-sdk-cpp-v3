
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateAssetEditTaskReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateAssetEditTaskReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/VodEditingSetting.h>
#include <huaweicloud/vod/v1/model/EditInput.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateAssetEditTaskReq
    : public ModelBase
{
public:
    CreateAssetEditTaskReq();
    virtual ~CreateAssetEditTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAssetEditTaskReq members

    /// <summary>
    /// 待编辑媒资列表，最多支持20个。 
    /// </summary>

    std::vector<EditInput>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<EditInput>& value);

    /// <summary>
    /// 
    /// </summary>

    VodEditingSetting getEditingSettings() const;
    bool editingSettingsIsSet() const;
    void unseteditingSettings();
    void setEditingSettings(const VodEditingSetting& value);


protected:
    std::vector<EditInput> inputs_;
    bool inputsIsSet_;
    VodEditingSetting editingSettings_;
    bool editingSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateAssetEditTaskReq_H_
