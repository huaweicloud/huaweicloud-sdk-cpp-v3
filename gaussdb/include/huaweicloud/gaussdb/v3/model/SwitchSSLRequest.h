
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchSSLRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchSSLRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchSSLRequest
    : public ModelBase
{
public:
    SwitchSSLRequest();
    virtual ~SwitchSSLRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SwitchSSLRequest members

    /// <summary>
    /// SSL数据加密开关设置。  - true: 开启SSL数据加密。 - false: 关闭SSL数据加密。
    /// </summary>

    bool isSslOption() const;
    bool sslOptionIsSet() const;
    void unsetsslOption();
    void setSslOption(bool value);


protected:
    bool sslOption_;
    bool sslOptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchSSLRequest_H_
