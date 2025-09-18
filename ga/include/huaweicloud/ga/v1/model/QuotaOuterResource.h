
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_QuotaOuterResource_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_QuotaOuterResource_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额资源。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  QuotaOuterResource
    : public ModelBase
{
public:
    QuotaOuterResource();
    virtual ~QuotaOuterResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaOuterResource members

    /// <summary>
    /// 配额标识。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 配额的最小阈值。
    /// </summary>

    int32_t getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(int32_t value);

    /// <summary>
    /// 配额的最大阈值。
    /// </summary>

    int32_t getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(int32_t value);

    /// <summary>
    /// 配额大小。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t min_;
    bool minIsSet_;
    int32_t max_;
    bool maxIsSet_;
    int32_t quota_;
    bool quotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_QuotaOuterResource_H_
