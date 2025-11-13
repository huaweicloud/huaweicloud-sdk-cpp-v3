
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InsertCommandItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InsertCommandItem_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插入播放命令列表
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InsertCommandItem
    : public ModelBase
{
public:
    InsertCommandItem();
    virtual ~InsertCommandItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InsertCommandItem members

    /// <summary>
    /// 控制命令ID
    /// </summary>

    std::string getCommandId() const;
    bool commandIdIsSet() const;
    void unsetcommandId();
    void setCommandId(const std::string& value);

    /// <summary>
    /// 命令名称。 - INSERT_PLAY_SCRIPT: 插入表演脚本。用于互动回复。数字人不变，背景不变。params结构定义：[PlayTextInfo](metastudio_02_0014.xml) - INSERT_PLAY_AUDIO:插入驱动音频。用于音频直接驱动。数字人不变，背景不变。params结构定义：[PlayAudioInfo](metastudio_02_0014.xml) - REWRITE_INTERACTION_RULES: 修改互动规则。params结构定义：[PlayAudioInfo](metastudio_02_0014.xml)
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// 命令参数。
    /// </summary>

    Object getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const Object& value);

    /// <summary>
    /// 命令来源。 * EXTERNAL： 外部命令 * AUTO: 系统自动触发
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);


protected:
    std::string commandId_;
    bool commandIdIsSet_;
    std::string command_;
    bool commandIsSet_;
    Object params_;
    bool paramsIsSet_;
    std::string source_;
    bool sourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InsertCommandItem_H_
