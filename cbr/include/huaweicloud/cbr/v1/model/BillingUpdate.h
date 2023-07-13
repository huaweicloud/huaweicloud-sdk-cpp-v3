
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BillingUpdate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BillingUpdate_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BillingUpdate
    : public ModelBase
{
public:
    BillingUpdate();
    virtual ~BillingUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BillingUpdate members

    /// <summary>
    /// 存储库规格
    /// </summary>

    std::string getConsistentLevel() const;
    bool consistentLevelIsSet() const;
    void unsetconsistentLevel();
    void setConsistentLevel(const std::string& value);

    /// <summary>
    /// 存储库大小，单位为GB
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string consistentLevel_;
    bool consistentLevelIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BillingUpdate_H_
