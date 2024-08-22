
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadUserJdbcDriverRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadUserJdbcDriverRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/UploadUserJdbcDriverRequestBody.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  UploadUserJdbcDriverRequest
    : public ModelBase
{
public:
    UploadUserJdbcDriverRequest();
    virtual ~UploadUserJdbcDriverRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadUserJdbcDriverRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 指定待上传的驱动文件类型。取值范围： - db2：DB2 for LUW - informix：Informix
    /// </summary>

    std::string getDriverType() const;
    bool driverTypeIsSet() const;
    void unsetdriverType();
    void setDriverType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UploadUserJdbcDriverRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UploadUserJdbcDriverRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string driverType_;
    bool driverTypeIsSet_;
    UploadUserJdbcDriverRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UploadUserJdbcDriverRequest& dereference_from_shared_ptr(std::shared_ptr<UploadUserJdbcDriverRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadUserJdbcDriverRequest_H_
