
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusProxyScaleRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusProxyScaleRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// proxy实例规格变更请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusProxyScaleRequest
    : public ModelBase
{
public:
    TaurusProxyScaleRequest();
    virtual ~TaurusProxyScaleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TaurusProxyScaleRequest members

    /// <summary>
    /// 需要变更的新规格ID。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusProxyScaleRequest_H_
