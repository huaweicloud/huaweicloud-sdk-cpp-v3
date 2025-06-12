
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateVideoScriptResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateVideoScriptResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ShootScriptAudioFiles.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateVideoScriptResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateVideoScriptResponse();
    virtual ~UpdateVideoScriptResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateVideoScriptResponse members

    /// <summary>
    /// 剧本ID
    /// </summary>

    std::string getScriptId() const;
    bool scriptIdIsSet() const;
    void unsetscriptId();
    void setScriptId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ShootScriptAudioFiles getAudioFiles() const;
    bool audioFilesIsSet() const;
    void unsetaudioFiles();
    void setAudioFiles(const ShootScriptAudioFiles& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string scriptId_;
    bool scriptIdIsSet_;
    ShootScriptAudioFiles audioFiles_;
    bool audioFilesIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateVideoScriptResponse_H_
