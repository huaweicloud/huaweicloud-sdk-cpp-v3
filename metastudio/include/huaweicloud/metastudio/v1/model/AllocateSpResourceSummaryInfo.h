
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AllocateSpResourceSummaryInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AllocateSpResourceSummaryInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分配给租户的资源概览。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AllocateSpResourceSummaryInfo
    : public ModelBase
{
public:
    AllocateSpResourceSummaryInfo();
    virtual ~AllocateSpResourceSummaryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AllocateSpResourceSummaryInfo members

    /// <summary>
    /// 资源规格编码
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 资源数量。
    /// </summary>

    double getResourceNum() const;
    bool resourceNumIsSet() const;
    void unsetresourceNum();
    void setResourceNum(double value);

    /// <summary>
    /// 资源已使用数量。
    /// </summary>

    double getResourceUsedNum() const;
    bool resourceUsedNumIsSet() const;
    void unsetresourceUsedNum();
    void setResourceUsedNum(double value);

    /// <summary>
    /// 资源在TMS上的剩余量
    /// </summary>

    double getResourceRemindQuota() const;
    bool resourceRemindQuotaIsSet() const;
    void unsetresourceRemindQuota();
    void setResourceRemindQuota(double value);


protected:
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    double resourceNum_;
    bool resourceNumIsSet_;
    double resourceUsedNum_;
    bool resourceUsedNumIsSet_;
    double resourceRemindQuota_;
    bool resourceRemindQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AllocateSpResourceSummaryInfo_H_
