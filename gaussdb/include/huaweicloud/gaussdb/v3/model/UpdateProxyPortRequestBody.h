
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyPortRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyPortRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改读写分离端口号请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateProxyPortRequestBody
    : public ModelBase
{
public:
    UpdateProxyPortRequestBody();
    virtual ~UpdateProxyPortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProxyPortRequestBody members

    /// <summary>
    /// 修改后的读写分离端口。  GaussDB(for MySQL) Proxy端口号范围：大于等于1025，小于等于65534，不包含端口1033、5342-5345、12017、20000、20201、20202、33062、33071。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);


protected:
    int32_t port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateProxyPortRequestBody_H_
