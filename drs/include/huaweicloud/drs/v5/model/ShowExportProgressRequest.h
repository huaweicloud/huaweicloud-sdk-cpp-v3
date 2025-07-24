
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowExportProgressRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowExportProgressRequest_H_


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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowExportProgressRequest
    : public ModelBase
{
public:
    ShowExportProgressRequest();
    virtual ~ShowExportProgressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowExportProgressRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 导出创建模板接口返回的异步ID。
    /// </summary>

    std::string getAsyncJobId() const;
    bool asyncJobIdIsSet() const;
    void unsetasyncJobId();
    void setAsyncJobId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowExportProgressRequest& dereference_from_shared_ptr(std::shared_ptr<ShowExportProgressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowExportProgressRequest_H_
