
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessPolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessPolicy_H_


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
/// 设置serverless配置策略请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateServerlessPolicy
    : public ModelBase
{
public:
    UpdateServerlessPolicy();
    virtual ~UpdateServerlessPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerlessPolicy members

    /// <summary>
    /// 单节点VCPUs伸缩下限，取值范围可根据[查询数据库规格](https://support.huaweicloud.com/api-gaussdb/ShowGaussMySqlFlavors.html)接口获取。
    /// </summary>

    int32_t getMinVcpus() const;
    bool minVcpusIsSet() const;
    void unsetminVcpus();
    void setMinVcpus(int32_t value);

    /// <summary>
    /// 单节点VCPUs伸缩上限，取值范围可根据[查询数据库规格](https://support.huaweicloud.com/api-gaussdb/ShowGaussMySqlFlavors.html)接口获取。
    /// </summary>

    int32_t getMaxVcpus() const;
    bool maxVcpusIsSet() const;
    void unsetmaxVcpus();
    void setMaxVcpus(int32_t value);


protected:
    int32_t minVcpus_;
    bool minVcpusIsSet_;
    int32_t maxVcpus_;
    bool maxVcpusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateServerlessPolicy_H_
