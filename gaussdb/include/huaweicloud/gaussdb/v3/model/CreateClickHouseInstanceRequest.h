
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateClickHouseInstanceRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateClickHouseInstanceRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateClickHouseInstanceRequest
    : public ModelBase
{
public:
    CreateClickHouseInstanceRequest();
    virtual ~CreateClickHouseInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateClickHouseInstanceRequest members

    /// <summary>
    /// TaurusDB实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateChInstanceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateChInstanceRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    CreateChInstanceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateClickHouseInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<CreateClickHouseInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateClickHouseInstanceRequest_H_
