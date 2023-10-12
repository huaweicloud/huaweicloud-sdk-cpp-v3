
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  RegisterDmsKafkaInstanceRequest
    : public ModelBase
{
public:
    RegisterDmsKafkaInstanceRequest();
    virtual ~RegisterDmsKafkaInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterDmsKafkaInstanceRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RegisterDmsKafkaInstanceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RegisterDmsKafkaInstanceRequestBody& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    RegisterDmsKafkaInstanceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RegisterDmsKafkaInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<RegisterDmsKafkaInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_RegisterDmsKafkaInstanceRequest_H_
