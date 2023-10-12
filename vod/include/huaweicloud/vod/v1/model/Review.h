
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_Review_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_Review_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 媒资审核参数
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  Review
    : public ModelBase
{
public:
    Review();
    virtual ~Review();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Review members

    /// <summary>
    /// 审核模板ID。您可以在视频点播控制台配置审核模板后获取，具体请参见[审核设置](https://support.huaweicloud.com/usermanual-vod/vod_01_0057.html)。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 截图检测时间间隔，取值范围为[0,100]，该参数在请求参数中忽略。
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);

    /// <summary>
    /// 鉴政内容检测置信度，取值范围为[0,100]，该参数在请求参数中忽略。 置信度越高，说明审核结果越可信。未开启或设置为0时，表示未进行此项检测。
    /// </summary>

    int32_t getPolitics() const;
    bool politicsIsSet() const;
    void unsetpolitics();
    void setPolitics(int32_t value);

    /// <summary>
    /// 鉴恐内容的检测置信度，取值范围为[0,100]，该参数在请求参数中忽略。 置信度越高，说明审核结果越可信。未开启或设置为0时，表示未进行此项检测。
    /// </summary>

    int32_t getTerrorism() const;
    bool terrorismIsSet() const;
    void unsetterrorism();
    void setTerrorism(int32_t value);

    /// <summary>
    /// 鉴黄内容的检测置信度，取值范围为[0,100]，该参数在请求参数中忽略。 置信度越高，说明审核结果越可信。未开启或设置为0时，表示未进行此项检测。  
    /// </summary>

    int32_t getPorn() const;
    bool pornIsSet() const;
    void unsetporn();
    void setPorn(int32_t value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;
    int32_t interval_;
    bool intervalIsSet_;
    int32_t politics_;
    bool politicsIsSet_;
    int32_t terrorism_;
    bool terrorismIsSet_;
    int32_t porn_;
    bool pornIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_Review_H_
