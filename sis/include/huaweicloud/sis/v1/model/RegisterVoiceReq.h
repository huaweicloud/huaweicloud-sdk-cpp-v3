
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceReq_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceReq_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sis/v1/model/RegisterVoiceReq_config.h>

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
class HUAWEICLOUD_SIS_V1_EXPORT  RegisterVoiceReq
    : public ModelBase
{
public:
    RegisterVoiceReq();
    virtual ~RegisterVoiceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterVoiceReq members

    /// <summary>
    /// 
    /// </summary>

    RegisterVoiceReq_config getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const RegisterVoiceReq_config& value);

    /// <summary>
    /// 录音数据，使用base64编码，大小不超过6MB。支持wav、mp3、m4a格式，采样率不小于16kHz，时长在5-25秒，支持单、双通道。
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);


protected:
    RegisterVoiceReq_config config_;
    bool configIsSet_;
    std::string data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_RegisterVoiceReq_H_
