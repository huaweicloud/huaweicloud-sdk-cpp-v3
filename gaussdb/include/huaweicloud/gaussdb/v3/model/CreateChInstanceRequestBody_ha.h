
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_ha_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_ha_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateChInstanceRequestBody_ha
    : public ModelBase
{
public:
    CreateChInstanceRequestBody_ha();
    virtual ~CreateChInstanceRequestBody_ha();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateChInstanceRequestBody_ha members

    /// <summary>
    /// 部署模式。 取值范围： - Single：单机 - Ha：主备
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_ha_H_
