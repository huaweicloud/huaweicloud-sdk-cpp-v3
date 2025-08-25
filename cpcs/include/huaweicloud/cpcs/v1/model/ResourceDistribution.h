
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ResourceDistribution_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ResourceDistribution_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ResourceDistribution
    : public ModelBase
{
public:
    ResourceDistribution();
    virtual ~ResourceDistribution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceDistribution members

    /// <summary>
    /// 密钥管理服务密钥数量
    /// </summary>

    int32_t getKms() const;
    bool kmsIsSet() const;
    void unsetkms();
    void setKms(int32_t value);


protected:
    int32_t kms_;
    bool kmsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ResourceDistribution_H_
