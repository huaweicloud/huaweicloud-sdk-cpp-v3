
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_EditMediaTask_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_EditMediaTask_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/TaskOutPut.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  EditMediaTask
    : public ModelBase
{
public:
    EditMediaTask();
    virtual ~EditMediaTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EditMediaTask members

    /// <summary>
    /// 剪辑任务的输入文件信息
    /// </summary>

    std::vector<EditMediaTaskInput>& getInputs();
    bool inputsIsSet() const;
    void unsetinputs();
    void setInputs(const std::vector<EditMediaTaskInput>& value);

    /// <summary>
    /// 
    /// </summary>

    TaskOutPut getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const TaskOutPut& value);


protected:
    std::vector<EditMediaTaskInput> inputs_;
    bool inputsIsSet_;
    TaskOutPut output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_EditMediaTask_H_
