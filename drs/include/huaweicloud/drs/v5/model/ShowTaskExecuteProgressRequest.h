
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowTaskExecuteProgressRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowTaskExecuteProgressRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowTaskExecuteProgressRequest
    : public ModelBase
{
public:
    ShowTaskExecuteProgressRequest();
    virtual ~ShowTaskExecuteProgressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskExecuteProgressRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 异步任务的唯一标识符。调用导出创建模板接口后从响应中获取该ID，用于后续查询任务执行进度。
    /// </summary>

    std::string getAsyncJobId() const;
    bool asyncJobIdIsSet() const;
    void unsetasyncJobId();
    void setAsyncJobId(const std::string& value);

    /// <summary>
    /// 查询异步任务类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTaskExecuteProgressRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTaskExecuteProgressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowTaskExecuteProgressRequest_H_
