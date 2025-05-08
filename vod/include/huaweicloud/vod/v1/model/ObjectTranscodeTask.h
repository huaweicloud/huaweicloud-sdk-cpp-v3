
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectTranscodeTask_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectTranscodeTask_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ObjectTranscodeTask
    : public ModelBase
{
public:
    ObjectTranscodeTask();
    virtual ~ObjectTranscodeTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectTranscodeTask members

    /// <summary>
    /// 转码模板ID 
    /// </summary>

    std::string getTransTemplateId() const;
    bool transTemplateIdIsSet() const;
    void unsettransTemplateId();
    void setTransTemplateId(const std::string& value);

    /// <summary>
    /// 转码输出文件名 
    /// </summary>

    std::string getOutputName() const;
    bool outputNameIsSet() const;
    void unsetoutputName();
    void setOutputName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsInfo& value);


protected:
    std::string transTemplateId_;
    bool transTemplateIdIsSet_;
    std::string outputName_;
    bool outputNameIsSet_;
    ObsInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ObjectTranscodeTask_H_
