
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChEnlargeVolumeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChEnlargeVolumeRequestBody_H_


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
/// 磁盘扩容请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ChEnlargeVolumeRequestBody
    : public ModelBase
{
public:
    ChEnlargeVolumeRequestBody();
    virtual ~ChEnlargeVolumeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChEnlargeVolumeRequestBody members

    /// <summary>
    /// 磁盘容量。取值范围：50GB~32000GB。
    /// </summary>

    int32_t getSizeInGb() const;
    bool sizeInGbIsSet() const;
    void unsetsizeInGb();
    void setSizeInGb(int32_t value);


protected:
    int32_t sizeInGb_;
    bool sizeInGbIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ChEnlargeVolumeRequestBody_H_
