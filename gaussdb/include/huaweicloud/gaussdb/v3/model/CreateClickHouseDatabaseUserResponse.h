
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateClickHouseDatabaseUserResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateClickHouseDatabaseUserResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateClickHouseDatabaseUserResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateClickHouseDatabaseUserResponse();
    virtual ~CreateClickHouseDatabaseUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateClickHouseDatabaseUserResponse members

    /// <summary>
    /// 请求结果。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);


protected:
    std::string result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateClickHouseDatabaseUserResponse_H_