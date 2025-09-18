
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateIgnorePathRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateIgnorePathRequestBody_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/IgnorePathSettingItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  UpdateIgnorePathRequestBody
    : public ModelBase
{
public:
    UpdateIgnorePathRequestBody();
    virtual ~UpdateIgnorePathRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIgnorePathRequestBody members

    /// <summary>
    /// 屏蔽目录的节点信息列表
    /// </summary>

    std::vector<IgnorePathSettingItem>& getIgnorePathSettings();
    bool ignorePathSettingsIsSet() const;
    void unsetignorePathSettings();
    void setIgnorePathSettings(const std::vector<IgnorePathSettingItem>& value);


protected:
    std::vector<IgnorePathSettingItem> ignorePathSettings_;
    bool ignorePathSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateIgnorePathRequestBody_H_
