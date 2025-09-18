
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticStatusV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticStatusV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  StatisticStatusV2
    : public ModelBase
{
public:
    StatisticStatusV2();
    virtual ~StatisticStatusV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticStatusV2 members

    /// <summary>
    /// 未解决
    /// </summary>

    int32_t getUnresolved() const;
    bool unresolvedIsSet() const;
    void unsetunresolved();
    void setUnresolved(int32_t value);

    /// <summary>
    /// 已解决
    /// </summary>

    int32_t getResolved() const;
    bool resolvedIsSet() const;
    void unsetresolved();
    void setResolved(int32_t value);

    /// <summary>
    /// 已忽略
    /// </summary>

    int32_t getDismissed() const;
    bool dismissedIsSet() const;
    void unsetdismissed();
    void setDismissed(int32_t value);


protected:
    int32_t unresolved_;
    bool unresolvedIsSet_;
    int32_t resolved_;
    bool resolvedIsSet_;
    int32_t dismissed_;
    bool dismissedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_StatisticStatusV2_H_
