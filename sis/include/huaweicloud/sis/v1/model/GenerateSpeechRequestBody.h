
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRequestBody_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRequestBody_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/GenerateSpeechRequestBody_config.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  GenerateSpeechRequestBody
    : public ModelBase
{
public:
    GenerateSpeechRequestBody();
    virtual ~GenerateSpeechRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GenerateSpeechRequestBody members

    /// <summary>
    /// 待合成的文本，文本长度不大于300字符。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GenerateSpeechRequestBody_config getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const GenerateSpeechRequestBody_config& value);


protected:
    std::string text_;
    bool textIsSet_;
    GenerateSpeechRequestBody_config config_;
    bool configIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRequestBody_H_
