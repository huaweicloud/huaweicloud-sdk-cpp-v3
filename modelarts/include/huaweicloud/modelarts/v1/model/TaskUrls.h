
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskUrls_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskUrls_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SSH连接地址信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TaskUrls
    : public ModelBase
{
public:
    TaskUrls();
    virtual ~TaskUrls();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskUrls members

    /// <summary>
    /// 训练作业的任务ID。
    /// </summary>

    std::string getTask() const;
    bool taskIsSet() const;
    void unsettask();
    void setTask(const std::string& value);

    /// <summary>
    /// 训练作业SSH连接地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string task_;
    bool taskIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TaskUrls_H_
