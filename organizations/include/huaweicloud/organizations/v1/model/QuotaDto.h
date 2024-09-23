
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_QuotaDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_QuotaDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 组织的配额。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  QuotaDto
    : public ModelBase
{
public:
    QuotaDto();
    virtual ~QuotaDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QuotaDto members

    /// <summary>
    /// 配额类型。account：账号；organizational_unit：组织单元；policy：策略。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 配额数量。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// 最小配额。
    /// </summary>

    int32_t getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(int32_t value);

    /// <summary>
    /// 最大配额。
    /// </summary>

    int32_t getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(int32_t value);

    /// <summary>
    /// 已使用数量。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t min_;
    bool minIsSet_;
    int32_t max_;
    bool maxIsSet_;
    int32_t used_;
    bool usedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_QuotaDto_H_
