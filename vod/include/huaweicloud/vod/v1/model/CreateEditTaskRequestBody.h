
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateEditTaskRequestBody_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateEditTaskRequestBody_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <string>
#include <huaweicloud/vod/v1/model/EditingSetting.h>
#include <huaweicloud/vod/v1/model/AdditionalObjectProcessReq.h>
#include <vector>
#include <huaweicloud/vod/v1/model/EditMediaTaskInput.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateEditTaskRequestBody
    : public ModelBase
{
public:
    CreateEditTaskRequestBody();
    virtual ~CreateEditTaskRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEditTaskRequestBody members

    /// <summary>
    /// 编辑任务输入
    /// </summary>

    std::vector<EditMediaTaskInput>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<EditMediaTaskInput>& value);

    /// <summary>
    /// 输出文件名
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    EditingSetting getEditingSettings() const;
    bool editingSettingsIsSet() const;
    void unseteditingSettings();
    void setEditingSettings(const EditingSetting& value);

    /// <summary>
    /// 回调地址
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// 自定义上下文
    /// </summary>

    std::string getSessionContext() const;
    bool sessionContextIsSet() const;
    void unsetsessionContext();
    void setSessionContext(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AdditionalObjectProcessReq getMediaProcessTask() const;
    bool mediaProcessTaskIsSet() const;
    void unsetmediaProcessTask();
    void setMediaProcessTask(const AdditionalObjectProcessReq& value);


protected:
    std::vector<EditMediaTaskInput> inputs_;
    bool inputsIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    EditingSetting editingSettings_;
    bool editingSettingsIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string sessionContext_;
    bool sessionContextIsSet_;
    ObsInfo output_;
    bool outputIsSet_;
    AdditionalObjectProcessReq mediaProcessTask_;
    bool mediaProcessTaskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateEditTaskRequestBody_H_
