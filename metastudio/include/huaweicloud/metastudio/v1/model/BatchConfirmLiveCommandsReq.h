
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchConfirmLiveCommandsReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchConfirmLiveCommandsReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 批量确认命令。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BatchConfirmLiveCommandsReq
    : public ModelBase
{
public:
    BatchConfirmLiveCommandsReq();
    virtual ~BatchConfirmLiveCommandsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchConfirmLiveCommandsReq members

    /// <summary>
    /// 命令名称。 - REWRITE_PLAY_SCRIPT: 动态编辑未播放剧本。 - REWRITE_INTERACTION_RULES: 动态修改互动规则。
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// 确认操作。 * confirm: 确认。 * reject: 拒绝。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 命令ID列表。不填则为全部未播放的插入命令均清理。
    /// </summary>

    std::vector<std::string>& getCommandIds();
    bool commandIdsIsSet() const;
    void unsetcommandIds();
    void setCommandIds(const std::vector<std::string>& value);


protected:
    std::string command_;
    bool commandIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::vector<std::string> commandIds_;
    bool commandIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BatchConfirmLiveCommandsReq_H_
