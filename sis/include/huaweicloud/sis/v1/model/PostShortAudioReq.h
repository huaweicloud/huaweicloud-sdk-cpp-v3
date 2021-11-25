
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PostShortAudioReq_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PostShortAudioReq_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/Config.h>
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
class HUAWEICLOUD_SIS_V1_EXPORT  PostShortAudioReq
    : public ModelBase
{
public:
    PostShortAudioReq();
    virtual ~PostShortAudioReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostShortAudioReq members

    /// <summary>
    /// 
    /// </summary>

    Config getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const Config& value);

    /// <summary>
    /// 语音数据，base64编码，要求base64编码后大小不超过4M，音频时长不超过1分钟。
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);


protected:
    Config config_;
    bool configIsSet_;
    std::string data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PostShortAudioReq_H_
