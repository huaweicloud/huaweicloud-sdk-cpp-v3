
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedResourceCapacity_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedResourceCapacity_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DedicatedResourceCapacity
    : public ModelBase
{
public:
    DedicatedResourceCapacity();
    virtual ~DedicatedResourceCapacity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DedicatedResourceCapacity members

    /// <summary>
    /// 内存大小，单位GB
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// 磁盘容量，单位GB
    /// </summary>

    int64_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int64_t value);

    /// <summary>
    /// cpu核数
    /// </summary>

    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);


protected:
    int32_t ram_;
    bool ramIsSet_;
    int64_t volume_;
    bool volumeIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedResourceCapacity_H_
