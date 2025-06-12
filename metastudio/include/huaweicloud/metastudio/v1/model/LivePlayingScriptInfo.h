
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LivePlayingScriptInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LivePlayingScriptInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LivePlayingShootScriptItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播进度信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LivePlayingScriptInfo
    : public ModelBase
{
public:
    LivePlayingScriptInfo();
    virtual ~LivePlayingScriptInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LivePlayingScriptInfo members

    /// <summary>
    /// 剧本名称
    /// </summary>

    std::string getScriptName() const;
    bool scriptNameIsSet() const;
    void unsetscriptName();
    void setScriptName(const std::string& value);

    /// <summary>
    /// 数字人模型资产ID，可以从资产库中查询。
    /// </summary>

    std::string getModelAssetId() const;
    bool modelAssetIdIsSet() const;
    void unsetmodelAssetId();
    void setModelAssetId(const std::string& value);

    /// <summary>
    /// 拍摄脚本列表。
    /// </summary>

    std::vector<LivePlayingShootScriptItem>& getShootScripts();
    bool shootScriptsIsSet() const;
    void unsetshootScripts();
    void setShootScripts(const std::vector<LivePlayingShootScriptItem>& value);


protected:
    std::string scriptName_;
    bool scriptNameIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    std::vector<LivePlayingShootScriptItem> shootScripts_;
    bool shootScriptsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LivePlayingScriptInfo_H_
