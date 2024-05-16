
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_ha_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_ha_H_


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
/// 部署信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StarRocksCreateRequest_ha
    : public ModelBase
{
public:
    StarRocksCreateRequest_ha();
    virtual ~StarRocksCreateRequest_ha();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StarRocksCreateRequest_ha members

    /// <summary>
    /// 部署模式。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_ha_H_
