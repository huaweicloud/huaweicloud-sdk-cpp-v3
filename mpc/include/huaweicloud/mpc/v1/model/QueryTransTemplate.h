
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_QueryTransTemplate_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_QueryTransTemplate_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/Common.h>
#include <huaweicloud/mpc/v1/model/Video.h>
#include <huaweicloud/mpc/v1/model/Audio.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  QueryTransTemplate
    : public ModelBase
{
public:
    QueryTransTemplate();
    virtual ~QueryTransTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTransTemplate members

    /// <summary>
    /// 转码模板名称。 
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Video getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const Video& value);

    /// <summary>
    /// 
    /// </summary>

    Audio getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const Audio& value);

    /// <summary>
    /// 
    /// </summary>

    Common getCommon() const;
    bool commonIsSet() const;
    void unsetcommon();
    void setCommon(const Common& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    Video video_;
    bool videoIsSet_;
    Audio audio_;
    bool audioIsSet_;
    Common common_;
    bool commonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_QueryTransTemplate_H_
