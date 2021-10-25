
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_QuotaResourceParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_QuotaResourceParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 配额资源数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  QuotaResourceParams
    : public ModelBase
{
public:
    QuotaResourceParams();
    virtual ~QuotaResourceParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QuotaResourceParams members

    /// <summary>
    /// 资源类型server_groups：表示保护组资源类型。replications：表示复制对资源类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 已经使用的资源个数。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 资源配额。-1：表示无穷大。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// 设置该资源配额允许的最小值。
    /// </summary>

    int32_t getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(int32_t value);

    /// <summary>
    /// 设置该资源配额允许的最大值。-1：表示无穷大。
    /// </summary>

    int32_t getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t used_;
    bool usedIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t min_;
    bool minIsSet_;
    int32_t max_;
    bool maxIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_QuotaResourceParams_H_
