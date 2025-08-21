
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetLogLtsConfigsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetLogLtsConfigsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/AddLogConfigResponseBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetLogLtsConfigsRequest
    : public ModelBase
{
public:
    SetLogLtsConfigsRequest();
    virtual ~SetLogLtsConfigsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetLogLtsConfigsRequest members

    /// <summary>
    /// 引擎，暂只支持mysql。
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddLogConfigResponseBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddLogConfigResponseBody& value);


protected:
    std::string engine_;
    bool engineIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    AddLogConfigResponseBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetLogLtsConfigsRequest& dereference_from_shared_ptr(std::shared_ptr<SetLogLtsConfigsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetLogLtsConfigsRequest_H_
