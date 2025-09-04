
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpgradeDatabasesRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpgradeDatabasesRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/BatchUpgradeDatabasesRequestBody.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BatchUpgradeDatabasesRequest
    : public ModelBase
{
public:
    BatchUpgradeDatabasesRequest();
    virtual ~BatchUpgradeDatabasesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpgradeDatabasesRequest members

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

    BatchUpgradeDatabasesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchUpgradeDatabasesRequestBody& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchUpgradeDatabasesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchUpgradeDatabasesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchUpgradeDatabasesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BatchUpgradeDatabasesRequest_H_
