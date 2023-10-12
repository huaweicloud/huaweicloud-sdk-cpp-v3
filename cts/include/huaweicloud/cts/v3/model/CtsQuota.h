
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CtsQuota_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CtsQuota_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  CtsQuota
    : public ModelBase
{
public:
    CtsQuota();
    virtual ~CtsQuota();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CtsQuota members

    /// <summary>
    /// quota资源类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 已使用的资源个数。
    /// </summary>

    int64_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int64_t value);

    /// <summary>
    /// 总资源个数。
    /// </summary>

    int64_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int64_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int64_t used_;
    bool usedIsSet_;
    int64_t quota_;
    bool quotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CtsQuota_H_
