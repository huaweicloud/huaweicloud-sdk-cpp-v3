
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PostCustomTTSReq_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PostCustomTTSReq_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/TtsConfig.h>
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
class HUAWEICLOUD_SIS_V1_EXPORT  PostCustomTTSReq
    : public ModelBase
{
public:
    PostCustomTTSReq();
    virtual ~PostCustomTTSReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostCustomTTSReq members

    /// <summary>
    /// 待合成的文本，文本长度限制小于500字符。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TtsConfig getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const TtsConfig& value);


protected:
    std::string text_;
    bool textIsSet_;
    TtsConfig config_;
    bool configIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PostCustomTTSReq_H_
