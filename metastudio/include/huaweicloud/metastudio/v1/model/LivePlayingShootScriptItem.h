
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LivePlayingShootScriptItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LivePlayingShootScriptItem_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播话术配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LivePlayingShootScriptItem
    : public ModelBase
{
public:
    LivePlayingShootScriptItem();
    virtual ~LivePlayingShootScriptItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LivePlayingShootScriptItem members

    /// <summary>
    /// 剧本序号。
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);

    /// <summary>
    /// 段落标题。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 段落话术内容。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);


protected:
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string text_;
    bool textIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LivePlayingShootScriptItem_H_
