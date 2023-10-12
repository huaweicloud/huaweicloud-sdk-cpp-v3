
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedComputeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedComputeInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DedicatedComputeInfo
    : public ModelBase
{
public:
    DedicatedComputeInfo();
    virtual ~DedicatedComputeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DedicatedComputeInfo members

    /// <summary>
    /// 专属资源池中cpu总数。
    /// </summary>

    int32_t getVcpusTotal() const;
    bool vcpusTotalIsSet() const;
    void unsetvcpusTotal();
    void setVcpusTotal(int32_t value);

    /// <summary>
    /// 专属资源池已使用的cpu数。
    /// </summary>

    int32_t getVcpusUsed() const;
    bool vcpusUsedIsSet() const;
    void unsetvcpusUsed();
    void setVcpusUsed(int32_t value);

    /// <summary>
    /// 专属资源池计算内存大小, 单位GB。
    /// </summary>

    int32_t getRamTotal() const;
    bool ramTotalIsSet() const;
    void unsetramTotal();
    void setRamTotal(int32_t value);

    /// <summary>
    /// 专属资源池已使用的计算内存大小，单位GB。
    /// </summary>

    int32_t getRamUsed() const;
    bool ramUsedIsSet() const;
    void unsetramUsed();
    void setRamUsed(int32_t value);

    /// <summary>
    /// 专属资源池计算资源规格码。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 专属资源池计算主机数量。
    /// </summary>

    int32_t getHostNum() const;
    bool hostNumIsSet() const;
    void unsethostNum();
    void setHostNum(int32_t value);


protected:
    int32_t vcpusTotal_;
    bool vcpusTotalIsSet_;
    int32_t vcpusUsed_;
    bool vcpusUsedIsSet_;
    int32_t ramTotal_;
    bool ramTotalIsSet_;
    int32_t ramUsed_;
    bool ramUsedIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    int32_t hostNum_;
    bool hostNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DedicatedComputeInfo_H_
