
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteLogLtsConfigsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteLogLtsConfigsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DeleteLogConfigResponseBody.h>
#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteLogLtsConfigsRequest
    : public ModelBase
{
public:
    DeleteLogLtsConfigsRequest();
    virtual ~DeleteLogLtsConfigsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteLogLtsConfigsRequest members

    /// <summary>
    /// 引擎。
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

    DeleteLogConfigResponseBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteLogConfigResponseBody& value);


protected:
    std::string engine_;
    bool engineIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    DeleteLogConfigResponseBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteLogLtsConfigsRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteLogLtsConfigsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteLogLtsConfigsRequest_H_
