
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_volume_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_volume_H_


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
/// 存储规格。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateChInstanceRequestBody_volume
    : public ModelBase
{
public:
    CreateChInstanceRequestBody_volume();
    virtual ~CreateChInstanceRequestBody_volume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateChInstanceRequestBody_volume members

    /// <summary>
    /// 磁盘IO类型。 取值范围： - SSD：超高IO - ESSD：极速型SSD
    /// </summary>

    std::string getIoType() const;
    bool ioTypeIsSet() const;
    void unsetioType();
    void setIoType(const std::string& value);

    /// <summary>
    /// 磁盘容量。取值范围：50GB~32000GB。
    /// </summary>

    int32_t getCapacityInGb() const;
    bool capacityInGbIsSet() const;
    void unsetcapacityInGb();
    void setCapacityInGb(int32_t value);


protected:
    std::string ioType_;
    bool ioTypeIsSet_;
    int32_t capacityInGb_;
    bool capacityInGbIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_volume_H_
