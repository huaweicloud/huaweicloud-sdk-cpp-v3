
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetActionRsp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetActionRsp_H_


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
/// **参数解释**：资产可执行操作详情配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AssetActionRsp
    : public ModelBase
{
public:
    AssetActionRsp();
    virtual ~AssetActionRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetActionRsp members

    /// <summary>
    /// **参数解释**：资产action类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getActionType() const;
    bool actionTypeIsSet() const;
    void unsetactionType();
    void setActionType(const std::string& value);

    /// <summary>
    /// **参数解释**：资产action配置文件地址。 **取值范围**：不涉及。
    /// </summary>

    std::string getActionDir() const;
    bool actionDirIsSet() const;
    void unsetactionDir();
    void setActionDir(const std::string& value);


protected:
    std::string actionType_;
    bool actionTypeIsSet_;
    std::string actionDir_;
    bool actionDirIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetActionRsp_H_
